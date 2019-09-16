%{
/****************************************
*  Computer Algebra System SINGULAR     *
****************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "tok.h"

int feReadLine(char* b, int l);
#define ALLOC(a) omAlloc((a))
#ifndef NEW_FLEX
#endif /* NEW_LEX */
int blocknest = 0;
extern char * yytext;
//extern unsigned char * yytext;
extern yy_size_t yyleng;
extern int inerror;

static char * duplicate_string(const char * t)
{
    size_t n = strlen(t);
    char * s = (char *) malloc(n + 1);
    strcpy(s, t);
    return s;
}

static char * dupyytext()
{
    char* s;
    if (yyleng>0) yytext[yyleng-1] = '\0';
    s = (char*)malloc((yyleng + 1) * sizeof(char));
    strncpy(s, (char *)yytext, yyleng);
    return s;
}


static char * dupyytextNL()
{
  int i = yyleng;//strlen((char *)yytext);
  char * rc = (char*)malloc(3+i);
  if (i>0)
  {
    strncpy( rc, (char *)yytext, i-1 );
  }
  else
  {
    i++;
  }
  rc[i-1] = '\n';
  rc[i] = '\n';
  rc[i+1] = '\0';
  return rc;
}

struct token_lookup_entry {
    const char * name;
    int tokval; // lvalp->i
    int toktype;
};

static struct token_lookup_entry token_lookup[] = {
{"bigint",      361,        ROOT_DECL},
{"bigintmat",   269,        BIGINTMAT_CMD},
{"continue",    331,        CONTINUE_CMD},
{"int",         419,        ROOT_DECL},
{"intmat",      270,        INTMAT_CMD},
{"intvec",      424,        ROOT_DECL_LIST},
{"list",        441,        ROOT_DECL_LIST},
{"print",       478,        CMD_12},
{"proc",        PROC_CMD,   PROC_CMD},
{"size",        378,        CMD_1},
{"string",      508,        ROOT_DECL_LIST},
{"typeof",      517,        CMD_1},
};


  #undef YY_DECL
  #define YY_DECL int yylex(YYSTYPE* lvalp)



//#define YY_INPUT(buf,result,max_size) \
//    { \
//    int c = getchar(); \
//    result = (c == EOF) ? YY_NULL : (buf[0] = c, 1); \
//    }

%}

