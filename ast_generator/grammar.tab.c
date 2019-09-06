/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 7 "grammar.y" /* yacc.c:339  */


#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

#include "tok.h"
#include "grammar.tab.h"

#define JLGRAMMAR_DBGMASK (1 + 2)


extern int   yylineno;
extern FILE* yyin;

extern int        cmdtok;
extern int        inerror;

int yylex(YYSTYPE *lvalp);
void yyerror(astree ** retv, const char * fmt);

void enterrule(const char * s);
void exitrule(const char * s);
void exitrule_ex(const char * s, astree * expr);
void exitrule_int(const char * s, int i);
void exitrule_str(const char * s, const char * name);

#line 96 "grammar.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "grammar.tab.h".  */
#ifndef YY_YY_GRAMMAR_TAB_H_INCLUDED
# define YY_YY_GRAMMAR_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    DOTDOT = 258,
    EQUAL_EQUAL = 259,
    GE = 260,
    LE = 261,
    MINUSMINUS = 262,
    NOT = 263,
    NOTEQUAL = 264,
    PLUSPLUS = 265,
    COLONCOLON = 266,
    ARROW = 267,
    GRING_CMD = 268,
    BIGINTMAT_CMD = 269,
    INTMAT_CMD = 270,
    PROC_CMD = 271,
    RING_CMD = 272,
    BEGIN_RING = 273,
    BUCKET_CMD = 274,
    IDEAL_CMD = 275,
    MAP_CMD = 276,
    MATRIX_CMD = 277,
    MODUL_CMD = 278,
    NUMBER_CMD = 279,
    POLY_CMD = 280,
    RESOLUTION_CMD = 281,
    SMATRIX_CMD = 282,
    VECTOR_CMD = 283,
    BETTI_CMD = 284,
    E_CMD = 285,
    FETCH_CMD = 286,
    FREEMODULE_CMD = 287,
    KEEPRING_CMD = 288,
    IMAP_CMD = 289,
    KOSZUL_CMD = 290,
    MAXID_CMD = 291,
    MONOM_CMD = 292,
    PAR_CMD = 293,
    PREIMAGE_CMD = 294,
    VAR_CMD = 295,
    VALTVARS = 296,
    VMAXDEG = 297,
    VMAXMULT = 298,
    VNOETHER = 299,
    VMINPOLY = 300,
    END_RING = 301,
    CMD_1 = 302,
    CMD_2 = 303,
    CMD_3 = 304,
    CMD_12 = 305,
    CMD_13 = 306,
    CMD_23 = 307,
    CMD_123 = 308,
    CMD_M = 309,
    ROOT_DECL = 310,
    ROOT_DECL_LIST = 311,
    RING_DECL = 312,
    RING_DECL_LIST = 313,
    EXAMPLE_CMD = 314,
    EXPORT_CMD = 315,
    HELP_CMD = 316,
    KILL_CMD = 317,
    LIB_CMD = 318,
    LISTVAR_CMD = 319,
    SETRING_CMD = 320,
    TYPE_CMD = 321,
    STRINGTOK = 322,
    INT_CONST = 323,
    UNKNOWN_IDENT = 324,
    RINGVAR = 325,
    PROC_DEF = 326,
    APPLY = 327,
    ASSUME_CMD = 328,
    BREAK_CMD = 329,
    CONTINUE_CMD = 330,
    ELSE_CMD = 331,
    EVAL = 332,
    QUOTE = 333,
    FOR_CMD = 334,
    IF_CMD = 335,
    SYS_BREAK = 336,
    WHILE_CMD = 337,
    RETURN = 338,
    PARAMETER = 339,
    QUIT_CMD = 340,
    SYSVAR = 341,
    UMINUS = 342,
    JULIA_WHILE_CMD = 343,
    JULIA_SPLICE_CMD = 344,
    JULIA_PUSHBACK_CMD = 345
  };
#endif

/* Value type.  */



int yyparse (astree ** retv);

#endif /* !YY_YY_GRAMMAR_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 232 "grammar.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3588

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  109
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  193
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  453

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   345

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    97,     2,
     100,   101,     2,    89,    95,    90,   104,    91,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    98,    96,
      88,    87,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    92,     2,    93,    94,     2,   108,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   102,     2,   103,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    99,   105,   106,   107
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   209,   209,   216,   226,   233,   240,   247,   254,   261,
     270,   276,   285,   292,   299,   306,   313,   320,   327,   337,
     344,   351,   358,   365,   372,   381,   388,   395,   402,   409,
     416,   423,   430,   438,   446,   453,   460,   467,   474,   481,
     488,   495,   502,   510,   519,   526,   533,   540,   547,   554,
     561,   568,   575,   582,   589,   596,   603,   610,   617,   624,
     631,   638,   645,   652,   659,   666,   673,   680,   687,   694,
     701,   708,   715,   722,   729,   736,   743,   750,   757,   764,
     771,   780,   787,   795,   802,   809,   816,   823,   830,   837,
     844,   851,   858,   865,   872,   879,   887,   886,   900,   908,
     916,   925,   932,   939,   946,   953,   971,   978,   992,  1006,
    1013,  1020,  1027,  1034,  1041,  1050,  1057,  1067,  1074,  1084,
    1091,  1098,  1105,  1112,  1119,  1126,  1133,  1142,  1151,  1158,
    1167,  1176,  1182,  1191,  1198,  1207,  1214,  1222,  1231,  1238,
    1245,  1258,  1267,  1274,  1283,  1292,  1301,  1308,  1317,  1324,
    1331,  1338,  1345,  1352,  1359,  1366,  1373,  1380,  1387,  1394,
    1401,  1408,  1415,  1422,  1431,  1440,  1451,  1458,  1465,  1474,
    1483,  1489,  1498,  1507,  1514,  1526,  1533,  1540,  1547,  1554,
    1563,  1572,  1581,  1588,  1595,  1602,  1611,  1618,  1627,  1634,
    1643,  1648,  1653,  1658
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DOTDOT", "EQUAL_EQUAL", "GE", "LE",
  "MINUSMINUS", "NOT", "NOTEQUAL", "PLUSPLUS", "COLONCOLON", "ARROW",
  "GRING_CMD", "BIGINTMAT_CMD", "INTMAT_CMD", "PROC_CMD", "RING_CMD",
  "BEGIN_RING", "BUCKET_CMD", "IDEAL_CMD", "MAP_CMD", "MATRIX_CMD",
  "MODUL_CMD", "NUMBER_CMD", "POLY_CMD", "RESOLUTION_CMD", "SMATRIX_CMD",
  "VECTOR_CMD", "BETTI_CMD", "E_CMD", "FETCH_CMD", "FREEMODULE_CMD",
  "KEEPRING_CMD", "IMAP_CMD", "KOSZUL_CMD", "MAXID_CMD", "MONOM_CMD",
  "PAR_CMD", "PREIMAGE_CMD", "VAR_CMD", "VALTVARS", "VMAXDEG", "VMAXMULT",
  "VNOETHER", "VMINPOLY", "END_RING", "CMD_1", "CMD_2", "CMD_3", "CMD_12",
  "CMD_13", "CMD_23", "CMD_123", "CMD_M", "ROOT_DECL", "ROOT_DECL_LIST",
  "RING_DECL", "RING_DECL_LIST", "EXAMPLE_CMD", "EXPORT_CMD", "HELP_CMD",
  "KILL_CMD", "LIB_CMD", "LISTVAR_CMD", "SETRING_CMD", "TYPE_CMD",
  "STRINGTOK", "INT_CONST", "UNKNOWN_IDENT", "RINGVAR", "PROC_DEF",
  "APPLY", "ASSUME_CMD", "BREAK_CMD", "CONTINUE_CMD", "ELSE_CMD", "EVAL",
  "QUOTE", "FOR_CMD", "IF_CMD", "SYS_BREAK", "WHILE_CMD", "RETURN",
  "PARAMETER", "QUIT_CMD", "SYSVAR", "'='", "'<'", "'+'", "'-'", "'/'",
  "'['", "']'", "'^'", "','", "';'", "'&'", "':'", "UMINUS", "'('", "')'",
  "'{'", "'}'", "'.'", "JULIA_WHILE_CMD", "JULIA_SPLICE_CMD",
  "JULIA_PUSHBACK_CMD", "'`'", "$accept", "top_lines", "top_pprompt",
  "lines", "pprompt", "npprompt", "flowctrl", "example_dummy", "command",
  "assign", "elemexpr", "exprlist", "expr", "$@1", "quote_start",
  "assume_start", "quote_end", "expr_arithmetic", "left_value",
  "extendedid", "declare_ip_variable", "stringexpr", "rlist", "ordername",
  "orderelem", "OrderingList", "ordering", "cmdeq", "mat_cmd", "filecmd",
  "helpcmd", "examplecmd", "exportcmd", "killcmd", "listcmd", "ringcmd1",
  "ringcmd", "scriptcmd", "setrings", "setringcmd", "typecmd", "ifcmd",
  "whilecmd", "forcmd", "proccmd", "parametercmd", "returncmd", "procargs", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,    61,    60,    43,
      45,    47,    91,    93,    94,    44,    59,    38,    58,   342,
      40,    41,   123,   125,    46,   343,   344,   345,    96
};
# endif

#define YYPACT_NINF -383

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-383)))

