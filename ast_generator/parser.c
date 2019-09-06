
#include "julia.h"
#include "tok.h"
#include "grammar.tab.h"
#include "scanner.h"

/* these global variable are accessed by the parser when constructing nodes */
jl_value_t * mjl_AstNode_type;
jl_function_t * mjl_make_fxn, * mjl_append_fxn, * mjl_prepend_fxn, * mjl_func_mydump;


#define TREE_TYPE_NODE   0
#define TREE_TYPE_INT    1
#define TREE_TYPE_STRING 2


astree * aststring_make(char * s)
{
    astree * r = (astree *) malloc(sizeof(astree));
    r->type = TREE_TYPE_STRING;
    r->number = -1;
    r->string = s;
    r->length = 0;
    r->rule = -1;
    r->child = NULL;
    return r;
}

astree * astint_make(int n)
{
    astree * r = (astree *) malloc(sizeof(astree));
    r->type = TREE_TYPE_INT;
    r->number = n;
    r->string = NULL;
    r->length = 0;
    r->rule = -1;
    r->child = NULL;
    return r;
}


astree * astnode_make(int h, size_t len)
{
    astree * r = (astree *) malloc(sizeof(astree));
    r->type = TREE_TYPE_NODE;
    r->number = -1;
    r->string = NULL;
    r->length = len;
    r->rule = h;
    r->child = (astree **) malloc((len + (len == 0))*sizeof(astree *));
    return r;
}


void ast_clear(astree * r)
{
    if (r->type == TREE_TYPE_STRING)
    {
        free(r->string);
    }
    else if (r->type == TREE_TYPE_NODE)
    {
        for (size_t i = 0; i < r->length; i++)
        {
            ast_clear(r->child[i]);
        }
        free(r->child);
    }

    free(r);
}


astree * astnode_make0(int h)
{
    astree * r = astnode_make(h, 0);
    return r;
}

astree * astnode_make1(int h, astree * a1)
{
    astree * r = astnode_make(h, 1);
    r->child[0] = a1;
    return r;
}

astree * astnode_make2(int h, astree * a1, astree * a2)
{
    astree * r = astnode_make(h, 2);
    r->child[0] = a1;
    r->child[1] = a2;
    return r;
}

astree * astnode_make3(int h, astree * a1, astree * a2, astree * a3)
{
    astree * r = astnode_make(h, 3);
    r->child[0] = a1;
    r->child[1] = a2;
    r->child[2] = a3;
    return r;
}

astree * astnode_make4(int h, astree * a1, astree * a2, astree * a3, astree * a4)
{
    astree * r = astnode_make(h, 4);
    r->child[0] = a1;
    r->child[1] = a2;
    r->child[2] = a3;
    r->child[3] = a4;
    return r;    
}

astree * astnode_append(astree * x, astree * a)
{
    astree * r = astnode_make(x->rule, x->length + 1);
    for (size_t i = 0; i < x->length; i++)
    {
        r->child[i] = x->child[i];
    }
    r->child[x->length] = a;
    free(x);
    return r;
}

astree * astnode_prepend(astree * x, astree * a)
{
    astree * r = astnode_make(x->rule, x->length + 1);
    r->child[0] = a;
    for (size_t i = 0; i < x->length; i++)
    {
        r->child[i + 1] = x->child[i];
    }
    free(x);
    return r;
}


jl_value_t * make_jl_tree(astree * a)
{
    if (a->type == TREE_TYPE_INT)
    {
        return jl_box_int64(a->number);
    }
    else if (a->type == TREE_TYPE_STRING)
    {
        return jl_cstr_to_string(a->string);
    }

    jl_value_t ** args;
    JL_GC_PUSHARGS(args, a->length + 1);
    args[0] = jl_box_int64(a->rule);
    for (size_t i = 0; i < a->length; i++)
    {
        args[i + 1] = make_jl_tree(a->child[i]);
    }
    JL_GC_POP();

    return jl_call(mjl_make_fxn, args, a->length + 1);
}


jl_value_t * singular_parse(const char * s)
{
    mjl_make_fxn = jl_get_function(jl_main_module, "AstNodeMake");
//    mjl_append_fxn = jl_get_function(jl_main_module, "AstNodeAppend");
//    mjl_prepend_fxn = jl_get_function(jl_main_module, "AstNodePrepend");

//    jl_eval_string("function mydump(e::Any) dump(e, maxdepth=100) end");
//    jl_eval_string("function mydump(e::Any) print(e) end");
//    mjl_func_mydump = jl_get_function(jl_main_module, "mydump");

    JL_GC_PUSH1(&mjl_make_fxn);


/*
printf("astnode: %p\n", mjl_AstNode_type);
        fflush(stdout);
        jl_call1(mjl_func_mydump, mjl_AstNode_type);
        printf("\n\n");
        fflush(stdout);
*/
//printf("   make: %p\n", mjl_make_fxn);
/*
        fflush(stdout);
        jl_call1(mjl_func_mydump, mjl_make_fxn);
        printf("\n\n");
        fflush(stdout);
*/

/*
printf(" append: %p\n", mjl_append_fxn);
        fflush(stdout);
        jl_call1(mjl_func_mydump, mjl_append_fxn);
        printf("\n\n");
        fflush(stdout);

printf("prepend: %p\n", mjl_prepend_fxn);
        fflush(stdout);
        jl_call1(mjl_func_mydump, mjl_prepend_fxn);
        printf("\n\n");
        fflush(stdout);
*/

    astree * retv = NULL;
    yy_scan_string(s);
    yyparse(&retv);

    jl_value_t * r;
    if (retv == NULL)
    {
        r = jl_cstr_to_string("syntax/parser error you/I dummy");
    }
    else
    {
        r = make_jl_tree(retv);
        ast_clear(retv);
    }
    JL_GC_POP();
    return r;
}