digit          [0-9]
letter         [@a-zA-Z\']
integer        {digit}+
monom          {letter}+{digit}*
rgvars         ({digit}+[/])*{digit}+{monom}+
realnum        {digit}*"."{digit}+("e"[+-]{digit}+)?
name           ({letter}({letter}*{digit}*_*)*|_)
parname        #

/* %start START */
%option never-interactive

%x string
%x brace
%x bracestr
%x bracket
%x asstring

%%
\/\/[^\n]*
^[ \r\t\n]*#![^\n]*
"/*"                     {
                            while (1) {
                                int c;
                                while ( (c = input()) != '*' && c != EOF );
                                if ( c == '*' ) {
                                    while ( (c = input()) == '*' );
                                    if ( c == '/' ) break; /* found the end */
                                } else {
                                    break;
                                }
                            }
                         }

if                      {
                            return IF_CMD;
                        }
else                    {
                            return ELSE_CMD;
                        }
while                   {
                            return WHILE_CMD;
                        }
for                     {
                            return FOR_CMD;
                        }
return                  {
                            return RETURN;
                        }

("help"|"?")[ \t\n]*     {
                           BEGIN(asstring);
                           return HELP_CMD;
                         }

example[ \t\n]*          {
                           BEGIN(asstring);
                           return EXAMPLE_CMD;
                         }
<asstring>[^;\n]+        {
                           lvalp->name = dupyytext();
                           BEGIN(INITIAL);

printf("SCANNER return STRINGTOK 1\n");
                           return STRINGTOK;
                         }
<asstring>;              {
                           BEGIN(INITIAL);
                           return *yytext;
                         }

<brace>"\""              {
                           BEGIN(bracestr);
                           yymore();
                         }
<brace>"("               { if (blocknest++) yymore(); }
<brace>[^;\(\)]          { if (blocknest) yymore(); }
<brace>";"               {
                           if (blocknest)
                           {
                             lvalp->name = dupyytext();
printf("SCANNER return STRINGTOK 2\n");
                             return STRINGTOK;
                           }
                         }
<brace>")"               {
                           if (--blocknest <= 0)
                           {
                             BEGIN(INITIAL);
                             lvalp->name = dupyytext();
printf("SCANNER return STRINGTOK 3\n");
                             return STRINGTOK;
                           }
                           yymore();
                         }
<bracestr>"\""           {
                           BEGIN(brace);
                           yymore();
                         }
<bracestr>[^\"]          { yymore(); }
<bracket>"("             {
                            return '(';
                          }
<bracket>","             {
                            return ','; 
                         }
<bracket>[ \t\n]*        { ; }
<bracket>[^\(\), \t\n]*  {
                           lvalp->name = dupyytext();
printf("SCANNER return STRINGTOK 4\n");
                           return STRINGTOK;
                         }
<bracket>\"[^\"]*\"      {
                           lvalp->name = dupyytext();
printf("SCANNER return STRINGTOK 5\n");
                           return STRINGTOK;
                         }
<bracket>")"             {
                           BEGIN(INITIAL);
                           return ')';
                         }

"{"                      {
                           BEGIN(INITIAL);
                           return '{';
                         }
"}"                      {
                           BEGIN(INITIAL);
                           return '}';
                         }
"\""                     { BEGIN(string);}
~                        { return SYS_BREAK; }
<string>[^\"]            { yymore(); }
<string>"\\\\"           { yymore(); }
<string>"\\\""           { yymore(); }
<string>"\""             {
                           char * s;
                           BEGIN(INITIAL);
                           s = lvalp->name = dupyytext();
                           s = lvalp->name = dupyytext();
                           while (*yytext)
                           {
                             if (*yytext == '\\') yytext++;
                             *s++ = *yytext++;
                           }
                           *s++ = *yytext++;
                           return STRINGTOK;
                         }

[ \t\r\n]                /* skip whitespace */
".."                     { return DOTDOT; }
"::"                     { return COLONCOLON; }
"--"                     { return MINUSMINUS; }
"++"                     { return PLUSPLUS  ; }
"=="                     { return EQUAL_EQUAL; }
"&&"                     { lvalp->i='&'; return LOGIC_OP; }
"||"                     { lvalp->i='|'; return LOGIC_OP; }
"<="                     { lvalp->i=LE; return COMP_OP; }
">="                     { lvalp->i=GE; return COMP_OP; }
"!"                      { return NOT; }
"!="                     { return NOTEQUAL; }
"<>"                     { return NOTEQUAL; }
"**"                     { return '^'; }
"->"                     { return ARROW; }
\\                       { return '\\'; }
newline                  {
                           lvalp->name = duplicate_string("\n");
printf("SCANNER return STRINGTOK 7\n");
                           return STRINGTOK;
                         }
{integer}                {
                           lvalp->name = duplicate_string(yytext);
                           return INT_CONST;
                         }
{integer}\/{integer}     {
                           lvalp->name = duplicate_string(yytext);
                           return RINGVAR;
                         }
\$                        {
                           lvalp->name = duplicate_string(yytext);
                           return INT_CONST;
                         }
(quit|exit)[ \t\n]*;     {
                           printf("quit\n");
                           lvalp->name = duplicate_string(yytext);
                            return INT_CONST;
                         }

{rgvars}|{realnum}       {
                           lvalp->name = duplicate_string(yytext);
                           return RINGVAR;
                         }
[0-9]+\."e"[+-][0-9]+    {
                           lvalp->name = duplicate_string(yytext);
                           return RINGVAR;
                         }
[0-9]+\./[^\.]           {
                           lvalp->name = duplicate_string(yytext);
                           return RINGVAR;
                         }

({parname}|{name})      {
                           /* {name} */


                            int rc = 0;
                            for (int i = 0; i < sizeof(token_lookup)/sizeof(struct token_lookup_entry); i++)
                            {
//printf("SCANNER LOOKING AT %s\n", token_lookup_entry[i].name);
                                if (strcmp(yytext, token_lookup[i].name) == 0)
                                {
                                    lvalp->i = token_lookup[i].tokval;
                                    rc = token_lookup[i].toktype;
                                    break;
                                }
                            }

                            if (rc)
                            {
printf("SCANNER %s RETURNING %d with lvalp->i = %d\n", (char *)yytext, rc, lvalp->i);
                                return rc;
                            }

                            lvalp->name = duplicate_string(yytext);
printf("SCANNER %s RETURNING %d (UNKNOWN_IDENT)\n", (char *)yytext, UNKNOWN_IDENT);

                            return UNKNOWN_IDENT;
                        }

.                       {
                           /*if (*yytext == '\n') REJECT;*/
                           char ch= *yytext;
                           lvalp->i = ch;
                           switch(ch)
                           {
                             /* case '&': */
                             case '|':
                               return LOGIC_OP;
                             /* case '/': */
                             case '%':
                             case '*':
                               return MULDIV_OP;
                             /* case '<': */
                             case '>':
                               return COMP_OP;
                             default:
                               break;
                            }
                            return ch;
                         }
%%

void * myynewbuffer()
{
  void * oldb = YY_CURRENT_BUFFER;
  yy_switch_to_buffer(yy_create_buffer(NULL, YY_BUF_SIZE));
  return oldb;
}

void myyoldbuffer(void * oldb)
{
  yy_delete_buffer(YY_CURRENT_BUFFER);
  yy_switch_to_buffer((YY_BUFFER_STATE)oldb);
  //yy_flush_buffer((YY_BUFFER_STATE)oldb);
}

void myychangebuffer()
{
  yy_flush_buffer((YY_BUFFER_STATE)YY_CURRENT_BUFFER);
  yy_delete_buffer(YY_CURRENT_BUFFER);
  yy_switch_to_buffer(yy_create_buffer(NULL, YY_BUF_SIZE));
}

void my_yy_flush() { YY_FLUSH_BUFFER;BEGIN(0); }


int yywrap() {
   return 1;
}