#define YYTABLE_NINF -168

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-168)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -383,   640,  -383,   -62,  2886,  -383,  -383,  2952,   -49,  -383,
    -383,   -18,    -9,    -2,    21,    29,    31,    41,    53,  3018,
    3084,  3150,  3216,   -50,  2886,   -32,  2886,    55,  -383,  2886,
    -383,  -383,  -383,  -383,   -53,    64,    73,  -383,  -383,    79,
      97,   102,   113,   117,  -383,   125,  3282,    17,    17,  2886,
    2886,  -383,  2886,  2886,  -383,  -383,  -383,    89,  -383,     8,
     -27,  2399,  2886,  2886,  -383,  2886,   220,   -37,  -383,  3348,
    -383,  -383,  -383,  -383,   111,  -383,  2886,  -383,  -383,  2886,
    -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,   135,   -49,
     141,   154,   161,   175,  -383,     5,   177,  2886,   104,  2399,
      26,  3414,  2886,  2886,  2886,  2886,  2886,  2886,  2886,  2490,
    2886,   123,  2556,   203,  2886,   231,  2622,   399,   162,  -383,
     196,   183,  -383,    75,  2688,  2399,   197,   143,  2886,  -383,
    -383,  -383,  -383,  1630,  2886,  2886,  2952,  2399,   217,  -383,
    -383,     5,   -39,   -28,    22,  -383,  2886,  2754,  -383,  2886,
    -383,  2886,  2886,  -383,  2886,  -383,  2886,  2886,  2886,  2886,
    2886,  2886,  2886,  2886,  2886,   158,  1117,   196,   212,  2886,
    -383,  -383,  2886,    82,  2886,    51,  2399,  2886,  2886,  2556,
    2886,  2622,  2886,  1297,  -383,  2886,  1477,   222,  1651,  1722,
    1747,   139,   375,  1758,   471,  -383,   -25,  1769,  -383,   -24,
    1786,  -383,   -23,  -383,   730,  -383,   -64,    39,   108,   115,
     163,   166,  -383,     0,   169,   103,   -59,   219,   228,   223,
    1818,   820,  2886,  -383,  -383,   225,   232,  -383,  -383,   -26,
    -383,  1882,  1914,  -383,  -383,  -383,  -383,  -383,   -21,  2399,
    2350,   250,   250,  2367,    13,    13,     5,   504,    14,   576,
      13,  -383,  2886,  -383,  -383,  2886,  -383,   409,   526,  2886,
      92,  3414,  1297,  1769,   -16,  1786,    59,   526,  -383,   910,
    1931,  -383,  3414,  -383,  2886,  2886,  2886,  -383,  2886,  -383,
    2886,  2886,  -383,  -383,  -383,  -383,  -383,  -383,   237,  -383,
    -383,  -383,  -383,  -383,   238,   -30,  -383,  -383,  -383,  -383,
    -383,  -383,  -383,  2255,  -383,  -383,   234,   242,  -383,   103,
     243,  3480,  -383,  1942,  2820,  2886,   -58,   245,  -383,  -383,
    2886,  1959,  1959,  1000,  2886,  -383,  1978,   184,  2399,   254,
    -383,  -383,  -383,  2886,   255,  1989,  2055,  2085,  2102,   757,
     937,  -383,  -383,  -383,   256,   258,   259,   260,   261,   264,
     265,   249,   103,  1090,  -383,  -383,   172,   182,   194,   200,
     205,  2113,  -383,  -383,    85,  2130,  -383,  -383,  -383,  2151,
    -383,  -383,  -383,  2162,   263,  2886,  3414,    95,   -47,  -383,
    2886,  -383,  2886,  2886,  -383,  2886,  -383,  -383,  -383,  -383,
    -383,  -383,  -383,  -383,  -383,  -383,  -383,  1180,  -383,  -383,
    -383,  -383,  -383,  -383,  -383,  1630,  1270,  1360,  -383,  2886,
    2886,   -12,   268,  -383,  -383,   287,   276,  -383,   266,  2226,
    2258,  2275,  2292,  1450,  -383,   279,  -383,  -383,  2322,  2388,
    -383,   -47,   288,   285,  2886,  -383,  -383,  -383,  -383,  -383,
    -383,   286,  -383,  -383,  -383,   287,  -383,   106,  -383,  -383,
    -383,  1540,  -383
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,   140,   139,     0,   164,   138,
     171,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   170,     0,
     127,    51,   117,    44,     0,     0,     0,   178,   179,     0,
       0,     0,     0,     0,     7,     0,     0,    52,     0,     0,
       0,     8,     0,     0,     3,     4,    27,     0,    34,    84,
     174,    82,     0,     0,    83,     0,    45,     0,    53,     0,
      30,    31,    32,    35,    36,    37,     0,    39,    40,     0,
      41,    42,    25,    26,    28,    29,    38,     9,     0,     0,
       0,     0,     0,     0,    52,   113,     0,     0,    84,     0,
      45,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,     0,    84,     0,    84,     0,    84,     0,    10,
     145,     0,   143,    84,     0,   173,     0,     0,     0,    99,
      10,    96,    98,     0,     0,     0,     0,   187,   186,   169,
     141,   114,     0,     0,     0,     5,     0,     0,   137,     0,
     116,     0,     0,   102,     0,   101,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    43,     0,     0,
       6,   115,     0,    84,     0,    84,   172,     0,     0,     0,
       0,     0,     0,    82,    10,     0,   128,     0,     0,     0,
       0,     0,     0,     0,     0,    73,     0,    82,    57,     0,
      82,    60,     0,   144,     0,   142,     0,     0,     0,     0,
       0,     0,   163,    84,     0,     0,     0,     0,   191,     0,
       0,     0,     0,    24,    23,     0,     0,    19,    20,    21,
      22,     0,     0,    50,    80,   118,    46,    48,     0,    81,
     111,   110,   109,   107,   103,   104,   105,     0,   106,   108,
     112,    47,     0,   100,    93,     0,    10,    84,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,    54,     0,
      82,    78,     0,    61,     0,     0,     0,    62,     0,    63,
       0,     0,    64,    74,    55,    56,    58,    59,     0,    16,
      17,    33,    11,    12,     0,     0,    15,   154,   152,   148,
     149,   150,   151,     0,   155,   153,     0,   190,    10,     0,
       0,     0,   176,     0,     0,     0,     0,     0,    49,    86,
       0,     0,     0,     0,     0,    76,     0,    84,   128,     0,
      56,    59,   182,     0,     0,     0,     0,     0,     0,     0,
       0,    18,    13,    14,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   193,    10,     0,     0,     0,     0,
       0,     0,    97,   189,     0,     0,   177,    10,    10,     0,
      94,    95,    79,     0,     0,     0,     0,     0,     0,    65,
       0,    66,     0,     0,    67,     0,    68,   162,   160,   156,
     157,   158,   159,   161,    10,   192,   183,     0,    87,    88,
      89,    90,    91,    92,   188,     0,     0,     0,    85,     0,
       0,     0,     0,   129,   130,     0,   131,   135,     0,     0,
       0,     0,     0,     0,   184,     0,   175,   180,     0,     0,
     168,     0,   133,     0,     0,    77,    69,    70,    71,    72,
     185,     0,    75,   123,   165,     0,   136,     0,    10,   134,
     132,     0,   181
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -383,  -383,  -383,  -129,  -383,   -15,     3,  -383,     4,  -383,
      20,   -22,   267,  -383,  -383,  -383,   -14,  -383,  -383,     6,
       2,   262,  -254,  -383,  -382,   -56,   -44,   -51,    -1,  -383,
    -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,
    -383,  -383,  -383,  -383,  -383,  -383,  -127,  -207
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    54,   204,   292,   226,   293,    56,   294,    58,
      59,    60,    61,   222,    62,    63,   254,    64,    65,    66,
     295,    68,   187,   416,   417,   433,   418,   171,    96,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,   296,   219
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      69,   221,   120,    67,    55,    57,   230,   329,   306,   150,
      32,   146,   153,   100,   126,   155,   366,   118,   334,   146,
     153,   153,   414,   155,   155,   151,   152,    98,   142,   153,
     143,   154,   155,   432,    87,   121,   177,   297,   168,   111,
     113,   115,   117,   167,   367,    69,   123,   127,   138,    53,
     148,   101,   119,   415,   233,   269,   149,   148,   169,   170,
     148,   148,   146,   432,   122,   169,   343,   149,   149,   169,
     149,   149,   149,   234,   149,   143,   283,   285,   287,   149,
     318,   430,   102,   149,    30,   330,   146,   196,   143,   173,
     199,   103,   143,   146,   202,   303,   175,   160,   104,   161,
     147,   304,   354,   146,   159,   160,   160,   161,   147,   164,
     156,   157,   158,   159,   160,   146,   161,   164,   164,   162,
     163,   105,   412,   214,   261,   238,   164,   323,   184,   106,
     235,   107,    69,   218,   146,   229,   227,   228,   148,   101,
     298,   108,   151,   152,   213,   395,   153,  -166,   154,   155,
     143,   147,  -166,   109,   149,   124,    98,   264,   216,   266,
     331,   151,   152,   143,   128,   153,   236,   154,   155,  -124,
    -146,  -146,    32,   129,   259,   147,  -146,  -124,  -124,   353,
     149,   130,   147,  -124,   251,   145,   404,  -147,  -147,   257,
     149,  -126,   147,  -147,   260,   146,   413,   131,   216,  -126,
    -126,   149,   132,    69,   147,  -126,   174,   450,   178,   299,
    -119,    53,    32,   133,   146,   179,   300,   134,  -119,  -119,
      69,   218,   307,   147,  -119,   135,   397,   156,   157,   158,
     159,   160,   168,   161,   276,   177,   162,   163,   406,   407,
     277,   178,   146,   164,   217,   252,   156,   157,   158,   159,
     160,    53,   161,   151,   179,   162,   163,   153,   203,   253,
     155,   180,   164,   180,   301,   423,   181,   302,    69,   182,
     305,    95,   102,   398,    99,   181,   375,   182,   230,   205,
    -167,   327,   105,   399,   147,  -167,    99,    99,    99,    99,
    -120,   149,   364,    99,   106,   400,   125,   215,  -120,  -120,
     108,   401,   350,   147,  -120,   109,   402,   370,   371,   139,
     140,   377,   169,   137,   256,   218,   141,   272,  -121,   451,
     144,   308,    69,   309,   310,   314,  -121,  -121,   315,   165,
     166,   147,  -121,   341,   342,   351,    99,   352,   156,   157,
     158,   159,   160,    99,   161,   355,   176,   368,   163,   376,
     378,   394,    69,   411,   164,   410,   414,   387,   218,   388,
     389,   390,   391,   431,   183,   392,   393,   435,   186,   188,
     189,   190,   191,   192,   193,   194,   434,   197,   151,   152,
     441,   200,   153,   445,   154,   155,   446,   444,   448,   449,
     425,    99,     0,     0,     0,   220,    69,     0,     0,     0,
       0,   231,   232,    99,    69,    69,    69,   229,   227,   228,
     146,     0,   447,    99,     0,     0,   239,     0,   240,   241,
     146,   242,    69,   243,   244,   245,   246,   247,   248,   249,
     250,    99,     0,     0,     0,     0,    99,     0,     0,   258,
       0,    99,     0,     0,   262,   263,     0,   265,     0,   267,
      69,     0,   270,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   156,   157,   158,   159,   160,     0,   161,
     278,     0,   162,   163,   151,   152,   279,     0,   153,   164,
     154,   155,     0,     0,     0,     0,  -122,     0,     0,   313,
       0,     0,     0,     0,  -122,  -122,  -125,     0,     0,   147,
    -122,     0,     0,     0,  -125,  -125,     0,   151,   152,   147,
    -125,   153,     0,   154,   155,     0,     0,     0,     0,   321,
       0,     0,   322,     0,     0,     0,   326,     0,   328,   151,
     152,     0,     0,   153,     0,   154,   155,     0,     0,   328,
       0,   335,   336,   337,     0,   338,     0,   339,   340,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   156,
     157,   158,   159,   160,     0,   161,   281,     0,   162,   163,
       0,     0,   282,     0,     0,   164,     0,     0,   361,   151,
     152,     0,   365,   153,     0,   154,   155,   369,     0,     0,
       0,   373,   156,   157,   158,   159,   160,   319,   161,   320,
       0,   162,   163,     0,     0,     0,     0,     0,   164,     0,
       0,     0,     0,     0,   156,   157,   158,   159,   160,     0,
     161,   324,     0,   162,   163,     0,     0,   325,     0,     0,
     164,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     3,     0,   328,     0,     0,     0,   419,     4,   420,
     421,     0,   422,     0,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,   156,   157,   158,   159,   160,     0,
     161,     0,     0,    10,   163,     0,   428,   429,     0,     0,
     164,     0,     0,     0,     0,     0,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,     0,    46,     0,    47,     0,    48,     0,
      49,   288,    50,     0,     0,     0,    51,     0,     4,     0,
      52,     0,     0,     0,     5,     6,     7,     8,    53,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
     151,   152,     0,    10,   153,     0,   154,   155,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,   289,    45,   225,    46,     0,    47,     0,    48,     0,
      49,   288,    50,     0,     0,     0,   290,     0,     4,     0,
      52,     0,     0,   291,     5,     6,     7,     8,    53,     0,
       0,     0,     9,     0,     0,   156,   157,   158,   159,   160,
       0,   161,   383,    10,   162,   163,     0,     0,   384,     0,
       0,   164,     0,     0,     0,     0,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,   289,    45,   225,    46,     0,    47,     0,    48,     0,
      49,   288,    50,     0,     0,     0,   290,     0,     4,     0,
      52,     0,     0,   312,     5,     6,     7,     8,    53,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
     151,   152,     0,    10,   153,     0,   154,   155,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,   289,    45,   225,    46,     0,    47,     0,    48,     0,
      49,   288,    50,     0,     0,     0,   290,     0,     4,     0,
      52,     0,     0,   332,     5,     6,     7,     8,    53,     0,
       0,     0,     9,     0,     0,   156,   157,   158,   159,   160,
       0,   161,   385,    10,   162,   163,     0,     0,   386,     0,
       0,   164,     0,     0,     0,     0,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,   289,    45,   225,    46,     0,    47,     0,    48,     0,
      49,   288,    50,     0,     0,     0,   290,     0,     4,     0,
      52,     0,     0,   372,     5,     6,     7,     8,    53,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
     151,   152,     0,    10,   153,     0,   154,   155,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,   289,    45,   225,    46,     0,    47,     0,    48,     0,
      49,   288,    50,     0,     0,     0,   290,     0,     4,     0,
      52,     0,     0,   396,     5,     6,     7,     8,    53,     0,
       0,     0,     9,     0,     0,   156,   157,   158,   159,   160,
       0,   161,   255,    10,   162,   163,     0,     0,     0,     0,
       0,   164,     0,     0,     0,     0,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,   289,    45,   225,    46,     0,    47,     0,    48,     0,
      49,   288,    50,     0,     0,     0,   290,     0,     4,     0,
      52,     0,     0,   424,     5,     6,     7,     8,    53,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
     151,   152,     0,    10,   153,     0,   154,   155,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,   289,    45,   225,    46,     0,    47,     0,    48,     0,
      49,   288,    50,     0,     0,     0,   290,     0,     4,     0,
      52,     0,     0,   426,     5,     6,     7,     8,    53,     0,
       0,     0,     9,     0,     0,   156,   157,   158,   159,   160,
       0,   161,     0,    10,   162,   163,     0,     0,   268,     0,
       0,   164,     0,     0,     0,     0,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,   289,    45,   225,    46,     0,    47,     0,    48,     0,
      49,   288,    50,     0,     0,     0,   290,     0,     4,     0,
      52,     0,     0,   427,     5,     6,     7,     8,    53,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
     151,   152,     0,    10,   153,     0,   154,   155,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,   289,    45,   225,    46,     0,    47,     0,    48,     0,
      49,   288,    50,     0,     0,     0,   290,     0,     4,     0,
      52,     0,     0,   440,     5,     6,     7,     8,    53,     0,
       0,     0,     9,     0,     0,   156,   157,   158,   159,   160,
       0,   161,     0,    10,   162,   163,     0,     0,   271,     0,
       0,   164,     0,     0,     0,     0,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,   289,    45,   225,    46,     0,    47,     0,    48,     0,
      49,   223,    50,     0,     0,     0,   290,     0,     4,     0,
      52,     0,     0,   452,     5,     6,     7,     8,    53,     0,
       0,     0,     9,     0,   151,   152,     0,     0,   153,     0,
     154,   155,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,   224,    45,   225,    46,     0,    47,     0,    48,     0,
      49,     0,    50,     0,     0,   151,   152,     0,     0,   153,
      52,   154,   155,     0,     0,     0,     0,     0,    53,   156,
     157,   158,   159,   160,     0,   161,     0,     0,   162,   163,
     151,   152,   273,     0,   153,   164,   154,   155,     0,     0,
       0,   151,   152,     0,     0,   153,     0,   154,   155,     0,
       0,     0,   151,   152,     0,     0,   153,     0,   154,   155,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   151,
     152,     0,     0,   153,     0,   154,   155,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     156,   157,   158,   159,   160,     0,   161,   274,     0,   162,
     163,   151,   152,     0,     0,   153,   164,   154,   155,     0,
       0,     0,     0,     0,     0,   156,   157,   158,   159,   160,
       0,   161,   275,     0,   162,   163,   156,   157,   158,   159,
     160,   164,   161,   280,     0,   162,   163,   156,   157,   158,
     159,   160,   164,   161,     0,     0,   162,   163,     0,     0,
     284,     0,     0,   164,   156,   157,   158,   159,   160,     0,
     161,     0,     0,   162,   163,   151,   152,   286,     0,   153,
     164,   154,   155,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   156,   157,   158,   159,
     160,     0,   161,   311,     0,   162,   163,   151,   152,     0,
       0,   153,   164,   154,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   151,   152,     0,     0,   153,     0,
     154,   155,     0,     0,     0,   151,   152,     0,     0,   153,
       0,   154,   155,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   151,   152,     0,     0,   153,     0,   154,   155,
     156,   157,   158,   159,   160,     0,   161,     0,     0,   162,
     163,   151,   152,   316,     0,   153,   164,   154,   155,     0,
       0,     0,   151,   152,     0,     0,   153,     0,   154,   155,
       0,     0,   156,   157,   158,   159,   160,     0,   161,     0,
       0,   162,   163,     0,     0,   317,     0,     0,   164,   156,
     157,   158,   159,   160,     0,   161,   333,     0,   162,   163,
     156,   157,   158,   159,   160,   164,   161,     0,     0,   162,
     163,     0,     0,   362,     0,     0,   164,   156,   157,   158,
     159,   160,     0,   161,     0,     0,   162,   163,   151,   152,
     253,     0,   153,   164,   154,   155,   156,   157,   158,   159,
     160,   374,   161,     0,     0,   162,   163,   156,   157,   158,
     159,   160,   164,   161,     0,     0,   162,   163,   151,   152,
     379,     0,   153,   164,   154,   155,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   151,   152,     0,     0,   153,
       0,   154,   155,     0,     0,     0,   151,   152,     0,     0,
     153,     0,   154,   155,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   151,   152,     0,     0,   153,     0,   154,
     155,     0,     0,   156,   157,   158,   159,   160,     0,   161,
     380,     0,   162,   163,   151,   152,     0,     0,   153,   164,
     154,   155,     0,     0,     0,   151,   152,     0,     0,   153,
       0,   154,   155,   156,   157,   158,   159,   160,     0,   161,
       0,     0,   162,   163,     0,     0,   381,     0,     0,   164,
     156,   157,   158,   159,   160,     0,   161,   382,     0,   162,
     163,   156,   157,   158,   159,   160,   164,   161,     0,     0,
     162,   163,     0,     0,   403,     0,     0,   164,   156,   157,
     158,   159,   160,     0,   161,     0,   405,   162,   163,   151,
     152,     0,     0,   153,   164,   154,   155,     0,     0,   156,
     157,   158,   159,   160,   408,   161,     0,     0,   162,   163,
     156,   157,   158,   159,   160,   164,   161,   409,     0,   162,
     163,   151,   152,     0,     0,   153,   164,   154,   155,     5,
       6,   344,   345,     0,     0,     0,     0,     9,   151,   152,
       0,     0,   153,     0,   154,   155,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   151,   152,     0,     0,   153,
       0,   154,   155,     0,     0,     0,     0,     0,     0,     0,
     346,   347,   348,   349,   156,   157,   158,   159,   160,     0,
     161,     0,     0,   162,   163,   151,   152,   436,     0,   153,
     164,   154,   155,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   156,   157,   158,   159,
     160,     0,   161,  -168,     0,   162,   163,   153,     0,   437,
     155,     0,   164,   156,   157,   158,   159,   160,     0,   161,
     151,     0,   162,   163,   153,     0,   438,   155,     0,   164,
     156,   157,   158,   159,   160,     0,   161,     0,     0,   162,
     163,   151,   152,   439,     0,   153,   164,   154,   155,     0,
       0,     0,   151,   152,     0,     0,   153,     0,   154,   155,
     156,   157,   158,   159,   160,     0,   161,     0,     0,   162,
     163,     0,     0,   442,     0,     0,   164,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   157,
     158,   159,   160,     0,   161,     0,     0,     0,   163,     0,
       0,     0,     0,     0,   164,     0,   157,   158,   159,   160,
       0,   161,     0,     0,     0,   163,     0,     0,     0,     0,
       0,   164,     0,     0,     0,     0,   156,   157,   158,   159,
     160,   443,   161,     0,     0,   162,   163,   156,   157,   158,
     159,   160,   164,   161,     0,     0,   162,   163,     4,     0,
       0,     0,     0,   164,     5,     6,    88,    89,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    90,    91,    92,    93,     0,
       0,     0,     0,     0,     0,     0,     0,    30,    31,    32,
      33,     0,    35,    36,     4,     0,     0,    40,    41,     0,
       5,     6,    88,    89,     0,     0,    94,     0,     9,     0,
      49,     0,    50,     0,     0,     0,     0,     0,     0,     0,
      52,   195,     0,     0,     0,     0,     0,     0,    53,     0,
       0,     0,     0,    11,    12,    13,    14,    15,    16,    17,
      18,    90,    91,    92,    93,     0,     0,     0,     0,     0,
       0,     0,     0,    30,    31,    32,    33,     0,    35,    36,
       4,     0,     0,    40,    41,     0,     5,     6,    88,    89,
       0,     0,    94,     0,     9,     0,    49,     0,    50,     0,
       0,     0,     0,     0,     0,     0,    52,   198,     0,     0,
       0,     0,     0,     0,    53,     0,     0,     0,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    90,    91,    92,
      93,     0,     0,     0,     0,     0,     0,     0,     0,    30,
      31,    32,    33,     0,    35,    36,     4,     0,     0,    40,
      41,     0,     5,     6,   206,   207,     0,     0,    94,     0,
       9,     0,    49,     0,    50,     0,     0,     0,     0,     0,
       0,     0,    52,   201,     0,     0,     0,     0,     0,     0,
      53,     0,     0,     0,     0,    11,    12,    13,    14,    15,
      16,    17,    18,   208,   209,   210,   211,     0,     0,     0,
       0,     0,     0,     0,     0,    30,    31,    32,    33,     0,
      35,    36,     4,     0,     0,    40,    41,     0,     5,     6,
      88,    89,     0,     0,    94,     0,     9,     0,    49,     0,
      50,     0,     0,     0,     0,     0,     0,     0,    52,   212,
       0,     0,     0,     0,     0,     0,    53,     0,     0,     0,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    90,
      91,    92,    93,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    31,    32,    33,     0,    35,    36,     4,     0,
       0,    40,    41,     0,     5,     6,    88,    89,     0,     0,
      94,     0,     9,     0,    49,     0,    50,     0,     0,     0,
       0,     0,     0,     0,    52,   237,     0,     0,     0,     0,
       0,     0,    53,     0,     0,     0,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    90,    91,    92,    93,     0,
       0,     0,     0,     0,     0,     0,     0,    30,    31,    32,
      33,     0,    35,    36,     4,     0,     0,    40,    41,     0,
       5,     6,    88,    89,     0,     0,    94,     0,     9,     0,
      49,     0,    50,     0,     0,     0,     0,     0,     0,     0,
      52,   363,     0,     0,     0,     0,     0,     0,    53,     0,
       0,     0,     0,    11,    12,    13,    14,    15,    16,    17,
      18,    90,    91,    92,    93,     0,     0,     0,     0,     0,
       0,     0,     0,    30,    31,    32,    33,     0,    35,    36,
       4,     0,     0,    40,    41,     0,     5,     6,    88,    89,
       0,     0,    94,     0,     9,     0,    49,     0,    50,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,     0,
       0,     0,     0,     0,    53,     0,     0,     0,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    90,    91,    92,
      93,     0,     0,     0,     0,     0,     0,     0,     0,    30,
      31,    32,    33,     0,    35,    36,     4,     0,     0,    40,
      41,     0,     5,     6,    88,    89,     0,     0,    94,     0,
       9,     0,    49,     0,    50,     0,     0,     0,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
      53,     0,     0,     0,     0,    11,    12,    13,    14,    15,
      16,    17,    18,    90,    91,    92,    93,     0,     0,     0,
       0,     0,     0,     0,     0,    30,    31,    32,    33,     0,
      35,    36,     4,     0,     0,    40,    41,     0,     5,     6,
      88,    89,     0,     0,    94,     0,     9,     0,    49,     0,
      50,     0,     0,     0,     0,     0,     0,     0,   110,     0,
       0,     0,     0,     0,     0,     0,    53,     0,     0,     0,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    90,
      91,    92,    93,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    31,    32,    33,     0,    35,    36,     4,     0,
       0,    40,    41,     0,     5,     6,    88,    89,     0,     0,
      94,     0,     9,     0,    49,     0,    50,     0,     0,     0,
       0,     0,     0,     0,   112,     0,     0,     0,     0,     0,
       0,     0,    53,     0,     0,     0,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    90,    91,    92,    93,     0,
       0,     0,     0,     0,     0,     0,     0,    30,    31,    32,
      33,     0,    35,    36,     4,     0,     0,    40,    41,     0,
       5,     6,    88,    89,     0,     0,    94,     0,     9,     0,
      49,     0,    50,     0,     0,     0,     0,     0,     0,     0,
     114,     0,     0,     0,     0,     0,     0,     0,    53,     0,
       0,     0,     0,    11,    12,    13,    14,    15,    16,    17,
      18,    90,    91,    92,    93,     0,     0,     0,     0,     0,
       0,     0,     0,    30,    31,    32,    33,     0,    35,    36,
       4,     0,     0,    40,    41,     0,     5,     6,   136,    89,
       0,     0,    94,     0,     9,     0,    49,     0,    50,     0,
       0,     0,     0,     0,     0,     0,   116,     0,     0,     0,
       0,     0,     0,     0,    53,     0,     0,     0,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     0,     0,     0,     0,     0,     0,     0,     0,    30,
      31,    32,    33,     0,    35,    36,     4,     0,     0,    40,
      41,     0,     5,     6,    88,    89,     0,     0,    94,     0,
       9,     0,    49,     0,    50,     0,     0,     0,     0,     0,
       0,     0,    52,     0,     0,     0,     0,     0,     0,     0,
      53,     0,     0,     0,     0,    11,    12,    13,    14,    15,
      16,    17,    18,    90,    91,    92,    93,     0,     0,     0,
       0,     0,     0,     0,     0,    30,    31,    32,    33,     0,
      35,    36,     4,     0,     0,    40,    41,     0,     5,     6,
      88,    89,     0,     0,    94,     0,     9,     0,    49,     0,
      50,     0,     0,     0,     0,     0,     0,     0,   172,     0,
       0,     0,     0,     0,     0,     0,    53,     0,     0,     0,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    90,
      91,    92,    93,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    31,    32,    33,     0,    35,    36,     4,     0,
       0,    40,    41,     0,     5,     6,    88,    89,     0,     0,
      94,     0,     9,     0,    49,     0,    50,     0,     0,     0,
       0,     0,     0,     0,   185,     0,     0,     0,     0,     0,
       0,     0,    53,     0,     0,     0,     0,   356,    12,    13,
     357,   358,    16,   359,   360,    90,    91,    92,    93,     0,
       0,     0,     0,     0,     0,     0,     0,    30,    31,    32,
      33,     0,    35,    36,     0,     0,     0,    40,    41,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,     0,
      49,     0,    50,     0,     0,     0,     0,     0,     0,     0,
      52,     0,     0,     0,     0,     0,     0,     0,    53
};

static const yytype_int16 yycheck[] =
{
       1,   130,    24,     1,     1,     1,   133,   261,   215,    60,
      69,    11,     7,     7,    67,    10,    74,    67,   272,    11,
       7,     7,    69,    10,    10,     3,     4,     7,    50,     7,
      52,     9,    10,   415,    96,    67,   100,   101,    12,    19,
      20,    21,    22,    65,   102,    46,    26,   100,    46,   108,
      87,   100,   102,   100,    93,   184,    95,    87,    95,    96,
      87,    87,    11,   445,    96,    95,    96,    95,    95,    95,
      95,    95,    95,   101,    95,    97,   101,   101,   101,    95,
     101,    93,   100,    95,    67,   101,    11,   109,   110,    69,
     112,   100,   114,    11,   116,    95,    76,    92,   100,    94,
     100,   101,   309,    11,    91,    92,    92,    94,   100,   104,
      88,    89,    90,    91,    92,    11,    94,   104,   104,    97,
      98,   100,   376,   124,   175,   147,   104,   256,   102,   100,
     108,   100,   133,   127,    11,   133,   133,   133,    87,   100,
     101,   100,     3,     4,   124,   352,     7,    96,     9,    10,
     172,   100,   101,   100,    95,   100,   136,   179,    55,   181,
     101,     3,     4,   185,   100,     7,   146,     9,    10,    87,
      95,    96,    69,   100,    92,   100,   101,    95,    96,   308,
      95,   102,   100,   101,   164,    96,   101,    95,    96,   169,
      95,    87,   100,   101,   174,    11,   101,   100,    55,    95,
      96,    95,   100,   204,   100,   101,    95,   101,   100,   101,
      87,   108,    69,   100,    11,   100,   101,   100,    95,    96,
     221,   215,   216,   100,   101,   100,   355,    88,    89,    90,
      91,    92,    12,    94,    95,   100,    97,    98,   367,   368,
     101,   100,    11,   104,   101,    87,    88,    89,    90,    91,
      92,   108,    94,     3,   100,    97,    98,     7,    96,   101,
      10,   100,   104,   100,   101,   394,   100,   101,   269,   100,
     101,     4,   100,   101,     7,   100,    92,   100,   405,    96,
      96,   261,   100,   101,   100,   101,    19,    20,    21,    22,
      87,    95,   314,    26,   100,   101,    29,   100,    95,    96,
     100,   101,   303,   100,   101,   100,   101,   321,   322,    47,
      48,   333,    95,    46,   102,   309,    49,    95,    87,   448,
      53,   102,   323,    95,   101,   100,    95,    96,    96,    62,
      63,   100,   101,    96,    96,   101,    69,    95,    88,    89,
      90,    91,    92,    76,    94,   102,    79,   102,    98,    95,
      95,   102,   353,   375,   104,    92,    69,   101,   352,   101,
     101,   101,   101,    95,    97,   101,   101,   101,   101,   102,
     103,   104,   105,   106,   107,   108,   100,   110,     3,     4,
     101,   114,     7,    95,     9,    10,   101,   431,   102,   445,
     405,   124,    -1,    -1,    -1,   128,   397,    -1,    -1,    -1,
      -1,   134,   135,   136,   405,   406,   407,   405,   405,   405,
      11,    -1,   434,   146,    -1,    -1,   149,    -1,   151,   152,
      11,   154,   423,   156,   157,   158,   159,   160,   161,   162,
     163,   164,    -1,    -1,    -1,    -1,   169,    -1,    -1,   172,
      -1,   174,    -1,    -1,   177,   178,    -1,   180,    -1,   182,
     451,    -1,   185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,    94,
      95,    -1,    97,    98,     3,     4,   101,    -1,     7,   104,
       9,    10,    -1,    -1,    -1,    -1,    87,    -1,    -1,   222,
      -1,    -1,    -1,    -1,    95,    96,    87,    -1,    -1,   100,
     101,    -1,    -1,    -1,    95,    96,    -1,     3,     4,   100,
     101,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,   252,
      -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,     3,
       4,    -1,    -1,     7,    -1,     9,    10,    -1,    -1,   272,
      -1,   274,   275,   276,    -1,   278,    -1,   280,   281,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    -1,    94,    95,    -1,    97,    98,
      -1,    -1,   101,    -1,    -1,   104,    -1,    -1,   311,     3,
       4,    -1,   315,     7,    -1,     9,    10,   320,    -1,    -1,
      -1,   324,    88,    89,    90,    91,    92,    93,    94,    95,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,   104,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,
      94,    95,    -1,    97,    98,    -1,    -1,   101,    -1,    -1,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       0,     1,    -1,   376,    -1,    -1,    -1,   380,     8,   382,
     383,    -1,   385,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    22,    -1,    88,    89,    90,    91,    92,    -1,
      94,    -1,    -1,    33,    98,    -1,   409,   410,    -1,    -1,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,
      90,     1,    92,    -1,    -1,    -1,    96,    -1,     8,    -1,
     100,    -1,    -1,    -1,    14,    15,    16,    17,   108,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,    33,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    -1,    86,    -1,    88,    -1,
      90,     1,    92,    -1,    -1,    -1,    96,    -1,     8,    -1,
     100,    -1,    -1,   103,    14,    15,    16,    17,   108,    -1,
      -1,    -1,    22,    -1,    -1,    88,    89,    90,    91,    92,
      -1,    94,    95,    33,    97,    98,    -1,    -1,   101,    -1,
      -1,   104,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    -1,    86,    -1,    88,    -1,
      90,     1,    92,    -1,    -1,    -1,    96,    -1,     8,    -1,
     100,    -1,    -1,   103,    14,    15,    16,    17,   108,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,    33,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    -1,    86,    -1,    88,    -1,
      90,     1,    92,    -1,    -1,    -1,    96,    -1,     8,    -1,
     100,    -1,    -1,   103,    14,    15,    16,    17,   108,    -1,
      -1,    -1,    22,    -1,    -1,    88,    89,    90,    91,    92,
      -1,    94,    95,    33,    97,    98,    -1,    -1,   101,    -1,
      -1,   104,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    -1,    86,    -1,    88,    -1,
      90,     1,    92,    -1,    -1,    -1,    96,    -1,     8,    -1,
     100,    -1,    -1,   103,    14,    15,    16,    17,   108,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,    33,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    -1,    86,    -1,    88,    -1,
      90,     1,    92,    -1,    -1,    -1,    96,    -1,     8,    -1,
     100,    -1,    -1,   103,    14,    15,    16,    17,   108,    -1,
      -1,    -1,    22,    -1,    -1,    88,    89,    90,    91,    92,
      -1,    94,    95,    33,    97,    98,    -1,    -1,    -1,    -1,
      -1,   104,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    -1,    86,    -1,    88,    -1,
      90,     1,    92,    -1,    -1,    -1,    96,    -1,     8,    -1,
     100,    -1,    -1,   103,    14,    15,    16,    17,   108,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,    33,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    -1,    86,    -1,    88,    -1,
      90,     1,    92,    -1,    -1,    -1,    96,    -1,     8,    -1,
     100,    -1,    -1,   103,    14,    15,    16,    17,   108,    -1,
      -1,    -1,    22,    -1,    -1,    88,    89,    90,    91,    92,
      -1,    94,    -1,    33,    97,    98,    -1,    -1,   101,    -1,
      -1,   104,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    -1,    86,    -1,    88,    -1,
      90,     1,    92,    -1,    -1,    -1,    96,    -1,     8,    -1,
     100,    -1,    -1,   103,    14,    15,    16,    17,   108,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,    33,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    -1,    86,    -1,    88,    -1,
      90,     1,    92,    -1,    -1,    -1,    96,    -1,     8,    -1,
     100,    -1,    -1,   103,    14,    15,    16,    17,   108,    -1,
      -1,    -1,    22,    -1,    -1,    88,    89,    90,    91,    92,
      -1,    94,    -1,    33,    97,    98,    -1,    -1,   101,    -1,
      -1,   104,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    -1,    86,    -1,    88,    -1,
      90,     1,    92,    -1,    -1,    -1,    96,    -1,     8,    -1,
     100,    -1,    -1,   103,    14,    15,    16,    17,   108,    -1,
      -1,    -1,    22,    -1,     3,     4,    -1,    -1,     7,    -1,
       9,    10,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    -1,    86,    -1,    88,    -1,
      90,    -1,    92,    -1,    -1,     3,     4,    -1,    -1,     7,
     100,     9,    10,    -1,    -1,    -1,    -1,    -1,   108,    88,
      89,    90,    91,    92,    -1,    94,    -1,    -1,    97,    98,
       3,     4,   101,    -1,     7,   104,     9,    10,    -1,    -1,
      -1,     3,     4,    -1,    -1,     7,    -1,     9,    10,    -1,
      -1,    -1,     3,     4,    -1,    -1,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,    -1,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    89,    90,    91,    92,    -1,    94,    95,    -1,    97,
      98,     3,     4,    -1,    -1,     7,   104,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      -1,    94,    95,    -1,    97,    98,    88,    89,    90,    91,
      92,   104,    94,    95,    -1,    97,    98,    88,    89,    90,
      91,    92,   104,    94,    -1,    -1,    97,    98,    -1,    -1,
     101,    -1,    -1,   104,    88,    89,    90,    91,    92,    -1,
      94,    -1,    -1,    97,    98,     3,     4,   101,    -1,     7,
     104,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,
      92,    -1,    94,    95,    -1,    97,    98,     3,     4,    -1,
      -1,     7,   104,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,    -1,     7,    -1,
       9,    10,    -1,    -1,    -1,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,    -1,     7,    -1,     9,    10,
      88,    89,    90,    91,    92,    -1,    94,    -1,    -1,    97,
      98,     3,     4,   101,    -1,     7,   104,     9,    10,    -1,
      -1,    -1,     3,     4,    -1,    -1,     7,    -1,     9,    10,
      -1,    -1,    88,    89,    90,    91,    92,    -1,    94,    -1,
      -1,    97,    98,    -1,    -1,   101,    -1,    -1,   104,    88,
      89,    90,    91,    92,    -1,    94,    95,    -1,    97,    98,
      88,    89,    90,    91,    92,   104,    94,    -1,    -1,    97,
      98,    -1,    -1,   101,    -1,    -1,   104,    88,    89,    90,
      91,    92,    -1,    94,    -1,    -1,    97,    98,     3,     4,
     101,    -1,     7,   104,     9,    10,    88,    89,    90,    91,
      92,    93,    94,    -1,    -1,    97,    98,    88,    89,    90,
      91,    92,   104,    94,    -1,    -1,    97,    98,     3,     4,
     101,    -1,     7,   104,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    -1,    -1,    -1,     3,     4,    -1,    -1,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,    -1,     7,    -1,     9,
      10,    -1,    -1,    88,    89,    90,    91,    92,    -1,    94,
      95,    -1,    97,    98,     3,     4,    -1,    -1,     7,   104,
       9,    10,    -1,    -1,    -1,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    88,    89,    90,    91,    92,    -1,    94,
      -1,    -1,    97,    98,    -1,    -1,   101,    -1,    -1,   104,
      88,    89,    90,    91,    92,    -1,    94,    95,    -1,    97,
      98,    88,    89,    90,    91,    92,   104,    94,    -1,    -1,
      97,    98,    -1,    -1,   101,    -1,    -1,   104,    88,    89,
      90,    91,    92,    -1,    94,    -1,    96,    97,    98,     3,
       4,    -1,    -1,     7,   104,     9,    10,    -1,    -1,    88,
      89,    90,    91,    92,    93,    94,    -1,    -1,    97,    98,
      88,    89,    90,    91,    92,   104,    94,    95,    -1,    97,
      98,     3,     4,    -1,    -1,     7,   104,     9,    10,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    22,     3,     4,
      -1,    -1,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    58,    88,    89,    90,    91,    92,    -1,
      94,    -1,    -1,    97,    98,     3,     4,   101,    -1,     7,
     104,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,
      92,    -1,    94,     3,    -1,    97,    98,     7,    -1,   101,
      10,    -1,   104,    88,    89,    90,    91,    92,    -1,    94,
       3,    -1,    97,    98,     7,    -1,   101,    10,    -1,   104,
      88,    89,    90,    91,    92,    -1,    94,    -1,    -1,    97,
      98,     3,     4,   101,    -1,     7,   104,     9,    10,    -1,
      -1,    -1,     3,     4,    -1,    -1,     7,    -1,     9,    10,
      88,    89,    90,    91,    92,    -1,    94,    -1,    -1,    97,
      98,    -1,    -1,   101,    -1,    -1,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      90,    91,    92,    -1,    94,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,   104,    -1,    89,    90,    91,    92,
      -1,    94,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,   104,    -1,    -1,    -1,    -1,    88,    89,    90,    91,
      92,    93,    94,    -1,    -1,    97,    98,    88,    89,    90,
      91,    92,   104,    94,    -1,    -1,    97,    98,     8,    -1,
      -1,    -1,    -1,   104,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    -1,    72,    73,     8,    -1,    -1,    77,    78,    -1,
      14,    15,    16,    17,    -1,    -1,    86,    -1,    22,    -1,
      90,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,   101,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    68,    69,    70,    -1,    72,    73,
       8,    -1,    -1,    77,    78,    -1,    14,    15,    16,    17,
      -1,    -1,    86,    -1,    22,    -1,    90,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,   101,    -1,    -1,
      -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    70,    -1,    72,    73,     8,    -1,    -1,    77,
      78,    -1,    14,    15,    16,    17,    -1,    -1,    86,    -1,
      22,    -1,    90,    -1,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,
     108,    -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,    -1,
      72,    73,     8,    -1,    -1,    77,    78,    -1,    14,    15,
      16,    17,    -1,    -1,    86,    -1,    22,    -1,    90,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   101,
      -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    -1,    72,    73,     8,    -1,
      -1,    77,    78,    -1,    14,    15,    16,    17,    -1,    -1,
      86,    -1,    22,    -1,    90,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,   101,    -1,    -1,    -1,    -1,
      -1,    -1,   108,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    -1,    72,    73,     8,    -1,    -1,    77,    78,    -1,
      14,    15,    16,    17,    -1,    -1,    86,    -1,    22,    -1,
      90,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,   101,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    68,    69,    70,    -1,    72,    73,
       8,    -1,    -1,    77,    78,    -1,    14,    15,    16,    17,
      -1,    -1,    86,    -1,    22,    -1,    90,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    70,    -1,    72,    73,     8,    -1,    -1,    77,
      78,    -1,    14,    15,    16,    17,    -1,    -1,    86,    -1,
      22,    -1,    90,    -1,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     108,    -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,    -1,
      72,    73,     8,    -1,    -1,    77,    78,    -1,    14,    15,
      16,    17,    -1,    -1,    86,    -1,    22,    -1,    90,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    -1,    72,    73,     8,    -1,
      -1,    77,    78,    -1,    14,    15,    16,    17,    -1,    -1,
      86,    -1,    22,    -1,    90,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   108,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    -1,    72,    73,     8,    -1,    -1,    77,    78,    -1,
      14,    15,    16,    17,    -1,    -1,    86,    -1,    22,    -1,
      90,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    68,    69,    70,    -1,    72,    73,
       8,    -1,    -1,    77,    78,    -1,    14,    15,    16,    17,
      -1,    -1,    86,    -1,    22,    -1,    90,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    70,    -1,    72,    73,     8,    -1,    -1,    77,
      78,    -1,    14,    15,    16,    17,    -1,    -1,    86,    -1,
      22,    -1,    90,    -1,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     108,    -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,    -1,
      72,    73,     8,    -1,    -1,    77,    78,    -1,    14,    15,
      16,    17,    -1,    -1,    86,    -1,    22,    -1,    90,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    -1,    72,    73,     8,    -1,
      -1,    77,    78,    -1,    14,    15,    16,    17,    -1,    -1,
      86,    -1,    22,    -1,    90,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   108,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    -1,    72,    73,    -1,    -1,    -1,    77,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      90,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   110,     0,     1,     8,    14,    15,    16,    17,    22,
      33,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    84,    86,    88,    90,
      92,    96,   100,   108,   111,   115,   116,   117,   118,   119,
     120,   121,   123,   124,   126,   127,   128,   129,   130,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,    96,    16,    17,
      55,    56,    57,    58,    86,   121,   137,   100,   119,   121,
     128,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   119,   100,   119,   100,   119,   100,   119,    67,   102,
     120,    67,    96,   119,   100,   121,    67,   100,   100,   100,
     102,   100,   100,   100,   100,   100,    16,   121,   129,   130,
     130,   121,   120,   120,   121,    96,    11,   100,    87,    95,
     136,     3,     4,     7,     9,    10,    88,    89,    90,    91,
      92,    94,    97,    98,   104,   121,   121,   120,    12,    95,
      96,   136,   100,   119,    95,   119,   121,   100,   100,   100,
     100,   100,   100,   121,   102,   100,   121,   131,   121,   121,
     121,   121,   121,   121,   121,   101,   120,   121,   101,   120,
     121,   101,   120,    96,   112,    96,    16,    17,    55,    56,
      57,    58,   101,   119,   137,   100,    55,   101,   128,   156,
     121,   112,   122,     1,    81,    83,   114,   115,   117,   129,
     155,   121,   121,    93,   101,   108,   119,   101,   120,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   119,    87,   101,   125,    95,   102,   119,   121,    92,
     119,   136,   121,   121,   120,   121,   120,   121,   101,   112,
     121,   101,    95,   101,    95,    95,    95,   101,    95,   101,
      95,    95,   101,   101,   101,   101,   101,   101,     1,    81,
      96,   103,   113,   115,   117,   129,   155,   101,   101,   101,
     101,   101,   101,    95,   101,   101,   156,   128,   102,    95,
     101,    95,   103,   121,   100,    96,   101,   101,   101,    93,
      95,   121,   121,   112,    95,   101,   121,   119,   121,   131,
     101,   101,   103,    95,   131,   121,   121,   121,   121,   121,
     121,    96,    96,    96,    16,    17,    55,    56,    57,    58,
     137,   101,    95,   112,   156,   102,    47,    50,    51,    53,
      54,   121,   101,   101,   120,   121,    74,   102,   102,   121,
     125,   125,   103,   121,    93,    92,    95,   120,    95,   101,
      95,   101,    95,    95,   101,    95,   101,   101,   101,   101,
     101,   101,   101,   101,   102,   156,   103,   112,   101,   101,
     101,   101,   101,   101,   101,    96,   112,   112,    93,    95,
      92,   120,   131,   101,    69,   100,   132,   133,   135,   121,
     121,   121,   121,   112,   103,   114,   103,   103,   121,   121,
      93,    95,   133,   134,   100,   101,   101,   101,   101,   101,
     103,   101,   101,    93,   135,    95,   101,   120,   102,   134,
     101,   112,   103
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   109,   110,   110,   111,   111,   111,   111,   111,   111,
     112,   112,   113,   113,   113,   113,   113,   113,   113,   114,
     114,   114,   114,   114,   114,   115,   115,   115,   115,   115,
     115,   115,   115,   116,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   118,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   120,   120,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   122,   121,   123,   124,
     125,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   127,   127,   128,   128,   129,
     129,   129,   129,   129,   129,   129,   129,   130,   131,   131,
     132,   133,   133,   134,   134,   135,   135,   136,   137,   137,
     137,   138,   139,   139,   140,   141,   142,   142,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   144,   145,   145,   145,   145,   146,
     147,   147,   148,   149,   149,   150,   150,   150,   150,   150,
     151,   152,   153,   153,   153,   153,   154,   154,   155,   155,
     156,   156,   156,   156
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     1,     1,     2,
       0,     2,     1,     2,     2,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     3,     3,     3,     4,
       3,     1,     1,     1,     4,     4,     4,     3,     4,     4,
       3,     4,     4,     4,     4,     6,     6,     6,     6,     8,
       8,     8,     8,     3,     4,     8,     4,     8,     4,     5,
       3,     3,     1,     1,     1,     6,     4,     6,     6,     6,
       6,     6,     6,     3,     5,     5,     0,     5,     2,     2,
       1,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     1,     3,     2,
       2,     2,     2,     8,     2,     3,     2,     1,     1,     5,
       1,     1,     4,     1,     3,     1,     3,     1,     1,     1,
       1,     2,     3,     2,     3,     2,     2,     3,     4,     4,
       4,     4,     4,     4,     4,     4,     6,     6,     6,     6,
       6,     6,     6,     3,     1,     8,     2,     4,     7,     2,
       1,     1,     2,     2,     1,     7,     4,     5,     1,     1,
       7,    11,     5,     6,     7,     8,     2,     2,     4,     3,
       2,     1,     4,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (retv, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, retv); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, astree ** retv)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (retv);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, astree ** retv)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, retv);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, astree ** retv)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , retv);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, retv); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, astree ** retv)
{
  YYUSE (yyvaluep);
  YYUSE (retv);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (astree ** retv)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 209 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("top_lines -> ");
                (yyval.tree) = astnode_make0(RULE_top_lines(1));
                *retv = (yyval.tree);
                exitrule("top_lines -> ");
            }
#line 2268 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 217 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("top_lines -> top_lines top_pprompt");
                (yyval.tree) = astnode_append((yyvsp[-1].tree), (yyvsp[0].tree));
                *retv = (yyval.tree);
                exitrule_ex("top_lines -> top_lines top_pprompt",(yyval.tree));
            }
#line 2279 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 227 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("top_pprompt -> flowctrl");
                (yyval.tree) = astnode_make1(RULE_top_pprompt(1), (yyvsp[0].tree));
                exitrule("top_pprompt -> flowctrl");
            }
#line 2289 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 234 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("top_pprompt -> command ';'");
                (yyval.tree) = astnode_make1(RULE_top_pprompt(2), (yyvsp[-1].tree));
                exitrule_ex("top_pprompt -> command ';'",(yyval.tree));
            }
#line 2299 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 241 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("top_pprompt -> declare_ip_variable ';'");
                (yyval.tree) = astnode_make1(RULE_top_pprompt(3), (yyvsp[-1].tree));
                exitrule("top_pprompt -> declare_ip_variable ';'");
            }
#line 2309 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 248 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("top_pprompt -> SYS_BREAK");
                (yyval.tree) = astnode_make0(RULE_top_pprompt(4));
                exitrule("top_pprompt -> SYS_BREAK");
            }
#line 2319 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 255 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("top_pprompt -> ';'");
                (yyval.tree) = astnode_make0(RULE_top_pprompt(5));
                exitrule_ex("top_pprompt -> ';'", (yyval.tree));
            }
#line 2329 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 262 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("top_pprompt -> error ';'");
                YYABORT;
                exitrule("top_pprompt -> error ';'");
            }
#line 2339 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 270 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("lines -> ");
                (yyval.tree) = astnode_make0(RULE_lines(1));
                exitrule("lines -> ");
            }
#line 2349 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 277 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("lines -> lines pprompt");
                (yyval.tree) = astnode_append((yyvsp[-1].tree), (yyvsp[0].tree));
                exitrule_ex("lines -> lines pprompt",(yyval.tree));
            }
#line 2359 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 286 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("pprompt -> flowctrl");
                (yyval.tree) = astnode_make1(RULE_pprompt(1), (yyvsp[0].tree));
                exitrule("pprompt -> flowctrl");
            }
#line 2369 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 293 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("pprompt -> command ';'");
                (yyval.tree) = astnode_make1(RULE_pprompt(2), (yyvsp[-1].tree));
                exitrule_ex("pprompt -> command ';'",(yyval.tree));
            }
#line 2379 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 300 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("pprompt -> declare_ip_variable ';'");
                (yyval.tree) = astnode_make1(RULE_pprompt(3), (yyvsp[-1].tree));
                exitrule("pprompt -> declare_ip_variable ';'");
            }
#line 2389 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 307 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("pprompt -> returncmd");
                (yyval.tree) = astnode_make1(RULE_pprompt(4), (yyvsp[0].tree));
                exitrule("pprompt -> returncmd");
            }
#line 2399 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 314 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("pprompt -> SYS_BREAK");
                (yyval.tree) = astnode_make0(RULE_pprompt(5));
                exitrule("pprompt -> SYS_BREAK");
            }
#line 2409 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 321 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("pprompt -> ';'");
                (yyval.tree) = astnode_make0(RULE_pprompt(6));
                exitrule_ex("pprompt -> ';'", (yyval.tree));
            }
#line 2419 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 328 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("pprompt -> error ';'");
                YYABORT;
                exitrule("pprompt -> error ';'");
            }
#line 2429 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 338 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("npprompt -> flowctrl");
                (yyval.tree) = astnode_make1(RULE_npprompt(1), (yyvsp[0].tree));
                exitrule("npprompt -> flowctrl");
            }
#line 2439 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 345 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("npprompt -> command");
                (yyval.tree) = astnode_make1(RULE_npprompt(2), (yyvsp[0].tree));
                exitrule_ex("npprompt -> command ';'",(yyval.tree));
            }
#line 2449 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 352 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("npprompt -> declare_ip_variable");
                (yyval.tree) = astnode_make1(RULE_npprompt(3), (yyvsp[0].tree));
                exitrule("npprompt -> declare_ip_variable ';'");
            }
#line 2459 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 359 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("npprompt -> returncmd");
                (yyval.tree) = astnode_make1(RULE_npprompt(4), (yyvsp[0].tree));
                exitrule("npprompt -> returncmd");
            }
#line 2469 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 366 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("npprompt -> SYS_BREAK");
                (yyval.tree) = astnode_make0(RULE_npprompt(5));
                exitrule("npprompt -> SYS_BREAK");
            }
#line 2479 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 373 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("npprompt -> error ';'");
                YYABORT;
                exitrule("npprompt -> error ';'");
            }
#line 2489 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 382 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("flowctrl -> ifcmd");
                (yyval.tree) = astnode_make1(RULE_flowctrl(1), (yyvsp[0].tree));
                exitrule("flowctrl -> ifcmd");
            }
#line 2499 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 389 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("flowctrl -> whilecmd");
                (yyval.tree) = astnode_make1(RULE_flowctrl(2), (yyvsp[0].tree));
                exitrule("flowctrl -> whilecmd");
            }
#line 2509 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 396 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("flowctrl -> example_dummy");
                (yyval.tree) = astnode_make1(RULE_flowctrl(3), (yyvsp[0].tree));
                exitrule("flowctrl -> example_dummy");
            }
#line 2519 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 403 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("flowctrl -> forcmd");
                (yyval.tree) = astnode_make1(RULE_flowctrl(4), (yyvsp[0].tree));
                exitrule("flowctrl -> forcmd");
            }
#line 2529 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 410 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("flowctrl -> proccmd");
                (yyval.tree) = astnode_make1(RULE_flowctrl(5), (yyvsp[0].tree));
                exitrule_ex("flowctrl -> proccmd",(yyval.tree));
            }
#line 2539 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 417 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("flowctrl -> filecmd");
                (yyval.tree) = astnode_make1(RULE_flowctrl(6), (yyvsp[0].tree));
                exitrule_ex("flowctrl -> filecmd",(yyval.tree));
            }
#line 2549 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 424 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("flowctrl -> helpcmd");
                (yyval.tree) = astnode_make1(RULE_flowctrl(7), (yyvsp[0].tree));
                exitrule_ex("flowctrl -> helpcmd",(yyval.tree));
            }
#line 2559 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 431 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("flowctrl -> examplecmd");
                (yyval.tree) = astnode_make1(RULE_flowctrl(8), (yyvsp[0].tree));
                exitrule("flowctrl -> examplecmd");
            }
#line 2569 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 439 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("example_dummy -> EXAMPLE_CMD '{' lines '}'");
                (yyval.tree) = astnode_make1(RULE_example_dummy(1), (yyvsp[-1].tree));
                exitrule("example_dummy -> EXAMPLE_CMD '{' lines '}'");
            }
#line 2579 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 447 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("command -> assign");
                (yyval.tree) = astnode_make1(RULE_command(1), (yyvsp[0].tree));
                exitrule_ex("command -> assign",(yyval.tree));
            }
#line 2589 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 454 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("command -> exportcmd");
                (yyval.tree) = astnode_make1(RULE_command(2), (yyvsp[0].tree));
                exitrule_ex("command -> exportcmd",(yyval.tree));
            }
#line 2599 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 461 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("command -> killcmd");
                (yyval.tree) = astnode_make1(RULE_command(3), (yyvsp[0].tree));
                exitrule_ex("command -> killcmd",(yyval.tree));
            }
#line 2609 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 468 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("command -> listcmd");
                (yyval.tree) = astnode_make1(RULE_command(4), (yyvsp[0].tree));
                exitrule_ex("command -> listcmd",(yyval.tree));
            }
#line 2619 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 475 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("command -> parametercmd");
                (yyval.tree) = astnode_make1(RULE_command(5), (yyvsp[0].tree));
                exitrule_ex("command -> parametercmd",(yyval.tree));
            }
#line 2629 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 482 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("command -> ringcmd");
                (yyval.tree) = astnode_make1(RULE_command(6), (yyvsp[0].tree));
                exitrule_ex("command -> ringcmd",(yyval.tree));
            }
#line 2639 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 489 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("command -> scriptcmd");
                (yyval.tree) = astnode_make1(RULE_command(7), (yyvsp[0].tree));
                exitrule_ex("command -> scriptcmd",(yyval.tree));
            }
#line 2649 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 496 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("command -> setringcmd");
                (yyval.tree) = astnode_make1(RULE_command(8), (yyvsp[0].tree));
                exitrule_ex("command -> setringcmd",(yyval.tree));
            }
#line 2659 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 503 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("command -> typecmd");
                (yyval.tree) = astnode_make1(RULE_command(9), (yyvsp[0].tree));
                exitrule_ex("command -> typecmd",(yyval.tree));
            }
#line 2669 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 511 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("assign -> left_value exprlist");
                (yyval.tree) = astnode_make2(RULE_assign(1), (yyvsp[-1].tree), (yyvsp[0].tree));
                exitrule_ex("assign -> left_value exprlist",(yyval.tree));
            }
#line 2679 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 520 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> RINGVAR");
                (yyval.tree) = astnode_make1(RULE_elemexpr(1), aststring_make((yyvsp[0].name)));
                exitrule("elemexpr -> RINGVAR");
            }
#line 2689 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 527 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> extendedid");
                (yyval.tree) = astnode_make1(RULE_elemexpr(2), (yyvsp[0].tree));
                exitrule_ex("elemexpr -> extendedid",(yyval.tree));
            }
#line 2699 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 534 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> elemexpr COLONCOLON elemexpr");
                (yyval.tree) = astnode_make2(RULE_elemexpr(3), (yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule("elemexpr -> elemexpr COLONCOLON elemexpr");
            }
#line 2709 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 541 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> expr '.' elemexpr");
                (yyval.tree) = astnode_make2(RULE_elemexpr(4), (yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule("elemexpr -> expr '.' elemexpr");
            }
#line 2719 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 548 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> elemexpr '('  ')'");
                (yyval.tree) = astnode_make1(RULE_elemexpr(5), (yyvsp[-2].tree));
                exitrule("elemexpr -> elemexpr '('  ')'");
            }
#line 2729 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 555 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> elemexpr '(' exprlist ')'");
                (yyval.tree) = astnode_make2(RULE_elemexpr(6), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule_ex("elemexpr -> elemexpr '(' exprlist ')'", (yyval.tree));
            }
#line 2739 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 562 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> '[' exprlist ']'");
                (yyval.tree) = astnode_make1(RULE_elemexpr(7), (yyvsp[-1].tree));
                exitrule("elemexpr -> '[' exprlist ']'");
            }
#line 2749 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 569 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> INT_CONST");
                (yyval.tree) = astnode_make1(RULE_elemexpr(8), aststring_make((yyvsp[0].name)));
                exitrule_ex("elemexpr -> INT_CONST", (yyval.tree));
            }
#line 2759 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 576 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> SYSVAR");
                (yyval.tree) = astnode_make1(RULE_elemexpr(9), astint_make((yyvsp[0].i)));
                exitrule("elemexpr -> SYSVAR");
            }
#line 2769 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 583 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> stringexpr");
                (yyval.tree) = astnode_make1(RULE_elemexpr(10), (yyvsp[0].tree));
                exitrule("elemexpr -> stringexpr");
            }
#line 2779 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 590 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> PROC_CMD '(' expr ')'");
                (yyval.tree) = astnode_make2(RULE_elemexpr(11), astint_make((yyvsp[-3].i)), (yyvsp[-1].tree));
                exitrule("elemexpr -> PROC_CMD '(' expr ')'");
            }
#line 2789 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 597 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> ROOT_DECL '(' expr ')'");
                (yyval.tree) = astnode_make2(RULE_elemexpr(12), astint_make((yyvsp[-3].i)), (yyvsp[-1].tree));
                exitrule("elemexpr -> ROOT_DECL '(' expr ')'");
            }
#line 2799 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 604 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> ROOT_DECL_LIST '(' exprlist ')'");
                (yyval.tree) = astnode_make2(RULE_elemexpr(13), astint_make((yyvsp[-3].i)), (yyvsp[-1].tree));
                exitrule("elemexpr -> ROOT_DECL_LIST '(' exprlist ')'");
            }
#line 2809 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 611 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> ROOT_DECL_LIST '(' ')'");
                (yyval.tree) = astnode_make1(RULE_elemexpr(14), astint_make((yyvsp[-2].i)));
                exitrule("elemexpr -> ROOT_DECL_LIST '(' ')'");
            }
#line 2819 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 618 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> RING_DECL '(' expr ')'");
                (yyval.tree) = astnode_make2(RULE_elemexpr(15), astint_make((yyvsp[-3].i)), (yyvsp[-1].tree));
                exitrule("elemexpr -> RING_DECL '(' expr ')'");
            }
#line 2829 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 625 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> RING_DECL_LIST '(' exprlist ')'");
                (yyval.tree) = astnode_make2(RULE_elemexpr(16), astint_make((yyvsp[-3].i)), (yyvsp[-1].tree));
                exitrule("elemexpr -> RING_DECL_LIST '(' exprlist ')'");
            }
#line 2839 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 632 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> RING_DECL_LIST '(' ')'");
                (yyval.tree) = astnode_make1(RULE_elemexpr(17), astint_make((yyvsp[-2].i)));
                exitrule("elemexpr -> RING_DECL_LIST '(' ')'");
            }
#line 2849 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 639 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> CMD_1 '(' expr ')'");
                (yyval.tree) = astnode_make2(RULE_elemexpr(18), astint_make((yyvsp[-3].i)), (yyvsp[-1].tree));
                exitrule("elemexpr -> CMD_1 '(' expr ')'");
            }
#line 2859 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 646 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> CMD_12 '(' expr ')'");
                (yyval.tree) = astnode_make2(RULE_elemexpr(19), astint_make((yyvsp[-3].i)), (yyvsp[-1].tree));
                exitrule("elemexpr -> CMD_12 '(' expr ')'");
            }
#line 2869 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 653 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> CMD_13 '(' expr ')'");
                (yyval.tree) = astnode_make2(RULE_elemexpr(20), astint_make((yyvsp[-3].i)), (yyvsp[-1].tree));
                exitrule("elemexpr -> CMD_13 '(' expr ')'");
            }
#line 2879 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 660 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> CMD_123 '(' expr ')'");
                (yyval.tree) = astnode_make2(RULE_elemexpr(21), astint_make((yyvsp[-3].i)), (yyvsp[-1].tree));
                exitrule("elemexpr -> CMD_123 '(' expr ')'");
            }
#line 2889 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 667 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> CMD_2 '(' expr ',' expr ')'");
                (yyval.tree) = astnode_make3(RULE_elemexpr(22), astint_make((yyvsp[-5].i)), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("elemexpr -> CMD_2 '(' expr ',' expr ')'");
            }
#line 2899 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 674 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> CMD_12 '(' expr ',' expr ')'");
                (yyval.tree) = astnode_make3(RULE_elemexpr(23), astint_make((yyvsp[-5].i)), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("elemexpr -> CMD_12 '(' expr ',' expr ')'");
            }
#line 2909 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 681 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> CMD_23 '(' expr ',' expr ')'");
                (yyval.tree) = astnode_make3(RULE_elemexpr(24), astint_make((yyvsp[-5].i)), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("elemexpr -> CMD_23 '(' expr ',' expr ')'");
            }
#line 2919 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 688 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> CMD_123 '(' expr ',' expr ')'");
                (yyval.tree) = astnode_make3(RULE_elemexpr(25), astint_make((yyvsp[-5].i)), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("elemexpr -> CMD_123 '(' expr ',' expr ')'");
            }
#line 2929 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 695 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> CMD_3 '(' expr ',' expr ',' expr ')'");
                (yyval.tree) = astnode_make4(RULE_elemexpr(26), astint_make((yyvsp[-7].i)), (yyvsp[-5].tree), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("elemexpr -> CMD_3 '(' expr ',' expr ',' expr ')'");
            }
#line 2939 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 702 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> CMD_13 '(' expr ',' expr ',' expr ')'");
                (yyval.tree) = astnode_make4(RULE_elemexpr(27), astint_make((yyvsp[-7].i)), (yyvsp[-5].tree), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("elemexpr -> CMD_13 '(' expr ',' expr ',' expr ')'");
            }
#line 2949 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 709 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> CMD_23 '(' expr ',' expr ',' expr ')'");
                (yyval.tree) = astnode_make4(RULE_elemexpr(28), astint_make((yyvsp[-7].i)), (yyvsp[-5].tree), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("elemexpr -> CMD_23 '(' expr ',' expr ',' expr ')'");
            }
#line 2959 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 716 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> CMD_123 '(' expr ',' expr ',' expr ')'");
                (yyval.tree) = astnode_make4(RULE_elemexpr(29), astint_make((yyvsp[-7].i)), (yyvsp[-5].tree), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("elemexpr -> CMD_123 '(' expr ',' expr ',' expr ')'");
            }
#line 2969 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 723 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> CMD_M '(' ')'");
                (yyval.tree) = astnode_make1(RULE_elemexpr(30), astint_make((yyvsp[-2].i)));
                exitrule("elemexpr -> CMD_M '(' ')'");
            }
#line 2979 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 730 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> CMD_M '(' exprlist ')'");
                (yyval.tree) = astnode_make2(RULE_elemexpr(31), astint_make((yyvsp[-3].i)), (yyvsp[-1].tree));
                exitrule("elemexpr -> CMD_M '(' exprlist ')'");
            }
#line 2989 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 737 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> mat_cmd '(' expr ',' expr ',' expr ')'");
                (yyval.tree) = astnode_make4(RULE_elemexpr(32), (yyvsp[-7].tree), (yyvsp[-5].tree), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("elemexpr -> mat_cmd '(' expr ',' expr ',' expr ')'");
            }
#line 2999 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 744 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> mat_cmd '(' expr ')'");
                (yyval.tree) = astnode_make2(RULE_elemexpr(33), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("elemexpr -> mat_cmd '(' expr ')'");
            }
#line 3009 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 751 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> RING_CMD '(' rlist ',' rlist ',' ordering ')'");
                (yyval.tree) = astnode_make4(RULE_elemexpr(34), astint_make((yyvsp[-7].i)), (yyvsp[-5].tree), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("elemexpr -> RING_CMD '(' rlist ',' rlist ',' ordering ')'");
            }
#line 3019 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 758 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> RING_CMD '(' expr ')'");
                (yyval.tree) = astnode_make2(RULE_elemexpr(35), astint_make((yyvsp[-3].i)), (yyvsp[-1].tree));
                exitrule("elemexpr -> RING_CMD '(' expr ')'");
            }
#line 3029 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 765 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> extendedid  ARROW '{' lines '}'");
                (yyval.tree) = astnode_make2(RULE_elemexpr(36), (yyvsp[-4].tree), (yyvsp[-1].tree));
                exitrule("elemexpr -> extendedid  ARROW '{' lines '}'");
            }
#line 3039 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 772 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> '(' exprlist ')'");
                (yyval.tree) = astnode_make1(RULE_elemexpr(37), (yyvsp[-1].tree));
                exitrule_ex("elemexpr -> '(' exprlist ')'",(yyval.tree));
            }
#line 3049 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 781 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("exprlist -> exprlist ',' expr");
                (yyval.tree) = astnode_append((yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule_ex("exprlist -> exprlist ',' expr",(yyval.tree));
            }
#line 3059 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 788 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("exprlist -> expr");
                (yyval.tree) = astnode_make1(RULE_exprlist(1), (yyvsp[0].tree));
                exitrule_ex("exprlist -> expr",(yyval.tree));
            }
#line 3069 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 796 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> expr_arithmetic");
                (yyval.tree) = astnode_make1(RULE_expr(1), (yyvsp[0].tree));
                exitrule_ex("expr -> expr_arithmetic",(yyval.tree));
            }
#line 3079 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 803 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> elemexpr");
                (yyval.tree) = astnode_make1(RULE_expr(2), (yyvsp[0].tree));
                exitrule_ex("expr -> elemexpr",(yyval.tree));
            }
#line 3089 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 810 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> expr '[' expr ',' expr ']'");
                (yyval.tree) = astnode_make3(RULE_expr(3), (yyvsp[-5].tree), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("expr -> expr '[' expr ',' expr ']'");
            }
#line 3099 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 817 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> expr '[' expr ']'");
                (yyval.tree) = astnode_make2(RULE_expr(4), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("expr -> expr '[' expr ']'");
            }
#line 3109 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 824 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> APPLY '('  expr ',' CMD_1 ')'");
                (yyval.tree) = astnode_make2(RULE_expr(5), (yyvsp[-3].tree), astint_make((yyvsp[-1].i)));
                exitrule("expr -> APPLY '('  expr ',' CMD_1 ')'");
            }
#line 3119 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 831 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> APPLY '('  expr ',' CMD_12 ')'");
                (yyval.tree) = astnode_make2(RULE_expr(6), (yyvsp[-3].tree), astint_make((yyvsp[-1].i)));
                exitrule("expr -> APPLY '('  expr ',' CMD_12 ')'");
            }
#line 3129 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 838 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> APPLY '('  expr ',' CMD_13 ')'");
                (yyval.tree) = astnode_make2(RULE_expr(7), (yyvsp[-3].tree), astint_make((yyvsp[-1].i)));
                exitrule("expr -> APPLY '('  expr ',' CMD_13 ')'");
            }
#line 3139 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 845 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> APPLY '('  expr ',' CMD_123 ')'");
                (yyval.tree) = astnode_make2(RULE_expr(8), (yyvsp[-3].tree), astint_make((yyvsp[-1].i)));
                exitrule("expr -> APPLY '('  expr ',' CMD_123 ')'");
            }
#line 3149 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 852 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> APPLY '('  expr ',' CMD_M ')'");
                (yyval.tree) = astnode_make2(RULE_expr(9), (yyvsp[-3].tree), astint_make((yyvsp[-1].i)));
                exitrule("expr -> APPLY '('  expr ',' CMD_M ')'");
            }
#line 3159 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 859 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> APPLY '('  expr ',' expr ')'");
                (yyval.tree) = astnode_make2(RULE_expr(10), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("expr -> APPLY '('  expr ',' expr ')'");
            }
#line 3169 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 866 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> quote_start expr quote_end");
                (yyval.tree) = astnode_make1(RULE_expr(11), (yyvsp[-1].tree));
                exitrule("expr -> quote_start expr quote_end");
            }
#line 3179 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 873 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> quote_start expr '=' expr quote_end");
                (yyval.tree) = astnode_make2(RULE_expr(12), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("expr -> quote_start expr '=' expr quote_end");
            }
#line 3189 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 880 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> assume_start expr ',' expr quote_end");
                (yyval.tree) = astnode_make2(RULE_expr(13), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("expr -> assume_start expr ',' expr quote_end");
            }
#line 3199 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 887 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> EVAL  '('");
                exitrule("expr -> EVAL  '('");
            }
#line 3208 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 893 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> EVAL  '(' expr ')'");
                (yyval.tree) = astnode_make1(RULE_expr(14), (yyvsp[-1].tree));
                exitrule("expr -> EVAL  '(' expr ')'");
            }
#line 3218 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 901 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("quote_start -> QUOTE  '('");
                (yyval.tree) = astnode_make0(RULE_quote_start(1));
                exitrule("quote_start -> QUOTE  '('");
            }
#line 3228 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 909 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("assume_start -> ASSUME_CMD '('");
                (yyval.tree) = astnode_make0(RULE_assume_start(2));
                exitrule("assume_start ASSUME_CMD '('");
            }
#line 3238 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 917 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("quote_end -> ')'");
                (yyval.tree) = astnode_make0(RULE_quote_end(1));
                exitrule("quote_end -> ')'");
            }
#line 3248 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 926 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr_arithmetic -> expr PLUSPLUS");
                (yyval.tree) = astnode_make1(RULE_expr_arithmetic(1), (yyvsp[-1].tree));
                exitrule_ex("expr_arithmetic -> expr PLUSPLUS",(yyval.tree));
            }
#line 3258 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 933 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr_arithmetic -> expr MINUSMINUS");
                (yyval.tree) = astnode_make1(RULE_expr_arithmetic(2), (yyvsp[-1].tree));
                exitrule_ex("expr_arithmetic -> expr MINUSMINUS",(yyval.tree));
            }
#line 3268 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 940 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr_arithmetic -> expr '+' expr");
                (yyval.tree) = astnode_make2(RULE_expr_arithmetic(3), (yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule_ex("expr_arithmetic -> expr '+' expr",(yyval.tree));
            }
#line 3278 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 947 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr_arithmetic -> expr '-' expr");
                (yyval.tree) = astnode_make2(RULE_expr_arithmetic(4), (yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule_ex("expr_arithmetic -> expr '-' expr",(yyval.tree));
            }
#line 3288 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 954 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr_arithmetic -> expr '/' expr");
                if ((yyvsp[-1].i) == '*')
                {
                    (yyval.tree) = astnode_make2(RULE_expr_arithmetic(5), (yyvsp[-2].tree), (yyvsp[0].tree));
                }
                else if ((yyvsp[-1].i) == '%')
                {
                    (yyval.tree) = astnode_make2(RULE_expr_arithmetic(6), (yyvsp[-2].tree), (yyvsp[0].tree));
                }
                else
                {
                    (yyval.tree) = astnode_make2(RULE_expr_arithmetic(7), (yyvsp[-2].tree), (yyvsp[0].tree));
                }
                exitrule_ex("expr_arithmetic -> expr '/' expr",(yyval.tree));
            }
#line 3309 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 972 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr_arithmetic -> expr '^' expr");
                (yyval.tree) = astnode_make2(RULE_expr_arithmetic(8), (yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule_ex("expr_arithmetic -> expr '^' expr",(yyval.tree));
            }
#line 3319 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 979 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr_arithmetic -> expr '<' expr");
                if ((yyvsp[-1].i) == '>')
                {
                    (yyval.tree) = astnode_make2(RULE_expr_arithmetic(9), (yyvsp[-2].tree), (yyvsp[0].tree));
                }
                else
                {
                    (yyval.tree) = astnode_make2(RULE_expr_arithmetic(10), (yyvsp[-2].tree), (yyvsp[0].tree));
                }
                exitrule_ex("expr_arithmetic -> expr '<' expr",(yyval.tree));
            }
#line 3336 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 993 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr_arithmetic -> expr '&' expr");
                if ((yyvsp[-1].i) == '&')
                {
                    (yyval.tree) = astnode_make2(RULE_expr_arithmetic(11), (yyvsp[-2].tree), (yyvsp[0].tree));
                }
                else
                {
                    (yyval.tree) = astnode_make2(RULE_expr_arithmetic(12), (yyvsp[-2].tree), (yyvsp[0].tree));
                }
                exitrule_ex("expr_arithmetic -> expr '&' expr",(yyval.tree));
            }
#line 3353 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1007 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr_arithmetic -> expr NOTEQUAL expr");
                (yyval.tree) = astnode_make2(RULE_expr_arithmetic(13), (yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule("expr_arithmetic -> expr NOTEQUAL expr");
            }
#line 3363 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1014 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr_arithmetic -> expr EQUAL_EQUAL expr");
                (yyval.tree) = astnode_make2(RULE_expr_arithmetic(14), (yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule("expr_arithmetic -> expr EQUAL_EQUAL expr");
            }
#line 3373 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1021 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr_arithmetic -> expr DOTDOT expr");
                (yyval.tree) = astnode_make2(RULE_expr_arithmetic(15), (yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule("expr_arithmetic -> expr DOTDOT expr");
            }
#line 3383 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1028 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr_arithmetic -> expr ':' expr");
                (yyval.tree) = astnode_make2(RULE_expr_arithmetic(16), (yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule("expr_arithmetic -> expr ':' expr");
            }
#line 3393 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1035 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr_arithmetic -> NOT expr");
                (yyval.tree) = astnode_make1(RULE_expr_arithmetic(17), (yyvsp[0].tree));
                exitrule("expr_arithmetic -> NOT expr");
            }
#line 3403 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1042 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr_arithmetic -> '-' expr");
                (yyval.tree) = astnode_make1(RULE_expr_arithmetic(18), (yyvsp[0].tree));
                exitrule("expr_arithmetic -> '-' expr");
            }
#line 3413 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1051 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("left_value -> declare_ip_variable cmdeq");
                (yyval.tree) = astnode_make1(RULE_left_value(1), (yyvsp[-1].tree));
                exitrule_ex("left_value -> declare_ip_variable cmdeq",(yyval.tree));
            }
#line 3423 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1058 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("left_value -> exprlist cmdeq");
                (yyval.tree) = astnode_make1(RULE_left_value(2), (yyvsp[-1].tree));
                exitrule("left_value -> exprlist cmdeq");
            }
#line 3433 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1068 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("extendedid -> UNKNOWN_IDENT");
                (yyval.tree) = astnode_make1(RULE_extendedid(1), aststring_make((yyvsp[0].name)));
                exitrule_ex("extendedid -> UNKNOWN_IDENT",(yyval.tree));
            }
#line 3443 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1075 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("extendedid -> '`' expr '`'");
                (yyval.tree) = astnode_make1(RULE_extendedid(2), (yyvsp[-1].tree));
                exitrule_ex("extendedid -> '`' expr '`'",(yyval.tree));
            }
#line 3453 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1085 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("declare_ip_variable -> ROOT_DECL elemexpr");
                (yyval.tree) = astnode_make2(RULE_declare_ip_variable(1), astint_make((yyvsp[-1].i)), (yyvsp[0].tree));
                exitrule_ex("declare_ip_variable -> ROOT_DECL elemexpr",(yyval.tree));
            }
#line 3463 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1092 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("declare_ip_variable -> ROOT_DECL_LIST elemexpr");
                (yyval.tree) = astnode_make2(RULE_declare_ip_variable(2), astint_make((yyvsp[-1].i)), (yyvsp[0].tree));
                exitrule("declare_ip_variable -> ROOT_DECL_LIST elemexpr");
            }
#line 3473 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1099 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("declare_ip_variable -> RING_DECL elemexpr");
                (yyval.tree) = astnode_make2(RULE_declare_ip_variable(3), astint_make((yyvsp[-1].i)), (yyvsp[0].tree));
                exitrule("declare_ip_variable -> RING_DECL elemexpr");
            }
#line 3483 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1106 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("declare_ip_variable -> RING_DECL_LIST elemexpr");
                (yyval.tree) = astnode_make2(RULE_declare_ip_variable(4), astint_make((yyvsp[-1].i)), (yyvsp[0].tree));
                exitrule("declare_ip_variable -> RING_DECL_LIST elemexpr");
            }
#line 3493 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1113 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("declare_ip_variable -> mat_cmd elemexpr '[' expr ']' '[' expr ']'");
                (yyval.tree) = astnode_make4(RULE_declare_ip_variable(5), (yyvsp[-7].tree), (yyvsp[-6].tree), (yyvsp[-4].tree), (yyvsp[-1].tree));
                exitrule("declare_ip_variable -> mat_cmd elemexpr '[' expr ']' '[' expr ']'");
            }
#line 3503 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1120 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("declare_ip_variable -> mat_cmd elemexpr");
                (yyval.tree) = astnode_make2(RULE_declare_ip_variable(6), (yyvsp[-1].tree), (yyvsp[0].tree));
                exitrule("declare_ip_variable -> mat_cmd elemexpr");
            }
#line 3513 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1127 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("declare_ip_variable -> declare_ip_variable ',' elemexpr");
                (yyval.tree) = astnode_make2(RULE_declare_ip_variable(7), (yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule("declare_ip_variable -> declare_ip_variable ',' elemexpr");
            }
#line 3523 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1134 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("declare_ip_variable -> PROC_CMD elemexpr");
                (yyval.tree) = astnode_make2(RULE_declare_ip_variable(8), astint_make((yyvsp[-1].i)), (yyvsp[0].tree));
                exitrule("declare_ip_variable -> PROC_CMD elemexpr");
            }
#line 3533 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1143 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("stringexpr -> STRINGTOK");
                (yyval.tree) = astnode_make1(RULE_stringexpr(1), aststring_make((yyvsp[0].name)));
                exitrule("stringexpr -> STRINGTOK");
            }
#line 3543 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1152 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("rlist -> expr");
                (yyval.tree) = astnode_make1(RULE_rlist(1), (yyvsp[0].tree));
                exitrule("rlist -> expr");
            }
#line 3553 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1159 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("rlist -> '(' expr ',' exprlist ')'");
                (yyval.tree) = astnode_make2(RULE_rlist(2), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("rlist -> '(' expr ',' exprlist ')'");
            }
#line 3563 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1168 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("ordername -> UNKNOWN_IDENT");
                (yyval.tree) = astnode_make1(RULE_ordername(1), aststring_make((yyvsp[0].name)));
                exitrule("ordername -> UNKNOWN_IDENT");
            }
#line 3573 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1177 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("orderelem -> ordername");
                (yyval.tree) = astnode_make1(RULE_orderelem(1), (yyvsp[0].tree));
                exitrule("orderelem -> ordername");
            }
#line 3583 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1183 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("orderelem -> ordername '(' exprlist ')'");
                (yyval.tree) = astnode_make2(RULE_orderelem(2), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("orderelem -> ordername '(' exprlist ')'");
            }
#line 3593 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1192 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("OrderingList -> orderelem");
                (yyval.tree) = astnode_make1(RULE_OrderingList(1), (yyvsp[0].tree));
                exitrule("OrderingList -> orderelem");
            }
#line 3603 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1199 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("OrderingList -> orderelem ',' OrderingList");
                (yyval.tree) = astnode_make2(RULE_OrderingList(2), (yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule("OrderingList -> orderelem ',' OrderingList");
            }
#line 3613 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1208 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("ordering -> orderelem");
                (yyval.tree) = astnode_make1(RULE_ordering(1), (yyvsp[0].tree));
                exitrule("ordering -> orderelem");
            }
#line 3623 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1215 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("ordering -> '(' OrderingList ')'");
                (yyval.tree) = astnode_make1(RULE_ordering(2), (yyvsp[-1].tree));
                exitrule("ordering -> '(' OrderingList ')'");
            }
#line 3633 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1223 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("cmdeq -> '='");
                (yyval.i) = (yyvsp[0].i);
                exitrule("cmdeq -> '='");
            }
#line 3643 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1232 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("mat_cmd -> MATRIX_CMD");
                (yyval.tree) = astnode_make1(RULE_mat_cmd(1), astint_make((yyvsp[0].i)));
                exitrule("mat_cmd -> MATRIX_CMD");
            }
#line 3653 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1239 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("mat_cmd -> INTMAT_CMD");
                (yyval.tree) = astnode_make1(RULE_mat_cmd(2), astint_make((yyvsp[0].i)));
                exitrule("mat_cmd -> INTMAT_CMD");
            }
#line 3663 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1246 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("mat_cmd -> BIGINTMAT_CMD");
                (yyval.tree) = astnode_make1(RULE_mat_cmd(3), astint_make((yyvsp[0].i)));
                exitrule("mat_cmd -> BIGINTMAT_CMD");
            }
#line 3673 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1259 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("filecmd -> '<' stringexpr");
                (yyval.tree) = astnode_make1(RULE_filecmd(1), (yyvsp[0].tree));
                exitrule("filecmd -> '<' stringexpr");
            }
#line 3683 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1268 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("helpcmd -> HELP_CMD STRINGTOK ';'");
                (yyval.tree) = astnode_make1(RULE_helpcmd(1), aststring_make((yyvsp[-1].name)));
                exitrule("helpcmd -> HELP_CMD STRINGTOK ';'");
            }
#line 3693 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1275 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("helpcmd -> HELP_CMD ';'");
                (yyval.tree) = astnode_make0(RULE_helpcmd(2));
                exitrule("helpcmd -> HELP_CMD ';'");
            }
#line 3703 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1284 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("examplecmd -> EXAMPLE_CMD STRINGTOK ';'");
                (yyval.tree) = astnode_make1(RULE_examplecmd(1), aststring_make((yyvsp[-1].name)));
                exitrule("examplecmd -> EXAMPLE_CMD STRINGTOK ';'");
            }
#line 3713 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1293 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("exportcmd -> EXPORT_CMD exprlist");
                (yyval.tree) = astnode_make1(RULE_exportcmd(1), (yyvsp[0].tree));
                exitrule("exportcmd -> EXPORT_CMD exprlist");
            }
#line 3723 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1302 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("killcmd -> KILL_CMD elemexpr");
                (yyval.tree) = astnode_make1(RULE_killcmd(1), (yyvsp[0].tree));
                exitrule("killcmd -> KILL_CMD elemexpr");
            }
#line 3733 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1309 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("killcmd -> killcmd ',' elemexpr");
                (yyval.tree) = astnode_make2(RULE_killcmd(2), (yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule("killcmd -> killcmd ',' elemexpr");
            }
#line 3743 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1318 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' ROOT_DECL ')'");
                (yyval.tree) = astnode_make1(RULE_listcmd(1), astint_make((yyvsp[-1].i)));
                exitrule("listcmd -> LISTVAR_CMD '(' ROOT_DECL ')'");
            }
#line 3753 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1325 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' ROOT_DECL_LIST ')'");
                (yyval.tree) = astnode_make1(RULE_listcmd(2), astint_make((yyvsp[-1].i)));
                exitrule("listcmd -> LISTVAR_CMD '(' ROOT_DECL_LIST ')'");
            }
#line 3763 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1332 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' ROOT_DECL ')'");
                (yyval.tree) = astnode_make1(RULE_listcmd(3), astint_make((yyvsp[-1].i)));
                exitrule("listcmd -> LISTVAR_CMD '(' ROOT_DECL ')'");
            }
#line 3773 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1339 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' RING_DECL_LIST ')'");
                (yyval.tree) = astnode_make1(RULE_listcmd(4), astint_make((yyvsp[-1].i)));
                exitrule("listcmd -> LISTVAR_CMD '(' RING_DECL_LIST ')'");
            }
#line 3783 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1346 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' RING_CMD ')'");
                (yyval.tree) = astnode_make1(RULE_listcmd(5), astint_make((yyvsp[-1].i)));
                exitrule("listcmd -> LISTVAR_CMD '(' RING_CMD ')'");
            }
#line 3793 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1353 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' mat_cmd ')'");
                (yyval.tree) = astnode_make1(RULE_listcmd(6), (yyvsp[-1].tree));
                exitrule("listcmd -> LISTVAR_CMD '(' mat_cmd ')'");
            }
#line 3803 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1360 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' PROC_CMD ')'");
                (yyval.tree) = astnode_make1(RULE_listcmd(7), astint_make((yyvsp[-1].i)));
                exitrule("listcmd -> LISTVAR_CMD '(' PROC_CMD ')'");
            }
#line 3813 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1367 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' elemexpr ')'");
                (yyval.tree) = astnode_make1(RULE_listcmd(8), (yyvsp[-1].tree));
                exitrule("listcmd -> LISTVAR_CMD '(' elemexpr ')'");
            }
#line 3823 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1374 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' elemexpr ',' ROOT_DECL ')'");
                (yyval.tree) = astnode_make2(RULE_listcmd(9), (yyvsp[-3].tree), astint_make((yyvsp[-1].i)));
                exitrule("listcmd -> LISTVAR_CMD '(' elemexpr ',' ROOT_DECL ')'");
            }
#line 3833 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1381 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' elemexpr ',' ROOT_DECL_LIST ')'");
                (yyval.tree) = astnode_make2(RULE_listcmd(10), (yyvsp[-3].tree), astint_make((yyvsp[-1].i)));
                exitrule("listcmd -> LISTVAR_CMD '(' elemexpr ',' ROOT_DECL_LIST ')'");
            }
#line 3843 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1388 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' elemexpr ',' RING_DECL ')'");
                (yyval.tree) = astnode_make2(RULE_listcmd(11), (yyvsp[-3].tree), astint_make((yyvsp[-1].i)));
                exitrule("listcmd -> LISTVAR_CMD '(' elemexpr ',' RING_DECL ')'");
            }
#line 3853 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1395 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' elemexpr ',' RING_DECL_LIST ')'");
                (yyval.tree) = astnode_make2(RULE_listcmd(12), (yyvsp[-3].tree), astint_make((yyvsp[-1].i)));
                exitrule("listcmd -> LISTVAR_CMD '(' elemexpr ',' RING_DECL_LIST ')'");
            }
#line 3863 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1402 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' elemexpr ',' RING_CMD ')'");
                (yyval.tree) = astnode_make2(RULE_listcmd(13), (yyvsp[-3].tree), astint_make((yyvsp[-1].i)));
                exitrule("listcmd -> LISTVAR_CMD '(' elemexpr ',' RING_CMD ')'");
            }
#line 3873 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1409 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' elemexpr ',' mat_cmd ')'");
                (yyval.tree) = astnode_make2(RULE_listcmd(14), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("listcmd -> LISTVAR_CMD '(' elemexpr ',' mat_cmd ')'");
            }
#line 3883 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1416 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' elemexpr ',' PROC_CMD ')'");
                (yyval.tree) = astnode_make2(RULE_listcmd(15), (yyvsp[-3].tree), astint_make((yyvsp[-1].i)));
                exitrule("listcmd -> LISTVAR_CMD '(' elemexpr ',' PROC_CMD ')'");
            }
#line 3893 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1423 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' ')'");
                (yyval.tree) = astnode_make0(RULE_listcmd(16));
                exitrule("listcmd -> LISTVAR_CMD '(' ')'");
            }
#line 3903 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1432 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("ringcmd1 -> RING_CMD");
                (yyval.tree) = astnode_make0(RULE_ringcmd1(1));
                exitrule("ringcmd1 -> RING_CMD");
            }
#line 3913 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1445 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("ringcmd -> ringcmd1 elemexpr cmdeq rlist ','  rlist ',' ordering");
                (yyval.tree) = astnode_make4(RULE_ringcmd(1), (yyvsp[-6].tree), (yyvsp[-4].tree), (yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule("ringcmd -> ringcmd1 elemexpr cmdeq rlist ','  rlist ',' ordering");
            }
#line 3923 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1452 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("ringcmd -> ringcmd1 elemexpr");
                (yyval.tree) = astnode_make1(RULE_ringcmd(2), (yyvsp[0].tree));
                exitrule("ringcmd -> ringcmd1 elemexpr");
            }
#line 3933 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1459 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("ringcmd -> ringcmd1 elemexpr cmdeq elemexpr");
                (yyval.tree) = astnode_make2(RULE_ringcmd(3), (yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule("ringcmd -> ringcmd1 elemexpr cmdeq elemexpr");
            }
#line 3943 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1466 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("ringcmd -> ringcmd1 elemexpr cmdeq elemexpr '[' exprlist ']'");
                (yyval.tree) = astnode_make3(RULE_ringcmd(4), (yyvsp[-5].tree), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("ringcmd -> ringcmd1 elemexpr cmdeq elemexpr '[' exprlist ']'");
            }
#line 3953 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1475 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("scriptcmd -> SYSVAR stringexpr");
                (yyval.tree) = astnode_make2(RULE_scriptcmd(1), astint_make((yyvsp[-1].i)), (yyvsp[0].tree));
                exitrule("scriptcmd -> SYSVAR stringexpr");
            }
#line 3963 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1484 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("setrings -> SETRING_CMD");
                (yyval.tree) = astnode_make0(RULE_setrings(1));
                exitrule("setrings -> SETRING_CMD");
            }
#line 3973 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1490 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("setrings -> KEEPRING_CMD");
                (yyval.tree) = astnode_make0(RULE_setrings(2));
                exitrule("setrings -> KEEPRING_CMD");
            }
#line 3983 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1499 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("setringcmd -> setrings expr");
                (yyval.tree) = astnode_make2(RULE_setringcmd(1), (yyvsp[-1].tree), (yyvsp[0].tree));
                exitrule("setringcmd -> setrings expr");
            }
#line 3993 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1508 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("typecmd -> TYPE_CMD expr");
                (yyval.tree) = astnode_make1(RULE_typecmd(1), (yyvsp[0].tree));
                exitrule("typecmd -> TYPE_CMD expr");
            }
#line 4003 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1515 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("typecmd -> exprlist");
                (yyval.tree) = astnode_make1(RULE_typecmd(2), (yyvsp[0].tree));
                exitrule_ex("typecmd -> exprlist", (yyval.tree));
            }
#line 4013 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1527 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("ifcmd -> IF_CMD '(' expr ')' '{' lines '}'");
                (yyval.tree) = astnode_make2(RULE_ifcmd(1), (yyvsp[-4].tree), (yyvsp[-1].tree));
                exitrule_ex("ifcmd -> IF_CMD '(' expr ')' '{' lines '}'",(yyval.tree));
            }
#line 4023 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1534 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("ifcmd -> ELSE_CMD '{' lines '}'");
                (yyval.tree) = astnode_make1(RULE_ifcmd(2), (yyvsp[-1].tree));
                exitrule_ex("ifcmd -> ELSE_CMD '{' lines '}'",(yyval.tree));
            }
#line 4033 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1541 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("ifcmd -> IF_CMD '(' expr ')' BREAK_CMD");
                (yyval.tree) = astnode_make1(RULE_ifcmd(3), (yyvsp[-2].tree));
                exitrule("ifcmd -> IF_CMD '(' expr ')' BREAK_CMD");
            }
#line 4043 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1548 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("ifcmd -> BREAK_CMD");
                (yyval.tree) = astnode_make0(RULE_ifcmd(4));
                exitrule("ifcmd -> BREAK_CMD");
            }
#line 4053 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1555 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("ifcmd -> CONTINUE_CMD");
                (yyval.tree) = astnode_make0(RULE_ifcmd(5));
                exitrule("ifcmd -> CONTINUE_CMD");
            }
#line 4063 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1564 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("whilecmd -> WHILE_CMD '(' expr ')' '{' lines '}'");
                (yyval.tree) = astnode_make2(RULE_whilecmd(1), (yyvsp[-4].tree), (yyvsp[-1].tree));
                exitrule_ex("whilecmd -> WHILE_CMD '(' expr ')' '{' lines '}'",(yyval.tree));
            }
#line 4073 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1573 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("forcmd -> FOR_CMD '(' npprompt ';' expr ';' npprompt ')' '{' lines '}'");
                (yyval.tree) = astnode_make4(RULE_forcmd(1), (yyvsp[-8].tree), (yyvsp[-6].tree), (yyvsp[-4].tree), (yyvsp[-1].tree));
                exitrule_ex("forcmd -> FOR_CMD '(' npprompt ';' expr ';' npprompt ')' '{' lines '}'",(yyval.tree));
            }
#line 4083 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1582 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("proccmd -> PROC_CMD extendedid '{' lines '}'");
                (yyval.tree) = astnode_make2(RULE_proccmd(1), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("proccmd -> PROC_CMD extendedid '{' lines '}'");
            }
#line 4093 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1589 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("proccmd -> PROC_DEF '(' ')' '{' lines '}'");
                (yyval.tree) = astnode_make2(RULE_proccmd(2), aststring_make((yyvsp[-5].name)), (yyvsp[-1].tree));
                exitrule_ex("proccmd -> PROC_DEF '(' ')' '{' lines '}'",(yyval.tree));
            }
#line 4103 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1596 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("proccmd -> PROC_DEF '(' procargs ')' '{' lines '}'");
                (yyval.tree) = astnode_make3(RULE_proccmd(3), aststring_make((yyvsp[-6].name)), (yyvsp[-4].tree), (yyvsp[-1].tree));
                exitrule_ex("proccmd -> PROC_DEF '(' procargs ')' '{' lines '}'",(yyval.tree));
            }
#line 4113 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1603 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("proccmd -> PROC_DEF STRINGTOK '(' procargs ')' '{' lines '}'");
                (yyval.tree) = astnode_make4(RULE_proccmd(4), aststring_make((yyvsp[-7].name)), aststring_make((yyvsp[-6].name)), (yyvsp[-4].tree), (yyvsp[-1].tree));
                exitrule_ex("proccmd -> PROC_DEF STRINGTOK '(' procargs ')' '{' lines '}'",(yyval.tree));
            }
#line 4123 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1612 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("parametercmd -> PARAMETER declare_ip_variable");
                (yyval.tree) = astnode_make1(RULE_parametercmd(1), (yyvsp[0].tree));
                exitrule("parametercmd -> PARAMETER declare_ip_variable");
            }
#line 4133 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1619 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("parametercmd -> PARAMETER expr");
                (yyval.tree) = astnode_make1(RULE_parametercmd(2), (yyvsp[0].tree));
                exitrule("parametercmd -> PARAMETER expr");
            }
#line 4143 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1628 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("returncmd -> RETURN '(' exprlist ')'");
                (yyval.tree) = astnode_make1(RULE_returncmd(1), (yyvsp[-1].tree));
                exitrule_ex("returncmd -> RETURN '(' exprlist ')'",(yyval.tree));
            }
#line 4153 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1635 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("returncmd -> RETURN '(' ')'");
                (yyval.tree) = astnode_make0(RULE_returncmd(2));
                exitrule_ex("returncmd -> RETURN '(' ')'",(yyval.tree));
            }
#line 4163 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1644 "grammar.y" /* yacc.c:1646  */
    {
                (yyval.tree) = astnode_make2(RULE_procargs(1), astint_make((yyvsp[-1].i)), (yyvsp[0].tree));
            }
#line 4171 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1649 "grammar.y" /* yacc.c:1646  */
    {
                (yyval.tree) = astnode_make1(RULE_procargs(2), (yyvsp[0].tree));
            }
#line 4179 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1654 "grammar.y" /* yacc.c:1646  */
    {
                (yyval.tree) = astnode_make3(RULE_procargs(3), astint_make((yyvsp[-3].i)), (yyvsp[-2].tree), (yyvsp[0].tree));
            }
#line 4187 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1659 "grammar.y" /* yacc.c:1646  */
    {
                (yyval.tree) = astnode_make2(RULE_procargs(4), (yyvsp[-2].tree), (yyvsp[0].tree));
            }
#line 4195 "grammar.tab.c" /* yacc.c:1646  */
    break;


#line 4199 "grammar.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (retv, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (retv, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, retv);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, retv);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (retv, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, retv);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, retv);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1664 "grammar.y" /* yacc.c:1906  */



void yyerror(astree ** retv, const char * fmt)
{
    *retv = NULL;
}

void enterrule(const char * s) {
    if (JLGRAMMAR_DBGMASK & 1) {printf(">>  %s\n",s);}
}

void exitrule(const char * s) {
    if (JLGRAMMAR_DBGMASK & 1) {
        printf("  <<%s\n\n",s);
    }
}

void exitrule_ex(const char * s, astree * expr) {
    if (JLGRAMMAR_DBGMASK & 2) {
        printf("  <<%s %p:\n",s,expr);
        fflush(stdout);
/*        jl_call1(mjl_func_mydump, expr);*/
        printf("\n\n");
        fflush(stdout);
    }
}
void exitrule_int(const char * s, int i) {
    if (JLGRAMMAR_DBGMASK & 2) {printf("  <<%s\n",s);}
}
void exitrule_str(const char * s, const char * name) {
    if (JLGRAMMAR_DBGMASK & 2) {printf("  <<%s\n",s);}
}
