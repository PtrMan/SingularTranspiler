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
    UMINUS = 342
  };
#endif

/* Value type.  */



int yyparse (astree ** retv);

#endif /* !YY_YY_GRAMMAR_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 229 "grammar.tab.c" /* yacc.c:358  */

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
#define YYLAST   3618

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  106
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  194
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  454

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   342

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
       2,    92,     2,    93,    94,     2,   105,     2,     2,     2,
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
      85,    86,    99
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   205,   205,   212,   222,   229,   236,   243,   250,   257,
     266,   272,   281,   288,   295,   302,   309,   316,   323,   333,
     340,   347,   354,   361,   368,   377,   384,   391,   398,   405,
     412,   419,   426,   434,   442,   449,   456,   463,   470,   477,
     484,   491,   498,   506,   515,   522,   529,   536,   543,   550,
     557,   564,   571,   578,   585,   592,   599,   606,   613,   620,
     627,   634,   641,   648,   655,   662,   669,   676,   683,   690,
     697,   704,   711,   718,   725,   732,   739,   746,   753,   760,
     767,   776,   783,   791,   798,   805,   812,   819,   826,   833,
     840,   847,   854,   861,   868,   875,   883,   882,   896,   904,
     912,   921,   928,   935,   942,   949,   967,   974,   996,  1010,
    1017,  1024,  1031,  1038,  1045,  1054,  1061,  1071,  1078,  1088,
    1095,  1102,  1109,  1116,  1123,  1130,  1137,  1146,  1155,  1162,
    1171,  1180,  1186,  1195,  1202,  1211,  1218,  1226,  1235,  1242,
    1249,  1262,  1271,  1278,  1287,  1296,  1305,  1312,  1321,  1328,
    1335,  1342,  1349,  1356,  1363,  1370,  1377,  1384,  1391,  1398,
    1405,  1412,  1419,  1426,  1435,  1444,  1455,  1462,  1469,  1478,
    1487,  1493,  1502,  1511,  1518,  1530,  1537,  1544,  1551,  1558,
    1567,  1576,  1585,  1592,  1599,  1606,  1615,  1622,  1631,  1638,
    1647,  1654,  1663,  1670,  1677
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
  "'{'", "'}'", "'.'", "'`'", "$accept", "top_lines", "top_pprompt",
  "lines", "pprompt", "npprompt", "flowctrl", "example_dummy", "command",
  "assign", "elemexpr", "exprlist", "expr", "$@1", "quote_start",
  "assume_start", "quote_end", "expr_arithmetic", "left_value",
  "extendedid", "declare_ip_variable", "stringexpr", "rlist", "ordername",
  "orderelem", "OrderingList", "ordering", "cmdeq", "mat_cmd", "filecmd",
  "helpcmd", "examplecmd", "exportcmd", "killcmd", "listcmd", "ringcmd1",
  "ringcmd", "scriptcmd", "setrings", "setringcmd", "typecmd", "ifcmd",
  "whilecmd", "forcmd", "proccmd", "parametercmd", "returncmd",
  "procarglist", "procarg", YY_NULLPTR
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
      40,    41,   123,   125,    46,    96
};
# endif

#define YYPACT_NINF -386

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-386)))

#define YYTABLE_NINF -168

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-168)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -386,   589,  -386,   -74,  2919,  -386,  -386,  2985,   -73,  -386,
    -386,   -64,   -53,   -40,   -36,   -27,   -24,   -21,   -19,  3051,
    3117,  3183,  3249,   -48,  2919,   -47,  2919,   -11,  -386,  2919,
    -386,  -386,  -386,  -386,   -44,    -7,    10,  -386,  -386,    18,
      29,    49,    64,    68,  -386,    71,  3315,   146,   146,  2919,
    2919,  -386,  2919,  2919,  -386,  -386,  -386,   101,  -386,    15,
     -62,  2421,  2919,  2919,  -386,  2919,   192,   -28,  -386,  3381,
    -386,  -386,  -386,  -386,   120,  -386,  2919,  -386,  -386,  2919,
    -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,   124,   -73,
     150,   154,   166,   171,  -386,    14,   175,  2919,    74,  2421,
       1,  3447,  2919,  2919,  2919,  2919,  2919,  2919,  2919,  2523,
    2919,    91,  2589,   130,  2919,   161,  2655,   185,   141,  -386,
     125,   196,  -386,   106,  2721,  2421,   182,   186,  2919,  -386,
    -386,  -386,  -386,  1612,  2919,  2919,  2985,  2421,   189,  -386,
    -386,    14,    35,   -18,     7,  -386,  2919,  2787,  -386,  2919,
    -386,  2919,  2919,  -386,  2919,  -386,  2919,  2919,  2919,  2919,
    2919,  2919,  2919,  2919,  2919,   330,  1273,   125,   194,  2919,
    -386,  -386,  2919,    47,  2919,    98,  2421,  2919,  2919,  2589,
    2919,  2655,  2919,  1457,  -386,  2919,  1643,   207,  1704,  1739,
    1750,   426,   454,  1761,   475,  -386,   -17,  1772,  -386,   -15,
    1800,  -386,    32,  -386,   682,  -386,    45,    80,   127,   188,
     208,   226,  -386,   348,   229,   -14,   -61,   -61,   203,  -386,
      43,  -386,  1868,   775,  2919,  -386,  -386,   210,   216,  -386,
    -386,   -13,  -386,  1896,  1913,  -386,  -386,  -386,  -386,  -386,
      78,  2421,    62,   209,   209,   155,    22,    22,    14,  1632,
      27,  2432,    22,  -386,  2919,  -386,  -386,  2919,  -386,   257,
     715,  2919,   345,  3447,  1457,  1772,    81,  1800,    88,   715,
    -386,   868,  1930,  -386,  3447,  -386,  2919,  2919,  2919,  -386,
    2919,  -386,  2919,  2919,  -386,  -386,  -386,  -386,  -386,  -386,
     227,  -386,  -386,  -386,  -386,  -386,   236,   -25,  -386,  -386,
    -386,  -386,  -386,  -386,  -386,   571,  -386,  -386,   113,  -386,
    -386,  -386,   -14,   239,  3513,  -386,  1941,  2853,  2919,   -39,
     241,  -386,  -386,  2919,  1964,  1964,   961,  2919,  -386,  2037,
     173,  2421,   252,  -386,  -386,  -386,  2919,   256,  2060,  2077,
    2088,  2105,   901,  1087,  -386,  -386,  -386,   263,   266,   268,
     286,   288,   289,   292,   293,  1054,  -386,  -386,   235,   245,
     261,   279,   281,  2129,  -386,  -386,   128,  2201,  -386,  -386,
    -386,  2225,  -386,  -386,  -386,  2236,   306,  2919,  3447,   137,
     -54,  -386,  2919,  -386,  2919,  2919,  -386,  2919,  -386,  -386,
    -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  1147,  -386,
    -386,  -386,  -386,  -386,  -386,  -386,  1612,  1240,  1333,  -386,
    2919,  2919,    95,   305,  -386,  -386,   332,   302,  -386,   303,
    2247,  2264,  2297,  2360,  1426,  -386,   310,  -386,  -386,  2393,
    2410,  -386,   -54,   308,   311,  2919,  -386,  -386,  -386,  -386,
    -386,  -386,   312,  -386,  -386,  -386,   332,  -386,   163,  -386,
    -386,  -386,  1519,  -386
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
       0,     0,   163,    84,     0,     0,     0,     0,     0,   194,
       0,   191,     0,     0,     0,    24,    23,     0,     0,    19,
      20,    21,    22,     0,     0,    50,    80,   118,    46,    48,
       0,    81,   111,   110,   109,   107,   103,   104,   105,     0,
     106,   108,   112,    47,     0,   100,    93,     0,    10,    84,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
      54,     0,    82,    78,     0,    61,     0,     0,     0,    62,
       0,    63,     0,     0,    64,    74,    55,    56,    58,    59,
       0,    16,    17,    33,    11,    12,     0,     0,    15,   154,
     152,   148,   149,   150,   151,     0,   155,   153,     0,   192,
     193,    10,     0,     0,     0,   176,     0,     0,     0,     0,
       0,    49,    86,     0,     0,     0,     0,     0,    76,     0,
      84,   128,     0,    56,    59,   182,     0,     0,     0,     0,
       0,     0,     0,     0,    18,    13,    14,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   190,    10,     0,     0,
       0,     0,     0,     0,    97,   189,     0,     0,   177,    10,
      10,     0,    94,    95,    79,     0,     0,     0,     0,     0,
       0,    65,     0,    66,     0,     0,    67,     0,    68,   162,
     160,   156,   157,   158,   159,   161,    10,   183,     0,    87,
      88,    89,    90,    91,    92,   188,     0,     0,     0,    85,
       0,     0,     0,     0,   129,   130,     0,   131,   135,     0,
       0,     0,     0,     0,     0,   184,     0,   175,   180,     0,
       0,   168,     0,   133,     0,     0,    77,    69,    70,    71,
      72,   185,     0,    75,   123,   165,     0,   136,     0,    10,
     134,   132,     0,   181
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -386,  -386,  -386,  -118,  -386,     9,     3,  -386,     4,  -386,
      31,   -22,   214,  -386,  -386,  -386,  -285,  -386,  -386,    -6,
       2,   337,  -256,  -386,  -385,   -30,     0,   -51,    -1,  -386,
    -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,
    -386,  -386,  -386,  -386,  -386,  -386,  -127,   211,   132
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    54,   204,   294,   228,   295,    56,   296,    58,
      59,    60,    61,   224,    62,    63,   256,    64,    65,    66,
     297,    68,   187,   417,   418,   434,   419,   171,    96,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,   298,   220,   221
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      69,   100,   120,    67,    55,    57,   232,   332,    32,   150,
     151,   152,   223,   168,   153,   415,   154,   155,   337,   118,
     121,   153,    87,   126,   155,   148,   146,   101,   142,   153,
     143,   433,   155,   149,   153,   368,   102,   155,    98,   372,
     373,   216,   217,   167,    53,    69,   416,   103,   138,   122,
     111,   113,   115,   117,   119,    32,   127,   123,   146,   148,
     104,   433,   148,   369,   105,  -168,   271,   169,   170,   153,
     169,   346,   155,   106,   148,   143,   107,   149,   149,   108,
     149,   109,   169,   236,   285,   146,   287,   196,   143,   124,
     199,    53,   143,   128,   202,   156,   157,   158,   159,   160,
     173,   161,   146,   184,   162,   163,   160,   175,   161,   146,
     129,   164,   237,   159,   160,   147,   161,   146,   164,   160,
     130,   219,   413,   214,   263,   240,   164,   149,   235,   131,
     149,   164,    69,   289,  -124,   231,   229,   230,   312,   261,
     326,   146,  -124,  -124,   313,   177,   299,   147,  -124,   132,
     143,   157,   158,   159,   160,   213,   161,   266,   151,   268,
     163,  -126,   153,   143,   133,   155,   164,    98,   134,  -126,
    -126,   135,   146,   149,   147,  -126,   149,   238,  -119,   321,
     101,   300,   333,   149,   146,   148,  -119,  -119,   431,   334,
     149,   147,  -119,   355,  -166,   253,   146,   145,   147,  -166,
     259,  -146,  -146,    69,   168,   262,   147,  -146,   312,   219,
     309,   310,   151,    30,   354,   174,   153,  -120,    95,   155,
     149,    99,    69,   149,   177,  -120,  -120,   178,   301,   405,
     147,  -120,   149,    99,    99,    99,    99,   203,   414,   398,
      99,   216,   217,   125,   157,   158,   159,   160,  -121,   161,
     178,   407,   408,   163,   179,    32,  -121,  -121,   149,   164,
     137,   147,  -121,   141,   451,   377,   180,   144,   146,  -167,
      69,   181,  -122,   147,  -167,   182,   165,   166,   424,   232,
    -122,  -122,   215,    99,   169,   147,  -122,   218,   179,   302,
      99,    53,   205,   176,   330,   366,   258,   156,   157,   158,
     159,   160,   274,   161,   353,   311,   219,   163,   180,   303,
     317,   183,   318,   164,   379,   186,   188,   189,   190,   191,
     192,   193,   194,   344,   197,    69,   181,   304,   200,   182,
     307,   452,   345,   151,   152,   102,   399,   153,    99,   154,
     155,   357,   222,   370,  -125,   105,   400,   378,   233,   234,
      99,   380,  -125,  -125,    69,   412,   146,   147,  -125,   146,
      99,   106,   401,   241,   389,   242,   243,   390,   244,   391,
     245,   246,   247,   248,   249,   250,   251,   252,    99,   108,
     402,   109,   403,    99,   139,   140,   260,   392,    99,   393,
     394,   264,   265,   395,   267,   396,   269,    69,   411,   272,
     432,   415,   435,   446,   436,    69,    69,    69,   231,   229,
     230,   442,   447,   448,   449,   426,   450,   254,   156,   157,
     158,   159,   160,    69,   161,     0,   308,   162,   163,   151,
     152,   255,   445,   153,   164,   154,   155,     0,   316,     0,
    -147,  -147,     0,   305,   356,   147,  -147,     0,   147,   306,
       0,    69,     0,     0,     0,     0,     0,   151,   152,     0,
       0,   153,     0,   154,   155,     0,     0,     0,   324,     0,
       0,   325,     0,     0,     0,   329,     0,   331,   151,   152,
       0,     0,   153,     0,   154,   155,     0,     0,   331,     0,
     338,   339,   340,     0,   341,     0,   342,   343,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   156,   157,   158,   159,   160,     0,
     161,   278,     0,   162,   163,     0,     0,   279,   363,     0,
     164,     0,   367,     0,     0,     0,     0,   371,     0,     0,
       0,   375,   156,   157,   158,   159,   160,     0,   161,   280,
       0,   162,   163,     0,     0,   281,     0,     0,   164,     0,
       0,     0,     0,   156,   157,   158,   159,   160,     0,   161,
     283,     0,   162,   163,     0,     0,   284,     0,     0,   164,
       0,     0,     0,     0,     0,     5,     6,   347,   348,     2,
       3,     0,   331,     9,     0,     0,   420,     4,   421,   422,
       0,   423,     0,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,     0,   429,   430,   349,   350,   351,   352,
       0,     0,     0,     0,     0,     0,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,     0,    46,     0,    47,     0,    48,     0,    49,
       0,    50,     0,   290,     0,    51,     0,     0,     0,    52,
       4,     0,     0,     0,    53,     0,     5,     6,     7,     8,
       0,     0,     0,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,     0,     0,   151,   152,
       0,     0,   153,     0,   154,   155,     0,     0,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,   291,    45,   227,    46,     0,    47,     0,
      48,     0,    49,     0,    50,     0,   290,     0,   292,     0,
       0,     0,    52,     4,     0,   293,     0,    53,     0,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,   156,   157,   158,   159,   160,    10,   161,
     327,     0,   162,   163,     0,     0,   328,     0,     0,   164,
       0,     0,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,   291,    45,   227,    46,
       0,    47,     0,    48,     0,    49,     0,    50,     0,   290,
       0,   292,     0,     0,     0,    52,     4,     0,   315,     0,
      53,     0,     5,     6,     7,     8,     0,     0,     0,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,     0,     0,   151,   152,     0,     0,   153,     0,
     154,   155,     0,     0,     0,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,   291,
      45,   227,    46,     0,    47,     0,    48,     0,    49,     0,
      50,     0,   290,     0,   292,     0,     0,     0,    52,     4,
       0,   335,     0,    53,     0,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,   156,
     157,   158,   159,   160,    10,   161,   385,     0,   162,   163,
       0,     0,   386,     0,     0,   164,     0,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,   291,    45,   227,    46,     0,    47,     0,    48,
       0,    49,     0,    50,     0,   290,     0,   292,     0,     0,
       0,    52,     4,     0,   374,     0,    53,     0,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,     0,     0,
     151,   152,     0,     0,   153,     0,   154,   155,     0,     0,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,   291,    45,   227,    46,     0,
      47,     0,    48,     0,    49,     0,    50,     0,   290,     0,
     292,     0,     0,     0,    52,     4,     0,   397,     0,    53,
       0,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,   156,   157,   158,   159,   160,
      10,   161,   387,     0,   162,   163,     0,     0,   388,     0,
       0,   164,     0,     0,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,   291,    45,
     227,    46,     0,    47,     0,    48,     0,    49,     0,    50,
       0,   290,     0,   292,     0,     0,     0,    52,     4,     0,
     425,     0,    53,     0,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,     0,     0,   151,   152,     0,     0,
     153,     0,   154,   155,     0,     0,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,   291,    45,   227,    46,     0,    47,     0,    48,     0,
      49,     0,    50,     0,   290,     0,   292,     0,     0,     0,
      52,     4,     0,   427,     0,    53,     0,     5,     6,     7,
       8,     0,     0,     0,     0,     9,     0,     0,     0,     0,
       0,   156,   157,   158,   159,   160,    10,   161,   257,     0,
     162,   163,     0,     0,     0,     0,     0,   164,     0,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,   291,    45,   227,    46,     0,    47,
       0,    48,     0,    49,     0,    50,     0,   290,     0,   292,
       0,     0,     0,    52,     4,     0,   428,     0,    53,     0,
       5,     6,     7,     8,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
     151,   152,     0,     0,   153,     0,   154,   155,     0,     0,
       0,     0,     0,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,   291,    45,   227,
      46,     0,    47,     0,    48,     0,    49,     0,    50,     0,
     290,     0,   292,     0,     0,     0,    52,     4,     0,   441,
       0,    53,     0,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,     0,   156,   157,   158,   159,   160,
       0,   161,    10,     0,   162,   163,     0,     0,   270,     0,
       0,   164,     0,     0,     0,     0,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
     291,    45,   227,    46,     0,    47,     0,    48,     0,    49,
       0,    50,     0,   225,     0,   292,     0,     0,     0,    52,
       4,     0,   453,     0,    53,     0,     5,     6,     7,     8,
       0,     0,     0,     0,     9,   151,   152,     0,     0,   153,
       0,   154,   155,     0,     0,    10,   151,   152,     0,     0,
     153,     0,   154,   155,     0,     0,     0,     0,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,   226,    45,   227,    46,     0,    47,     0,
      48,     0,    49,     0,    50,     0,     0,   151,   152,     0,
       0,   153,    52,   154,   155,     0,     0,    53,     0,     0,
     156,   157,   158,   159,   160,   322,   161,   323,     0,   162,
     163,   156,   157,   158,   159,   160,   164,   161,     0,     0,
     162,   163,   151,   152,   273,     0,   153,   164,   154,   155,
       0,     0,     0,   151,   152,     0,     0,   153,     0,   154,
     155,     0,     0,     0,   151,   152,     0,     0,   153,     0,
     154,   155,     0,     0,     0,   151,   152,     0,     0,   153,
       0,   154,   155,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   156,   157,   158,   159,   160,     0,   161,     0,
       0,   162,   163,   151,   152,   275,     0,   153,   164,   154,
     155,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   156,   157,   158,
     159,   160,     0,   161,   276,     0,   162,   163,   156,   157,
     158,   159,   160,   164,   161,   277,     0,   162,   163,   156,
     157,   158,   159,   160,   164,   161,   282,     0,   162,   163,
     156,   157,   158,   159,   160,   164,   161,     0,     0,   162,
     163,   151,   152,   286,     0,   153,   164,   154,   155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   156,   157,
     158,   159,   160,     0,   161,     0,     0,   162,   163,   151,
     152,   288,     0,   153,   164,   154,   155,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   151,   152,     0,     0,
     153,     0,   154,   155,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   151,   152,     0,     0,   153,     0,   154,
     155,     0,     0,     0,   151,   152,     0,     0,   153,     0,
     154,   155,     0,     0,     0,     0,   156,   157,   158,   159,
     160,     0,   161,   314,     0,   162,   163,   151,   152,     0,
       0,   153,   164,   154,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   156,   157,   158,   159,   160,     0,
     161,     0,     0,   162,   163,     0,     0,   319,     0,     0,
     164,   156,   157,   158,   159,   160,     0,   161,     0,     0,
     162,   163,     0,     0,   320,     0,     0,   164,   156,   157,
     158,   159,   160,     0,   161,   336,     0,   162,   163,   156,
     157,   158,   159,   160,   164,   161,     0,     0,   162,   163,
     151,   152,   364,     0,   153,   164,   154,   155,     0,     0,
       0,     0,   156,   157,   158,   159,   160,     0,   161,     0,
       0,   162,   163,   151,   152,   255,     0,   153,   164,   154,
     155,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     151,   152,     0,     0,   153,     0,   154,   155,     0,     0,
       0,   151,   152,     0,     0,   153,     0,   154,   155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   151,   152,
       0,     0,   153,     0,   154,   155,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   156,   157,   158,   159,   160,
     376,   161,   151,   152,   162,   163,   153,     0,   154,   155,
       0,   164,     0,     0,     0,     0,     0,     0,   156,   157,
     158,   159,   160,     0,   161,     0,     0,   162,   163,     0,
       0,   381,     0,     0,   164,   156,   157,   158,   159,   160,
       0,   161,   382,     0,   162,   163,   156,   157,   158,   159,
     160,   164,   161,     0,     0,   162,   163,     0,     0,   383,
       0,     0,   164,   156,   157,   158,   159,   160,     0,   161,
     384,     0,   162,   163,   151,   152,     0,     0,   153,   164,
     154,   155,     0,     0,     0,     0,     0,   156,   157,   158,
     159,   160,     0,   161,     0,     0,   162,   163,   151,   152,
     404,     0,   153,   164,   154,   155,     0,     0,     0,   151,
     152,     0,     0,   153,     0,   154,   155,     0,     0,     0,
     151,   152,     0,     0,   153,     0,   154,   155,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   151,   152,     0,
       0,   153,     0,   154,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   156,
     157,   158,   159,   160,     0,   161,     0,   406,   162,   163,
     151,   152,     0,     0,   153,   164,   154,   155,     0,     0,
       0,     0,     0,   156,   157,   158,   159,   160,   409,   161,
       0,     0,   162,   163,   156,   157,   158,   159,   160,   164,
     161,   410,     0,   162,   163,   156,   157,   158,   159,   160,
     164,   161,     0,     0,   162,   163,     0,     0,   437,     0,
       0,   164,   156,   157,   158,   159,   160,     0,   161,     0,
       0,   162,   163,   151,   152,   438,     0,   153,   164,   154,
     155,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   156,   157,   158,   159,   160,
       0,   161,     0,     0,   162,   163,   151,   152,   439,     0,
     153,   164,   154,   155,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   151,   152,     0,     0,   153,     0,   154,
     155,     0,     0,     0,   151,   152,     0,     0,   153,     0,
     154,   155,     0,     0,     0,   151,   152,     0,     0,   153,
       0,   154,   155,     0,     0,     0,     0,     0,   156,   157,
     158,   159,   160,     0,   161,     0,     0,   162,   163,     0,
       0,   440,     0,     0,   164,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   156,   157,   158,   159,   160,     0,   161,     0,     0,
     162,   163,     0,     0,   443,     0,     0,   164,   156,   157,
     158,   159,   160,   444,   161,     0,     0,   162,   163,   156,
     157,   158,   159,   160,   164,   161,     0,     0,   162,   163,
     156,   157,   158,   159,   160,   164,   161,     0,     0,     0,
     163,     4,     0,     0,     0,     0,   164,     5,     6,    88,
      89,     0,     0,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    90,    91,
      92,    93,     0,     0,     0,     0,     0,     0,     0,     0,
      30,    31,    32,    33,     0,    35,    36,     4,     0,     0,
      40,    41,     0,     5,     6,    88,    89,     0,     0,    94,
       0,     9,     0,    49,     0,    50,     0,     0,     0,     0,
       0,     0,     0,    52,   195,     0,     0,     0,    53,     0,
       0,     0,     0,     0,     0,     0,    11,    12,    13,    14,
      15,    16,    17,    18,    90,    91,    92,    93,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    31,    32,    33,
       0,    35,    36,     4,     0,     0,    40,    41,     0,     5,
       6,    88,    89,     0,     0,    94,     0,     9,     0,    49,
       0,    50,     0,     0,     0,     0,     0,     0,     0,    52,
     198,     0,     0,     0,    53,     0,     0,     0,     0,     0,
       0,     0,    11,    12,    13,    14,    15,    16,    17,    18,
      90,    91,    92,    93,     0,     0,     0,     0,     0,     0,
       0,     0,    30,    31,    32,    33,     0,    35,    36,     4,
       0,     0,    40,    41,     0,     5,     6,   206,   207,     0,
       0,    94,     0,     9,     0,    49,     0,    50,     0,     0,
       0,     0,     0,     0,     0,    52,   201,     0,     0,     0,
      53,     0,     0,     0,     0,     0,     0,     0,    11,    12,
      13,    14,    15,    16,    17,    18,   208,   209,   210,   211,
       0,     0,     0,     0,     0,     0,     0,     0,    30,    31,
      32,    33,     0,    35,    36,     4,     0,     0,    40,    41,
       0,     5,     6,    88,    89,     0,     0,    94,     0,     9,
       0,    49,     0,    50,     0,     0,     0,     0,     0,     0,
       0,    52,   212,     0,     0,     0,    53,     0,     0,     0,
       0,     0,     0,     0,    11,    12,    13,    14,    15,    16,
      17,    18,    90,    91,    92,    93,     0,     0,     0,     0,
       0,     0,     0,     0,    30,    31,    32,    33,     0,    35,
      36,     4,     0,     0,    40,    41,     0,     5,     6,    88,
      89,     0,     0,    94,     0,     9,     0,    49,     0,    50,
       0,     0,     0,     0,     0,     0,     0,    52,   239,     0,
       0,     0,    53,     0,     0,     0,     0,     0,     0,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    90,    91,
      92,    93,     0,     0,     0,     0,     0,     0,     0,     0,
      30,    31,    32,    33,     0,    35,    36,     4,     0,     0,
      40,    41,     0,     5,     6,    88,    89,     0,     0,    94,
       0,     9,     0,    49,     0,    50,     0,     0,     0,     0,
       0,     0,     0,    52,   365,     0,     0,     0,    53,     0,
       0,     0,     0,     0,     0,     0,    11,    12,    13,    14,
      15,    16,    17,    18,    90,    91,    92,    93,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    31,    32,    33,
       0,    35,    36,     4,     0,     0,    40,    41,     0,     5,
       6,    88,    89,     0,     0,    94,     0,     9,     0,    49,
       0,    50,     0,     0,     0,     0,     0,     0,     0,    52,
       0,     0,     0,     0,    53,     0,     0,     0,     0,     0,
       0,     0,    11,    12,    13,    14,    15,    16,    17,    18,
      90,    91,    92,    93,     0,     0,     0,     0,     0,     0,
       0,     0,    30,    31,    32,    33,     0,    35,    36,     4,
       0,     0,    40,    41,     0,     5,     6,    88,    89,     0,
       0,    94,     0,     9,     0,    49,     0,    50,     0,     0,
       0,     0,     0,     0,     0,    97,     0,     0,     0,     0,
      53,     0,     0,     0,     0,     0,     0,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    90,    91,    92,    93,
       0,     0,     0,     0,     0,     0,     0,     0,    30,    31,
      32,    33,     0,    35,    36,     4,     0,     0,    40,    41,
       0,     5,     6,    88,    89,     0,     0,    94,     0,     9,
       0,    49,     0,    50,     0,     0,     0,     0,     0,     0,
       0,   110,     0,     0,     0,     0,    53,     0,     0,     0,
       0,     0,     0,     0,    11,    12,    13,    14,    15,    16,
      17,    18,    90,    91,    92,    93,     0,     0,     0,     0,
       0,     0,     0,     0,    30,    31,    32,    33,     0,    35,
      36,     4,     0,     0,    40,    41,     0,     5,     6,    88,
      89,     0,     0,    94,     0,     9,     0,    49,     0,    50,
       0,     0,     0,     0,     0,     0,     0,   112,     0,     0,
       0,     0,    53,     0,     0,     0,     0,     0,     0,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    90,    91,
      92,    93,     0,     0,     0,     0,     0,     0,     0,     0,
      30,    31,    32,    33,     0,    35,    36,     4,     0,     0,
      40,    41,     0,     5,     6,    88,    89,     0,     0,    94,
       0,     9,     0,    49,     0,    50,     0,     0,     0,     0,
       0,     0,     0,   114,     0,     0,     0,     0,    53,     0,
       0,     0,     0,     0,     0,     0,    11,    12,    13,    14,
      15,    16,    17,    18,    90,    91,    92,    93,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    31,    32,    33,
       0,    35,    36,     4,     0,     0,    40,    41,     0,     5,
       6,   136,    89,     0,     0,    94,     0,     9,     0,    49,
       0,    50,     0,     0,     0,     0,     0,     0,     0,   116,
       0,     0,     0,     0,    53,     0,     0,     0,     0,     0,
       0,     0,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     0,     0,     0,     0,     0,     0,
       0,     0,    30,    31,    32,    33,     0,    35,    36,     4,
       0,     0,    40,    41,     0,     5,     6,    88,    89,     0,
       0,    94,     0,     9,     0,    49,     0,    50,     0,     0,
       0,     0,     0,     0,     0,    52,     0,     0,     0,     0,
      53,     0,     0,     0,     0,     0,     0,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    90,    91,    92,    93,
       0,     0,     0,     0,     0,     0,     0,     0,    30,    31,
      32,    33,     0,    35,    36,     4,     0,     0,    40,    41,
       0,     5,     6,    88,    89,     0,     0,    94,     0,     9,
       0,    49,     0,    50,     0,     0,     0,     0,     0,     0,
       0,   172,     0,     0,     0,     0,    53,     0,     0,     0,
       0,     0,     0,     0,    11,    12,    13,    14,    15,    16,
      17,    18,    90,    91,    92,    93,     0,     0,     0,     0,
       0,     0,     0,     0,    30,    31,    32,    33,     0,    35,
      36,     4,     0,     0,    40,    41,     0,     5,     6,    88,
      89,     0,     0,    94,     0,     9,     0,    49,     0,    50,
       0,     0,     0,     0,     0,     0,     0,   185,     0,     0,
       0,     0,    53,     0,     0,     0,     0,     0,     0,     0,
     358,    12,    13,   359,   360,    16,   361,   362,    90,    91,
      92,    93,     0,     0,     0,     0,     0,     0,     0,     0,
      30,    31,    32,    33,     0,    35,    36,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,    94,
       0,     0,     0,    49,     0,    50,     0,     0,     0,     0,
       0,     0,     0,    52,     0,     0,     0,     0,    53
};

static const yytype_int16 yycheck[] =
{
       1,     7,    24,     1,     1,     1,   133,   263,    69,    60,
       3,     4,   130,    12,     7,    69,     9,    10,   274,    67,
      67,     7,    96,    67,    10,    87,    11,   100,    50,     7,
      52,   416,    10,    95,     7,    74,   100,    10,     7,   324,
     325,    55,    56,    65,   105,    46,   100,   100,    46,    96,
      19,    20,    21,    22,   102,    69,   100,    26,    11,    87,
     100,   446,    87,   102,   100,     3,   184,    95,    96,     7,
      95,    96,    10,   100,    87,    97,   100,    95,    95,   100,
      95,   100,    95,   101,   101,    11,   101,   109,   110,   100,
     112,   105,   114,   100,   116,    88,    89,    90,    91,    92,
      69,    94,    11,   102,    97,    98,    92,    76,    94,    11,
     100,   104,   105,    91,    92,   100,    94,    11,   104,    92,
     102,   127,   378,   124,   175,   147,   104,    95,    93,   100,
      95,   104,   133,   101,    87,   133,   133,   133,    95,    92,
     258,    11,    95,    96,   101,   100,   101,   100,   101,   100,
     172,    89,    90,    91,    92,   124,    94,   179,     3,   181,
      98,    87,     7,   185,   100,    10,   104,   136,   100,    95,
      96,   100,    11,    95,   100,   101,    95,   146,    87,   101,
     100,   101,   101,    95,    11,    87,    95,    96,    93,   101,
      95,   100,   101,   311,    96,   164,    11,    96,   100,   101,
     169,    95,    96,   204,    12,   174,   100,   101,    95,   215,
     216,   217,     3,    67,   101,    95,     7,    87,     4,    10,
      95,     7,   223,    95,   100,    95,    96,   100,   101,   101,
     100,   101,    95,    19,    20,    21,    22,    96,   101,   357,
      26,    55,    56,    29,    89,    90,    91,    92,    87,    94,
     100,   369,   370,    98,   100,    69,    95,    96,    95,   104,
      46,   100,   101,    49,   101,    92,   100,    53,    11,    96,
     271,   100,    87,   100,   101,   100,    62,    63,   396,   406,
      95,    96,   100,    69,    95,   100,   101,   101,   100,   101,
      76,   105,    96,    79,   263,   317,   102,    88,    89,    90,
      91,    92,    95,    94,   305,   102,   312,    98,   100,   101,
     100,    97,    96,   104,   336,   101,   102,   103,   104,   105,
     106,   107,   108,    96,   110,   326,   100,   101,   114,   100,
     101,   449,    96,     3,     4,   100,   101,     7,   124,     9,
      10,   102,   128,   102,    87,   100,   101,    95,   134,   135,
     136,    95,    95,    96,   355,   377,    11,   100,   101,    11,
     146,   100,   101,   149,   101,   151,   152,   101,   154,   101,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   100,
     101,   100,   101,   169,    47,    48,   172,   101,   174,   101,
     101,   177,   178,   101,   180,   102,   182,   398,    92,   185,
      95,    69,   100,    95,   101,   406,   407,   408,   406,   406,
     406,   101,   101,   435,   102,   406,   446,    87,    88,    89,
      90,    91,    92,   424,    94,    -1,   215,    97,    98,     3,
       4,   101,   432,     7,   104,     9,    10,    -1,   224,    -1,
      95,    96,    -1,    95,   312,   100,   101,    -1,   100,   101,
      -1,   452,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,
      -1,     7,    -1,     9,    10,    -1,    -1,    -1,   254,    -1,
      -1,   257,    -1,    -1,    -1,   261,    -1,   263,     3,     4,
      -1,    -1,     7,    -1,     9,    10,    -1,    -1,   274,    -1,
     276,   277,   278,    -1,   280,    -1,   282,   283,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,
      94,    95,    -1,    97,    98,    -1,    -1,   101,   314,    -1,
     104,    -1,   318,    -1,    -1,    -1,    -1,   323,    -1,    -1,
      -1,   327,    88,    89,    90,    91,    92,    -1,    94,    95,
      -1,    97,    98,    -1,    -1,   101,    -1,    -1,   104,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,    94,
      95,    -1,    97,    98,    -1,    -1,   101,    -1,    -1,   104,
      -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,     0,
       1,    -1,   378,    22,    -1,    -1,   382,     8,   384,   385,
      -1,   387,    -1,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,   410,   411,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,    90,
      -1,    92,    -1,     1,    -1,    96,    -1,    -1,    -1,   100,
       8,    -1,    -1,    -1,   105,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,     3,     4,
      -1,    -1,     7,    -1,     9,    10,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    -1,    86,    -1,
      88,    -1,    90,    -1,    92,    -1,     1,    -1,    96,    -1,
      -1,    -1,   100,     8,    -1,   103,    -1,   105,    -1,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    92,    33,    94,
      95,    -1,    97,    98,    -1,    -1,   101,    -1,    -1,   104,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      -1,    86,    -1,    88,    -1,    90,    -1,    92,    -1,     1,
      -1,    96,    -1,    -1,    -1,   100,     8,    -1,   103,    -1,
     105,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,     3,     4,    -1,    -1,     7,    -1,
       9,    10,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    -1,    86,    -1,    88,    -1,    90,    -1,
      92,    -1,     1,    -1,    96,    -1,    -1,    -1,   100,     8,
      -1,   103,    -1,   105,    -1,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    33,    94,    95,    -1,    97,    98,
      -1,    -1,   101,    -1,    -1,   104,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    -1,    86,    -1,    88,
      -1,    90,    -1,    92,    -1,     1,    -1,    96,    -1,    -1,
      -1,   100,     8,    -1,   103,    -1,   105,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
       3,     4,    -1,    -1,     7,    -1,     9,    10,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    -1,
      86,    -1,    88,    -1,    90,    -1,    92,    -1,     1,    -1,
      96,    -1,    -1,    -1,   100,     8,    -1,   103,    -1,   105,
      -1,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      33,    94,    95,    -1,    97,    98,    -1,    -1,   101,    -1,
      -1,   104,    -1,    -1,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    -1,    86,    -1,    88,    -1,    90,    -1,    92,
      -1,     1,    -1,    96,    -1,    -1,    -1,   100,     8,    -1,
     103,    -1,   105,    -1,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,     3,     4,    -1,    -1,
       7,    -1,     9,    10,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    -1,    86,    -1,    88,    -1,
      90,    -1,    92,    -1,     1,    -1,    96,    -1,    -1,    -1,
     100,     8,    -1,   103,    -1,   105,    -1,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    92,    33,    94,    95,    -1,
      97,    98,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    -1,    86,
      -1,    88,    -1,    90,    -1,    92,    -1,     1,    -1,    96,
      -1,    -1,    -1,   100,     8,    -1,   103,    -1,   105,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
       3,     4,    -1,    -1,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    -1,    86,    -1,    88,    -1,    90,    -1,    92,    -1,
       1,    -1,    96,    -1,    -1,    -1,   100,     8,    -1,   103,
      -1,   105,    -1,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    22,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      -1,    94,    33,    -1,    97,    98,    -1,    -1,   101,    -1,
      -1,   104,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    -1,    86,    -1,    88,    -1,    90,
      -1,    92,    -1,     1,    -1,    96,    -1,    -1,    -1,   100,
       8,    -1,   103,    -1,   105,    -1,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    22,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    -1,    -1,    33,     3,     4,    -1,    -1,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    -1,    86,    -1,
      88,    -1,    90,    -1,    92,    -1,    -1,     3,     4,    -1,
      -1,     7,   100,     9,    10,    -1,    -1,   105,    -1,    -1,
      88,    89,    90,    91,    92,    93,    94,    95,    -1,    97,
      98,    88,    89,    90,    91,    92,   104,    94,    -1,    -1,
      97,    98,     3,     4,   101,    -1,     7,   104,     9,    10,
      -1,    -1,    -1,     3,     4,    -1,    -1,     7,    -1,     9,
      10,    -1,    -1,    -1,     3,     4,    -1,    -1,     7,    -1,
       9,    10,    -1,    -1,    -1,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    89,    90,    91,    92,    -1,    94,    -1,
      -1,    97,    98,     3,     4,   101,    -1,     7,   104,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,
      91,    92,    -1,    94,    95,    -1,    97,    98,    88,    89,
      90,    91,    92,   104,    94,    95,    -1,    97,    98,    88,
      89,    90,    91,    92,   104,    94,    95,    -1,    97,    98,
      88,    89,    90,    91,    92,   104,    94,    -1,    -1,    97,
      98,     3,     4,   101,    -1,     7,   104,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    92,    -1,    94,    -1,    -1,    97,    98,     3,
       4,   101,    -1,     7,   104,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,
       7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,    -1,     7,    -1,     9,
      10,    -1,    -1,    -1,     3,     4,    -1,    -1,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    88,    89,    90,    91,
      92,    -1,    94,    95,    -1,    97,    98,     3,     4,    -1,
      -1,     7,   104,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,
      94,    -1,    -1,    97,    98,    -1,    -1,   101,    -1,    -1,
     104,    88,    89,    90,    91,    92,    -1,    94,    -1,    -1,
      97,    98,    -1,    -1,   101,    -1,    -1,   104,    88,    89,
      90,    91,    92,    -1,    94,    95,    -1,    97,    98,    88,
      89,    90,    91,    92,   104,    94,    -1,    -1,    97,    98,
       3,     4,   101,    -1,     7,   104,     9,    10,    -1,    -1,
      -1,    -1,    88,    89,    90,    91,    92,    -1,    94,    -1,
      -1,    97,    98,     3,     4,   101,    -1,     7,   104,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,    -1,     7,    -1,     9,    10,    -1,    -1,
      -1,     3,     4,    -1,    -1,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,    -1,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      93,    94,     3,     4,    97,    98,     7,    -1,     9,    10,
      -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    92,    -1,    94,    -1,    -1,    97,    98,    -1,
      -1,   101,    -1,    -1,   104,    88,    89,    90,    91,    92,
      -1,    94,    95,    -1,    97,    98,    88,    89,    90,    91,
      92,   104,    94,    -1,    -1,    97,    98,    -1,    -1,   101,
      -1,    -1,   104,    88,    89,    90,    91,    92,    -1,    94,
      95,    -1,    97,    98,     3,     4,    -1,    -1,     7,   104,
       9,    10,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,
      91,    92,    -1,    94,    -1,    -1,    97,    98,     3,     4,
     101,    -1,     7,   104,     9,    10,    -1,    -1,    -1,     3,
       4,    -1,    -1,     7,    -1,     9,    10,    -1,    -1,    -1,
       3,     4,    -1,    -1,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,
      -1,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    -1,    94,    -1,    96,    97,    98,
       3,     4,    -1,    -1,     7,   104,     9,    10,    -1,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    92,    93,    94,
      -1,    -1,    97,    98,    88,    89,    90,    91,    92,   104,
      94,    95,    -1,    97,    98,    88,    89,    90,    91,    92,
     104,    94,    -1,    -1,    97,    98,    -1,    -1,   101,    -1,
      -1,   104,    88,    89,    90,    91,    92,    -1,    94,    -1,
      -1,    97,    98,     3,     4,   101,    -1,     7,   104,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      -1,    94,    -1,    -1,    97,    98,     3,     4,   101,    -1,
       7,   104,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,    -1,     7,    -1,     9,
      10,    -1,    -1,    -1,     3,     4,    -1,    -1,     7,    -1,
       9,    10,    -1,    -1,    -1,     3,     4,    -1,    -1,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    92,    -1,    94,    -1,    -1,    97,    98,    -1,
      -1,   101,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    92,    -1,    94,    -1,    -1,
      97,    98,    -1,    -1,   101,    -1,    -1,   104,    88,    89,
      90,    91,    92,    93,    94,    -1,    -1,    97,    98,    88,
      89,    90,    91,    92,   104,    94,    -1,    -1,    97,    98,
      88,    89,    90,    91,    92,   104,    94,    -1,    -1,    -1,
      98,     8,    -1,    -1,    -1,    -1,   104,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    -1,    72,    73,     8,    -1,    -1,
      77,    78,    -1,    14,    15,    16,    17,    -1,    -1,    86,
      -1,    22,    -1,    90,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,   101,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,
      -1,    72,    73,     8,    -1,    -1,    77,    78,    -1,    14,
      15,    16,    17,    -1,    -1,    86,    -1,    22,    -1,    90,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
     101,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    70,    -1,    72,    73,     8,
      -1,    -1,    77,    78,    -1,    14,    15,    16,    17,    -1,
      -1,    86,    -1,    22,    -1,    90,    -1,    92,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,   101,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      69,    70,    -1,    72,    73,     8,    -1,    -1,    77,    78,
      -1,    14,    15,    16,    17,    -1,    -1,    86,    -1,    22,
      -1,    90,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,   101,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    68,    69,    70,    -1,    72,
      73,     8,    -1,    -1,    77,    78,    -1,    14,    15,    16,
      17,    -1,    -1,    86,    -1,    22,    -1,    90,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   101,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    -1,    72,    73,     8,    -1,    -1,
      77,    78,    -1,    14,    15,    16,    17,    -1,    -1,    86,
      -1,    22,    -1,    90,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,   101,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,
      -1,    72,    73,     8,    -1,    -1,    77,    78,    -1,    14,
      15,    16,    17,    -1,    -1,    86,    -1,    22,    -1,    90,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    70,    -1,    72,    73,     8,
      -1,    -1,    77,    78,    -1,    14,    15,    16,    17,    -1,
      -1,    86,    -1,    22,    -1,    90,    -1,    92,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      69,    70,    -1,    72,    73,     8,    -1,    -1,    77,    78,
      -1,    14,    15,    16,    17,    -1,    -1,    86,    -1,    22,
      -1,    90,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    68,    69,    70,    -1,    72,
      73,     8,    -1,    -1,    77,    78,    -1,    14,    15,    16,
      17,    -1,    -1,    86,    -1,    22,    -1,    90,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    -1,    72,    73,     8,    -1,    -1,
      77,    78,    -1,    14,    15,    16,    17,    -1,    -1,    86,
      -1,    22,    -1,    90,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,
      -1,    72,    73,     8,    -1,    -1,    77,    78,    -1,    14,
      15,    16,    17,    -1,    -1,    86,    -1,    22,    -1,    90,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    70,    -1,    72,    73,     8,
      -1,    -1,    77,    78,    -1,    14,    15,    16,    17,    -1,
      -1,    86,    -1,    22,    -1,    90,    -1,    92,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      69,    70,    -1,    72,    73,     8,    -1,    -1,    77,    78,
      -1,    14,    15,    16,    17,    -1,    -1,    86,    -1,    22,
      -1,    90,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    68,    69,    70,    -1,    72,
      73,     8,    -1,    -1,    77,    78,    -1,    14,    15,    16,
      17,    -1,    -1,    86,    -1,    22,    -1,    90,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    -1,    72,    73,    -1,    -1,    -1,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    90,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,   105
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   107,     0,     1,     8,    14,    15,    16,    17,    22,
      33,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    84,    86,    88,    90,
      92,    96,   100,   105,   108,   112,   113,   114,   115,   116,
     117,   118,   120,   121,   123,   124,   125,   126,   127,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,    96,    16,    17,
      55,    56,    57,    58,    86,   118,   134,   100,   116,   118,
     125,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   116,   100,   116,   100,   116,   100,   116,    67,   102,
     117,    67,    96,   116,   100,   118,    67,   100,   100,   100,
     102,   100,   100,   100,   100,   100,    16,   118,   126,   127,
     127,   118,   117,   117,   118,    96,    11,   100,    87,    95,
     133,     3,     4,     7,     9,    10,    88,    89,    90,    91,
      92,    94,    97,    98,   104,   118,   118,   117,    12,    95,
      96,   133,   100,   116,    95,   116,   118,   100,   100,   100,
     100,   100,   100,   118,   102,   100,   118,   128,   118,   118,
     118,   118,   118,   118,   118,   101,   117,   118,   101,   117,
     118,   101,   117,    96,   109,    96,    16,    17,    55,    56,
      57,    58,   101,   116,   134,   100,    55,    56,   101,   125,
     153,   154,   118,   109,   119,     1,    81,    83,   111,   112,
     114,   126,   152,   118,   118,    93,   101,   105,   116,   101,
     117,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   116,    87,   101,   122,    95,   102,   116,
     118,    92,   116,   133,   118,   118,   117,   118,   117,   118,
     101,   109,   118,   101,    95,   101,    95,    95,    95,   101,
      95,   101,    95,    95,   101,   101,   101,   101,   101,   101,
       1,    81,    96,   103,   110,   112,   114,   126,   152,   101,
     101,   101,   101,   101,   101,    95,   101,   101,   153,   125,
     125,   102,    95,   101,    95,   103,   118,   100,    96,   101,
     101,   101,    93,    95,   118,   118,   109,    95,   101,   118,
     116,   118,   128,   101,   101,   103,    95,   128,   118,   118,
     118,   118,   118,   118,    96,    96,    96,    16,    17,    55,
      56,    57,    58,   134,   101,   109,   154,   102,    47,    50,
      51,    53,    54,   118,   101,   101,   117,   118,    74,   102,
     102,   118,   122,   122,   103,   118,    93,    92,    95,   117,
      95,   101,    95,   101,    95,    95,   101,    95,   101,   101,
     101,   101,   101,   101,   101,   101,   102,   103,   109,   101,
     101,   101,   101,   101,   101,   101,    96,   109,   109,    93,
      95,    92,   117,   128,   101,    69,   100,   129,   130,   132,
     118,   118,   118,   118,   109,   103,   111,   103,   103,   118,
     118,    93,    95,   130,   131,   100,   101,   101,   101,   101,
     101,   103,   101,   101,    93,   132,    95,   101,   117,   102,
     131,   101,   109,   103
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   106,   107,   107,   108,   108,   108,   108,   108,   108,
     109,   109,   110,   110,   110,   110,   110,   110,   110,   111,
     111,   111,   111,   111,   111,   112,   112,   112,   112,   112,
     112,   112,   112,   113,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   115,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   117,   117,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   119,   118,   120,   121,
     122,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   124,   124,   125,   125,   126,
     126,   126,   126,   126,   126,   126,   126,   127,   128,   128,
     129,   130,   130,   131,   131,   132,   132,   133,   134,   134,
     134,   135,   136,   136,   137,   138,   139,   139,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   141,   142,   142,   142,   142,   143,
     144,   144,   145,   146,   146,   147,   147,   147,   147,   147,
     148,   149,   150,   150,   150,   150,   151,   151,   152,   152,
     153,   153,   154,   154,   154
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
       3,     1,     2,     2,     1
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
#line 205 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("top_lines -> ");
                (yyval.tree) = astnode_make0(RULE_top_lines(1));
                *retv = (yyval.tree);
                exitrule("top_lines -> ");
            }
#line 2271 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 213 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("top_lines -> top_lines top_pprompt");
                (yyval.tree) = astnode_append((yyvsp[-1].tree), (yyvsp[0].tree));
                *retv = (yyval.tree);
                exitrule_ex("top_lines -> top_lines top_pprompt",(yyval.tree));
            }
#line 2282 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 223 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("top_pprompt -> flowctrl");
                (yyval.tree) = astnode_make1(RULE_top_pprompt(1), (yyvsp[0].tree));
                exitrule("top_pprompt -> flowctrl");
            }
#line 2292 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 230 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("top_pprompt -> command ';'");
                (yyval.tree) = astnode_make1(RULE_top_pprompt(2), (yyvsp[-1].tree));
                exitrule_ex("top_pprompt -> command ';'",(yyval.tree));
            }
#line 2302 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 237 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("top_pprompt -> declare_ip_variable ';'");
                (yyval.tree) = astnode_make1(RULE_top_pprompt(3), (yyvsp[-1].tree));
                exitrule("top_pprompt -> declare_ip_variable ';'");
            }
#line 2312 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 244 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("top_pprompt -> SYS_BREAK");
                (yyval.tree) = astnode_make0(RULE_top_pprompt(4));
                exitrule("top_pprompt -> SYS_BREAK");
            }
#line 2322 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 251 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("top_pprompt -> ';'");
                (yyval.tree) = astnode_make0(RULE_top_pprompt(5));
                exitrule_ex("top_pprompt -> ';'", (yyval.tree));
            }
#line 2332 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 258 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("top_pprompt -> error ';'");
                YYABORT;
                exitrule("top_pprompt -> error ';'");
            }
#line 2342 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 266 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("lines -> ");
                (yyval.tree) = astnode_make0(RULE_lines(1));
                exitrule("lines -> ");
            }
#line 2352 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 273 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("lines -> lines pprompt");
                (yyval.tree) = astnode_append((yyvsp[-1].tree), (yyvsp[0].tree));
                exitrule_ex("lines -> lines pprompt",(yyval.tree));
            }
#line 2362 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 282 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("pprompt -> flowctrl");
                (yyval.tree) = astnode_make1(RULE_pprompt(1), (yyvsp[0].tree));
                exitrule("pprompt -> flowctrl");
            }
#line 2372 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 289 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("pprompt -> command ';'");
                (yyval.tree) = astnode_make1(RULE_pprompt(2), (yyvsp[-1].tree));
                exitrule_ex("pprompt -> command ';'",(yyval.tree));
            }
#line 2382 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 296 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("pprompt -> declare_ip_variable ';'");
                (yyval.tree) = astnode_make1(RULE_pprompt(3), (yyvsp[-1].tree));
                exitrule("pprompt -> declare_ip_variable ';'");
            }
#line 2392 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 303 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("pprompt -> returncmd");
                (yyval.tree) = astnode_make1(RULE_pprompt(4), (yyvsp[0].tree));
                exitrule("pprompt -> returncmd");
            }
#line 2402 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 310 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("pprompt -> SYS_BREAK");
                (yyval.tree) = astnode_make0(RULE_pprompt(5));
                exitrule("pprompt -> SYS_BREAK");
            }
#line 2412 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 317 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("pprompt -> ';'");
                (yyval.tree) = astnode_make0(RULE_pprompt(6));
                exitrule_ex("pprompt -> ';'", (yyval.tree));
            }
#line 2422 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 324 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("pprompt -> error ';'");
                YYABORT;
                exitrule("pprompt -> error ';'");
            }
#line 2432 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 334 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("npprompt -> flowctrl");
                (yyval.tree) = astnode_make1(RULE_npprompt(1), (yyvsp[0].tree));
                exitrule("npprompt -> flowctrl");
            }
#line 2442 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 341 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("npprompt -> command");
                (yyval.tree) = astnode_make1(RULE_npprompt(2), (yyvsp[0].tree));
                exitrule_ex("npprompt -> command ';'",(yyval.tree));
            }
#line 2452 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 348 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("npprompt -> declare_ip_variable");
                (yyval.tree) = astnode_make1(RULE_npprompt(3), (yyvsp[0].tree));
                exitrule("npprompt -> declare_ip_variable ';'");
            }
#line 2462 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 355 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("npprompt -> returncmd");
                (yyval.tree) = astnode_make1(RULE_npprompt(4), (yyvsp[0].tree));
                exitrule("npprompt -> returncmd");
            }
#line 2472 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 362 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("npprompt -> SYS_BREAK");
                (yyval.tree) = astnode_make0(RULE_npprompt(5));
                exitrule("npprompt -> SYS_BREAK");
            }
#line 2482 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 369 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("npprompt -> error ';'");
                YYABORT;
                exitrule("npprompt -> error ';'");
            }
#line 2492 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 378 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("flowctrl -> ifcmd");
                (yyval.tree) = astnode_make1(RULE_flowctrl(1), (yyvsp[0].tree));
                exitrule("flowctrl -> ifcmd");
            }
#line 2502 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 385 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("flowctrl -> whilecmd");
                (yyval.tree) = astnode_make1(RULE_flowctrl(2), (yyvsp[0].tree));
                exitrule("flowctrl -> whilecmd");
            }
#line 2512 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 392 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("flowctrl -> example_dummy");
                (yyval.tree) = astnode_make1(RULE_flowctrl(3), (yyvsp[0].tree));
                exitrule("flowctrl -> example_dummy");
            }
#line 2522 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 399 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("flowctrl -> forcmd");
                (yyval.tree) = astnode_make1(RULE_flowctrl(4), (yyvsp[0].tree));
                exitrule("flowctrl -> forcmd");
            }
#line 2532 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 406 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("flowctrl -> proccmd");
                (yyval.tree) = astnode_make1(RULE_flowctrl(5), (yyvsp[0].tree));
                exitrule_ex("flowctrl -> proccmd",(yyval.tree));
            }
#line 2542 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 413 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("flowctrl -> filecmd");
                (yyval.tree) = astnode_make1(RULE_flowctrl(6), (yyvsp[0].tree));
                exitrule_ex("flowctrl -> filecmd",(yyval.tree));
            }
#line 2552 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 420 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("flowctrl -> helpcmd");
                (yyval.tree) = astnode_make1(RULE_flowctrl(7), (yyvsp[0].tree));
                exitrule_ex("flowctrl -> helpcmd",(yyval.tree));
            }
#line 2562 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 427 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("flowctrl -> examplecmd");
                (yyval.tree) = astnode_make1(RULE_flowctrl(8), (yyvsp[0].tree));
                exitrule("flowctrl -> examplecmd");
            }
#line 2572 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 435 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("example_dummy -> EXAMPLE_CMD '{' lines '}'");
                (yyval.tree) = astnode_make1(RULE_example_dummy(1), (yyvsp[-1].tree));
                exitrule("example_dummy -> EXAMPLE_CMD '{' lines '}'");
            }
#line 2582 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 443 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("command -> assign");
                (yyval.tree) = astnode_make1(RULE_command(1), (yyvsp[0].tree));
                exitrule_ex("command -> assign",(yyval.tree));
            }
#line 2592 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 450 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("command -> exportcmd");
                (yyval.tree) = astnode_make1(RULE_command(2), (yyvsp[0].tree));
                exitrule_ex("command -> exportcmd",(yyval.tree));
            }
#line 2602 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 457 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("command -> killcmd");
                (yyval.tree) = astnode_make1(RULE_command(3), (yyvsp[0].tree));
                exitrule_ex("command -> killcmd",(yyval.tree));
            }
#line 2612 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 464 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("command -> listcmd");
                (yyval.tree) = astnode_make1(RULE_command(4), (yyvsp[0].tree));
                exitrule_ex("command -> listcmd",(yyval.tree));
            }
#line 2622 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 471 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("command -> parametercmd");
                (yyval.tree) = astnode_make1(RULE_command(5), (yyvsp[0].tree));
                exitrule_ex("command -> parametercmd",(yyval.tree));
            }
#line 2632 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 478 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("command -> ringcmd");
                (yyval.tree) = astnode_make1(RULE_command(6), (yyvsp[0].tree));
                exitrule_ex("command -> ringcmd",(yyval.tree));
            }
#line 2642 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 485 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("command -> scriptcmd");
                (yyval.tree) = astnode_make1(RULE_command(7), (yyvsp[0].tree));
                exitrule_ex("command -> scriptcmd",(yyval.tree));
            }
#line 2652 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 492 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("command -> setringcmd");
                (yyval.tree) = astnode_make1(RULE_command(8), (yyvsp[0].tree));
                exitrule_ex("command -> setringcmd",(yyval.tree));
            }
#line 2662 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 499 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("command -> typecmd");
                (yyval.tree) = astnode_make1(RULE_command(9), (yyvsp[0].tree));
                exitrule_ex("command -> typecmd",(yyval.tree));
            }
#line 2672 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 507 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("assign -> left_value exprlist");
                (yyval.tree) = astnode_make2(RULE_assign(1), (yyvsp[-1].tree), (yyvsp[0].tree));
                exitrule_ex("assign -> left_value exprlist",(yyval.tree));
            }
#line 2682 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 516 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> RINGVAR");
                (yyval.tree) = astnode_make1(RULE_elemexpr(1), aststring_make((yyvsp[0].name)));
                exitrule("elemexpr -> RINGVAR");
            }
#line 2692 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 523 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> extendedid");
                (yyval.tree) = astnode_make1(RULE_elemexpr(2), (yyvsp[0].tree));
                exitrule_ex("elemexpr -> extendedid",(yyval.tree));
            }
#line 2702 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 530 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> elemexpr COLONCOLON elemexpr");
                (yyval.tree) = astnode_make2(RULE_elemexpr(3), (yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule("elemexpr -> elemexpr COLONCOLON elemexpr");
            }
#line 2712 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 537 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> expr '.' elemexpr");
                (yyval.tree) = astnode_make2(RULE_elemexpr(4), (yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule("elemexpr -> expr '.' elemexpr");
            }
#line 2722 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 544 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> elemexpr '('  ')'");
                (yyval.tree) = astnode_make1(RULE_elemexpr(5), (yyvsp[-2].tree));
                exitrule("elemexpr -> elemexpr '('  ')'");
            }
#line 2732 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 551 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> elemexpr '(' exprlist ')'");
                (yyval.tree) = astnode_make2(RULE_elemexpr(6), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule_ex("elemexpr -> elemexpr '(' exprlist ')'", (yyval.tree));
            }
#line 2742 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 558 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> '[' exprlist ']'");
                (yyval.tree) = astnode_make1(RULE_elemexpr(7), (yyvsp[-1].tree));
                exitrule("elemexpr -> '[' exprlist ']'");
            }
#line 2752 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 565 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> INT_CONST");
                (yyval.tree) = astnode_make1(RULE_elemexpr(8), aststring_make((yyvsp[0].name)));
                exitrule_ex("elemexpr -> INT_CONST", (yyval.tree));
            }
#line 2762 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 572 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> SYSVAR");
                (yyval.tree) = astnode_make1(RULE_elemexpr(9), astint_make((yyvsp[0].i)));
                exitrule("elemexpr -> SYSVAR");
            }
#line 2772 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 579 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> stringexpr");
                (yyval.tree) = astnode_make1(RULE_elemexpr(10), (yyvsp[0].tree));
                exitrule("elemexpr -> stringexpr");
            }
#line 2782 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 586 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> PROC_CMD '(' expr ')'");
                (yyval.tree) = astnode_make2(RULE_elemexpr(11), astint_make((yyvsp[-3].i)), (yyvsp[-1].tree));
                exitrule("elemexpr -> PROC_CMD '(' expr ')'");
            }
#line 2792 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 593 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> ROOT_DECL '(' expr ')'");
                (yyval.tree) = astnode_make2(RULE_elemexpr(12), astint_make((yyvsp[-3].i)), (yyvsp[-1].tree));
                exitrule("elemexpr -> ROOT_DECL '(' expr ')'");
            }
#line 2802 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 600 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> ROOT_DECL_LIST '(' exprlist ')'");
                (yyval.tree) = astnode_make2(RULE_elemexpr(13), astint_make((yyvsp[-3].i)), (yyvsp[-1].tree));
                exitrule("elemexpr -> ROOT_DECL_LIST '(' exprlist ')'");
            }
#line 2812 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 607 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> ROOT_DECL_LIST '(' ')'");
                (yyval.tree) = astnode_make1(RULE_elemexpr(14), astint_make((yyvsp[-2].i)));
                exitrule("elemexpr -> ROOT_DECL_LIST '(' ')'");
            }
#line 2822 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 614 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> RING_DECL '(' expr ')'");
                (yyval.tree) = astnode_make2(RULE_elemexpr(15), astint_make((yyvsp[-3].i)), (yyvsp[-1].tree));
                exitrule("elemexpr -> RING_DECL '(' expr ')'");
            }
#line 2832 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 621 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> RING_DECL_LIST '(' exprlist ')'");
                (yyval.tree) = astnode_make2(RULE_elemexpr(16), astint_make((yyvsp[-3].i)), (yyvsp[-1].tree));
                exitrule("elemexpr -> RING_DECL_LIST '(' exprlist ')'");
            }
#line 2842 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 628 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> RING_DECL_LIST '(' ')'");
                (yyval.tree) = astnode_make1(RULE_elemexpr(17), astint_make((yyvsp[-2].i)));
                exitrule("elemexpr -> RING_DECL_LIST '(' ')'");
            }
#line 2852 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 635 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> CMD_1 '(' expr ')'");
                (yyval.tree) = astnode_make2(RULE_elemexpr(18), astint_make((yyvsp[-3].i)), (yyvsp[-1].tree));
                exitrule("elemexpr -> CMD_1 '(' expr ')'");
            }
#line 2862 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 642 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> CMD_12 '(' expr ')'");
                (yyval.tree) = astnode_make2(RULE_elemexpr(19), astint_make((yyvsp[-3].i)), (yyvsp[-1].tree));
                exitrule("elemexpr -> CMD_12 '(' expr ')'");
            }
#line 2872 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 649 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> CMD_13 '(' expr ')'");
                (yyval.tree) = astnode_make2(RULE_elemexpr(20), astint_make((yyvsp[-3].i)), (yyvsp[-1].tree));
                exitrule("elemexpr -> CMD_13 '(' expr ')'");
            }
#line 2882 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 656 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> CMD_123 '(' expr ')'");
                (yyval.tree) = astnode_make2(RULE_elemexpr(21), astint_make((yyvsp[-3].i)), (yyvsp[-1].tree));
                exitrule("elemexpr -> CMD_123 '(' expr ')'");
            }
#line 2892 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 663 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> CMD_2 '(' expr ',' expr ')'");
                (yyval.tree) = astnode_make3(RULE_elemexpr(22), astint_make((yyvsp[-5].i)), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("elemexpr -> CMD_2 '(' expr ',' expr ')'");
            }
#line 2902 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 670 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> CMD_12 '(' expr ',' expr ')'");
                (yyval.tree) = astnode_make3(RULE_elemexpr(23), astint_make((yyvsp[-5].i)), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("elemexpr -> CMD_12 '(' expr ',' expr ')'");
            }
#line 2912 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 677 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> CMD_23 '(' expr ',' expr ')'");
                (yyval.tree) = astnode_make3(RULE_elemexpr(24), astint_make((yyvsp[-5].i)), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("elemexpr -> CMD_23 '(' expr ',' expr ')'");
            }
#line 2922 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 684 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> CMD_123 '(' expr ',' expr ')'");
                (yyval.tree) = astnode_make3(RULE_elemexpr(25), astint_make((yyvsp[-5].i)), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("elemexpr -> CMD_123 '(' expr ',' expr ')'");
            }
#line 2932 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 691 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> CMD_3 '(' expr ',' expr ',' expr ')'");
                (yyval.tree) = astnode_make4(RULE_elemexpr(26), astint_make((yyvsp[-7].i)), (yyvsp[-5].tree), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("elemexpr -> CMD_3 '(' expr ',' expr ',' expr ')'");
            }
#line 2942 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 698 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> CMD_13 '(' expr ',' expr ',' expr ')'");
                (yyval.tree) = astnode_make4(RULE_elemexpr(27), astint_make((yyvsp[-7].i)), (yyvsp[-5].tree), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("elemexpr -> CMD_13 '(' expr ',' expr ',' expr ')'");
            }
#line 2952 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 705 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> CMD_23 '(' expr ',' expr ',' expr ')'");
                (yyval.tree) = astnode_make4(RULE_elemexpr(28), astint_make((yyvsp[-7].i)), (yyvsp[-5].tree), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("elemexpr -> CMD_23 '(' expr ',' expr ',' expr ')'");
            }
#line 2962 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 712 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> CMD_123 '(' expr ',' expr ',' expr ')'");
                (yyval.tree) = astnode_make4(RULE_elemexpr(29), astint_make((yyvsp[-7].i)), (yyvsp[-5].tree), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("elemexpr -> CMD_123 '(' expr ',' expr ',' expr ')'");
            }
#line 2972 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 719 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> CMD_M '(' ')'");
                (yyval.tree) = astnode_make1(RULE_elemexpr(30), astint_make((yyvsp[-2].i)));
                exitrule("elemexpr -> CMD_M '(' ')'");
            }
#line 2982 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 726 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> CMD_M '(' exprlist ')'");
                (yyval.tree) = astnode_make2(RULE_elemexpr(31), astint_make((yyvsp[-3].i)), (yyvsp[-1].tree));
                exitrule("elemexpr -> CMD_M '(' exprlist ')'");
            }
#line 2992 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 733 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> mat_cmd '(' expr ',' expr ',' expr ')'");
                (yyval.tree) = astnode_make4(RULE_elemexpr(32), (yyvsp[-7].tree), (yyvsp[-5].tree), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("elemexpr -> mat_cmd '(' expr ',' expr ',' expr ')'");
            }
#line 3002 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 740 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> mat_cmd '(' expr ')'");
                (yyval.tree) = astnode_make2(RULE_elemexpr(33), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("elemexpr -> mat_cmd '(' expr ')'");
            }
#line 3012 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 747 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> RING_CMD '(' rlist ',' rlist ',' ordering ')'");
                (yyval.tree) = astnode_make4(RULE_elemexpr(34), astint_make((yyvsp[-7].i)), (yyvsp[-5].tree), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("elemexpr -> RING_CMD '(' rlist ',' rlist ',' ordering ')'");
            }
#line 3022 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 754 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> RING_CMD '(' expr ')'");
                (yyval.tree) = astnode_make2(RULE_elemexpr(35), astint_make((yyvsp[-3].i)), (yyvsp[-1].tree));
                exitrule("elemexpr -> RING_CMD '(' expr ')'");
            }
#line 3032 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 761 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> extendedid  ARROW '{' lines '}'");
                (yyval.tree) = astnode_make2(RULE_elemexpr(36), (yyvsp[-4].tree), (yyvsp[-1].tree));
                exitrule("elemexpr -> extendedid  ARROW '{' lines '}'");
            }
#line 3042 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 768 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("elemexpr -> '(' exprlist ')'");
                (yyval.tree) = astnode_make1(RULE_elemexpr(37), (yyvsp[-1].tree));
                exitrule_ex("elemexpr -> '(' exprlist ')'",(yyval.tree));
            }
#line 3052 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 777 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("exprlist -> exprlist ',' expr");
                (yyval.tree) = astnode_append((yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule_ex("exprlist -> exprlist ',' expr",(yyval.tree));
            }
#line 3062 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 784 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("exprlist -> expr");
                (yyval.tree) = astnode_make1(RULE_exprlist(1), (yyvsp[0].tree));
                exitrule_ex("exprlist -> expr",(yyval.tree));
            }
#line 3072 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 792 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> expr_arithmetic");
                (yyval.tree) = astnode_make1(RULE_expr(1), (yyvsp[0].tree));
                exitrule_ex("expr -> expr_arithmetic",(yyval.tree));
            }
#line 3082 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 799 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> elemexpr");
                (yyval.tree) = astnode_make1(RULE_expr(2), (yyvsp[0].tree));
                exitrule_ex("expr -> elemexpr",(yyval.tree));
            }
#line 3092 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 806 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> expr '[' expr ',' expr ']'");
                (yyval.tree) = astnode_make3(RULE_expr(3), (yyvsp[-5].tree), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("expr -> expr '[' expr ',' expr ']'");
            }
#line 3102 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 813 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> expr '[' expr ']'");
                (yyval.tree) = astnode_make2(RULE_expr(4), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("expr -> expr '[' expr ']'");
            }
#line 3112 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 820 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> APPLY '('  expr ',' CMD_1 ')'");
                (yyval.tree) = astnode_make2(RULE_expr(5), (yyvsp[-3].tree), astint_make((yyvsp[-1].i)));
                exitrule("expr -> APPLY '('  expr ',' CMD_1 ')'");
            }
#line 3122 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 827 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> APPLY '('  expr ',' CMD_12 ')'");
                (yyval.tree) = astnode_make2(RULE_expr(6), (yyvsp[-3].tree), astint_make((yyvsp[-1].i)));
                exitrule("expr -> APPLY '('  expr ',' CMD_12 ')'");
            }
#line 3132 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 834 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> APPLY '('  expr ',' CMD_13 ')'");
                (yyval.tree) = astnode_make2(RULE_expr(7), (yyvsp[-3].tree), astint_make((yyvsp[-1].i)));
                exitrule("expr -> APPLY '('  expr ',' CMD_13 ')'");
            }
#line 3142 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 841 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> APPLY '('  expr ',' CMD_123 ')'");
                (yyval.tree) = astnode_make2(RULE_expr(8), (yyvsp[-3].tree), astint_make((yyvsp[-1].i)));
                exitrule("expr -> APPLY '('  expr ',' CMD_123 ')'");
            }
#line 3152 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 848 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> APPLY '('  expr ',' CMD_M ')'");
                (yyval.tree) = astnode_make2(RULE_expr(9), (yyvsp[-3].tree), astint_make((yyvsp[-1].i)));
                exitrule("expr -> APPLY '('  expr ',' CMD_M ')'");
            }
#line 3162 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 855 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> APPLY '('  expr ',' expr ')'");
                (yyval.tree) = astnode_make2(RULE_expr(10), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("expr -> APPLY '('  expr ',' expr ')'");
            }
#line 3172 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 862 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> quote_start expr quote_end");
                (yyval.tree) = astnode_make1(RULE_expr(11), (yyvsp[-1].tree));
                exitrule("expr -> quote_start expr quote_end");
            }
#line 3182 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 869 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> quote_start expr '=' expr quote_end");
                (yyval.tree) = astnode_make2(RULE_expr(12), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("expr -> quote_start expr '=' expr quote_end");
            }
#line 3192 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 876 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> assume_start expr ',' expr quote_end");
                (yyval.tree) = astnode_make2(RULE_expr(13), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("expr -> assume_start expr ',' expr quote_end");
            }
#line 3202 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 883 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> EVAL  '('");
                exitrule("expr -> EVAL  '('");
            }
#line 3211 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 889 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr -> EVAL  '(' expr ')'");
                (yyval.tree) = astnode_make1(RULE_expr(14), (yyvsp[-1].tree));
                exitrule("expr -> EVAL  '(' expr ')'");
            }
#line 3221 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 897 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("quote_start -> QUOTE  '('");
                (yyval.tree) = astnode_make0(RULE_quote_start(1));
                exitrule("quote_start -> QUOTE  '('");
            }
#line 3231 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 905 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("assume_start -> ASSUME_CMD '('");
                (yyval.tree) = astnode_make0(RULE_assume_start(2));
                exitrule("assume_start ASSUME_CMD '('");
            }
#line 3241 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 913 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("quote_end -> ')'");
                (yyval.tree) = astnode_make0(RULE_quote_end(1));
                exitrule("quote_end -> ')'");
            }
#line 3251 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 922 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr_arithmetic -> expr PLUSPLUS");
                (yyval.tree) = astnode_make1(RULE_expr_arithmetic(1), (yyvsp[-1].tree));
                exitrule_ex("expr_arithmetic -> expr PLUSPLUS",(yyval.tree));
            }
#line 3261 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 929 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr_arithmetic -> expr MINUSMINUS");
                (yyval.tree) = astnode_make1(RULE_expr_arithmetic(2), (yyvsp[-1].tree));
                exitrule_ex("expr_arithmetic -> expr MINUSMINUS",(yyval.tree));
            }
#line 3271 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 936 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr_arithmetic -> expr '+' expr");
                (yyval.tree) = astnode_make2(RULE_expr_arithmetic(3), (yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule_ex("expr_arithmetic -> expr '+' expr",(yyval.tree));
            }
#line 3281 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 943 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr_arithmetic -> expr '-' expr");
                (yyval.tree) = astnode_make2(RULE_expr_arithmetic(4), (yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule_ex("expr_arithmetic -> expr '-' expr",(yyval.tree));
            }
#line 3291 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 950 "grammar.y" /* yacc.c:1646  */
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
#line 3312 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 968 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr_arithmetic -> expr '^' expr");
                (yyval.tree) = astnode_make2(RULE_expr_arithmetic(8), (yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule_ex("expr_arithmetic -> expr '^' expr",(yyval.tree));
            }
#line 3322 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 975 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr_arithmetic -> expr '<' expr");
                if ((yyvsp[-1].i) == GE)
                {
                    (yyval.tree) = astnode_make2(RULE_expr_arithmetic(9), (yyvsp[-2].tree), (yyvsp[0].tree));
                }
                else if ((yyvsp[-1].i) == LE)
                {
                    (yyval.tree) = astnode_make2(RULE_expr_arithmetic(10), (yyvsp[-2].tree), (yyvsp[0].tree));
                }
                else if ((yyvsp[-1].i) == '>')
                {
                    (yyval.tree) = astnode_make2(RULE_expr_arithmetic(11), (yyvsp[-2].tree), (yyvsp[0].tree));
                }
                else
                {
                    (yyval.tree) = astnode_make2(RULE_expr_arithmetic(12), (yyvsp[-2].tree), (yyvsp[0].tree));
                }
                exitrule_ex("expr_arithmetic -> expr '<' expr",(yyval.tree));
            }
#line 3347 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 997 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr_arithmetic -> expr '&' expr");
                if ((yyvsp[-1].i) == '&')
                {
                    (yyval.tree) = astnode_make2(RULE_expr_arithmetic(13), (yyvsp[-2].tree), (yyvsp[0].tree));
                }
                else
                {
                    (yyval.tree) = astnode_make2(RULE_expr_arithmetic(14), (yyvsp[-2].tree), (yyvsp[0].tree));
                }
                exitrule_ex("expr_arithmetic -> expr '&' expr",(yyval.tree));
            }
#line 3364 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1011 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr_arithmetic -> expr NOTEQUAL expr");
                (yyval.tree) = astnode_make2(RULE_expr_arithmetic(15), (yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule("expr_arithmetic -> expr NOTEQUAL expr");
            }
#line 3374 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1018 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr_arithmetic -> expr EQUAL_EQUAL expr");
                (yyval.tree) = astnode_make2(RULE_expr_arithmetic(16), (yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule("expr_arithmetic -> expr EQUAL_EQUAL expr");
            }
#line 3384 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1025 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr_arithmetic -> expr DOTDOT expr");
                (yyval.tree) = astnode_make2(RULE_expr_arithmetic(17), (yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule("expr_arithmetic -> expr DOTDOT expr");
            }
#line 3394 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1032 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr_arithmetic -> expr ':' expr");
                (yyval.tree) = astnode_make2(RULE_expr_arithmetic(18), (yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule("expr_arithmetic -> expr ':' expr");
            }
#line 3404 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1039 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr_arithmetic -> NOT expr");
                (yyval.tree) = astnode_make1(RULE_expr_arithmetic(19), (yyvsp[0].tree));
                exitrule("expr_arithmetic -> NOT expr");
            }
#line 3414 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1046 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("expr_arithmetic -> '-' expr");
                (yyval.tree) = astnode_make1(RULE_expr_arithmetic(20), (yyvsp[0].tree));
                exitrule("expr_arithmetic -> '-' expr");
            }
#line 3424 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1055 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("left_value -> declare_ip_variable cmdeq");
                (yyval.tree) = astnode_make1(RULE_left_value(1), (yyvsp[-1].tree));
                exitrule_ex("left_value -> declare_ip_variable cmdeq",(yyval.tree));
            }
#line 3434 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1062 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("left_value -> exprlist cmdeq");
                (yyval.tree) = astnode_make1(RULE_left_value(2), (yyvsp[-1].tree));
                exitrule("left_value -> exprlist cmdeq");
            }
#line 3444 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1072 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("extendedid -> UNKNOWN_IDENT");
                (yyval.tree) = astnode_make1(RULE_extendedid(1), aststring_make((yyvsp[0].name)));
                exitrule_ex("extendedid -> UNKNOWN_IDENT",(yyval.tree));
            }
#line 3454 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1079 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("extendedid -> '`' expr '`'");
                (yyval.tree) = astnode_make1(RULE_extendedid(2), (yyvsp[-1].tree));
                exitrule_ex("extendedid -> '`' expr '`'",(yyval.tree));
            }
#line 3464 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1089 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("declare_ip_variable -> ROOT_DECL elemexpr");
                (yyval.tree) = astnode_make2(RULE_declare_ip_variable(1), astint_make((yyvsp[-1].i)), (yyvsp[0].tree));
                exitrule_ex("declare_ip_variable -> ROOT_DECL elemexpr",(yyval.tree));
            }
#line 3474 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1096 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("declare_ip_variable -> ROOT_DECL_LIST elemexpr");
                (yyval.tree) = astnode_make2(RULE_declare_ip_variable(2), astint_make((yyvsp[-1].i)), (yyvsp[0].tree));
                exitrule("declare_ip_variable -> ROOT_DECL_LIST elemexpr");
            }
#line 3484 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1103 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("declare_ip_variable -> RING_DECL elemexpr");
                (yyval.tree) = astnode_make2(RULE_declare_ip_variable(3), astint_make((yyvsp[-1].i)), (yyvsp[0].tree));
                exitrule("declare_ip_variable -> RING_DECL elemexpr");
            }
#line 3494 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1110 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("declare_ip_variable -> RING_DECL_LIST elemexpr");
                (yyval.tree) = astnode_make2(RULE_declare_ip_variable(4), astint_make((yyvsp[-1].i)), (yyvsp[0].tree));
                exitrule("declare_ip_variable -> RING_DECL_LIST elemexpr");
            }
#line 3504 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1117 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("declare_ip_variable -> mat_cmd elemexpr '[' expr ']' '[' expr ']'");
                (yyval.tree) = astnode_make4(RULE_declare_ip_variable(5), (yyvsp[-7].tree), (yyvsp[-6].tree), (yyvsp[-4].tree), (yyvsp[-1].tree));
                exitrule("declare_ip_variable -> mat_cmd elemexpr '[' expr ']' '[' expr ']'");
            }
#line 3514 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1124 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("declare_ip_variable -> mat_cmd elemexpr");
                (yyval.tree) = astnode_make2(RULE_declare_ip_variable(6), (yyvsp[-1].tree), (yyvsp[0].tree));
                exitrule("declare_ip_variable -> mat_cmd elemexpr");
            }
#line 3524 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1131 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("declare_ip_variable -> declare_ip_variable ',' elemexpr");
                (yyval.tree) = astnode_make2(RULE_declare_ip_variable(7), (yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule("declare_ip_variable -> declare_ip_variable ',' elemexpr");
            }
#line 3534 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1138 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("declare_ip_variable -> PROC_CMD elemexpr");
                (yyval.tree) = astnode_make2(RULE_declare_ip_variable(8), astint_make((yyvsp[-1].i)), (yyvsp[0].tree));
                exitrule("declare_ip_variable -> PROC_CMD elemexpr");
            }
#line 3544 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1147 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("stringexpr -> STRINGTOK");
                (yyval.tree) = astnode_make1(RULE_stringexpr(1), aststring_make((yyvsp[0].name)));
                exitrule("stringexpr -> STRINGTOK");
            }
#line 3554 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1156 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("rlist -> expr");
                (yyval.tree) = astnode_make1(RULE_rlist(1), (yyvsp[0].tree));
                exitrule("rlist -> expr");
            }
#line 3564 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1163 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("rlist -> '(' expr ',' exprlist ')'");
                (yyval.tree) = astnode_make2(RULE_rlist(2), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("rlist -> '(' expr ',' exprlist ')'");
            }
#line 3574 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1172 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("ordername -> UNKNOWN_IDENT");
                (yyval.tree) = astnode_make1(RULE_ordername(1), aststring_make((yyvsp[0].name)));
                exitrule("ordername -> UNKNOWN_IDENT");
            }
#line 3584 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1181 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("orderelem -> ordername");
                (yyval.tree) = astnode_make1(RULE_orderelem(1), (yyvsp[0].tree));
                exitrule("orderelem -> ordername");
            }
#line 3594 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1187 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("orderelem -> ordername '(' exprlist ')'");
                (yyval.tree) = astnode_make2(RULE_orderelem(2), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("orderelem -> ordername '(' exprlist ')'");
            }
#line 3604 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1196 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("OrderingList -> orderelem");
                (yyval.tree) = astnode_make1(RULE_OrderingList(1), (yyvsp[0].tree));
                exitrule("OrderingList -> orderelem");
            }
#line 3614 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1203 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("OrderingList -> orderelem ',' OrderingList");
                (yyval.tree) = astnode_make2(RULE_OrderingList(2), (yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule("OrderingList -> orderelem ',' OrderingList");
            }
#line 3624 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1212 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("ordering -> orderelem");
                (yyval.tree) = astnode_make1(RULE_ordering(1), (yyvsp[0].tree));
                exitrule("ordering -> orderelem");
            }
#line 3634 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1219 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("ordering -> '(' OrderingList ')'");
                (yyval.tree) = astnode_make1(RULE_ordering(2), (yyvsp[-1].tree));
                exitrule("ordering -> '(' OrderingList ')'");
            }
#line 3644 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1227 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("cmdeq -> '='");
                (yyval.i) = (yyvsp[0].i);
                exitrule("cmdeq -> '='");
            }
#line 3654 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1236 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("mat_cmd -> MATRIX_CMD");
                (yyval.tree) = astnode_make1(RULE_mat_cmd(1), astint_make((yyvsp[0].i)));
                exitrule("mat_cmd -> MATRIX_CMD");
            }
#line 3664 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1243 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("mat_cmd -> INTMAT_CMD");
                (yyval.tree) = astnode_make1(RULE_mat_cmd(2), astint_make((yyvsp[0].i)));
                exitrule("mat_cmd -> INTMAT_CMD");
            }
#line 3674 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1250 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("mat_cmd -> BIGINTMAT_CMD");
                (yyval.tree) = astnode_make1(RULE_mat_cmd(3), astint_make((yyvsp[0].i)));
                exitrule("mat_cmd -> BIGINTMAT_CMD");
            }
#line 3684 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1263 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("filecmd -> '<' stringexpr");
                (yyval.tree) = astnode_make1(RULE_filecmd(1), (yyvsp[0].tree));
                exitrule("filecmd -> '<' stringexpr");
            }
#line 3694 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1272 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("helpcmd -> HELP_CMD STRINGTOK ';'");
                (yyval.tree) = astnode_make1(RULE_helpcmd(1), aststring_make((yyvsp[-1].name)));
                exitrule("helpcmd -> HELP_CMD STRINGTOK ';'");
            }
#line 3704 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1279 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("helpcmd -> HELP_CMD ';'");
                (yyval.tree) = astnode_make0(RULE_helpcmd(2));
                exitrule("helpcmd -> HELP_CMD ';'");
            }
#line 3714 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1288 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("examplecmd -> EXAMPLE_CMD STRINGTOK ';'");
                (yyval.tree) = astnode_make1(RULE_examplecmd(1), aststring_make((yyvsp[-1].name)));
                exitrule("examplecmd -> EXAMPLE_CMD STRINGTOK ';'");
            }
#line 3724 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1297 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("exportcmd -> EXPORT_CMD exprlist");
                (yyval.tree) = astnode_make1(RULE_exportcmd(1), (yyvsp[0].tree));
                exitrule("exportcmd -> EXPORT_CMD exprlist");
            }
#line 3734 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1306 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("killcmd -> KILL_CMD elemexpr");
                (yyval.tree) = astnode_make1(RULE_killcmd(1), (yyvsp[0].tree));
                exitrule("killcmd -> KILL_CMD elemexpr");
            }
#line 3744 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1313 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("killcmd -> killcmd ',' elemexpr");
                (yyval.tree) = astnode_make2(RULE_killcmd(2), (yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule("killcmd -> killcmd ',' elemexpr");
            }
#line 3754 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1322 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' ROOT_DECL ')'");
                (yyval.tree) = astnode_make1(RULE_listcmd(1), astint_make((yyvsp[-1].i)));
                exitrule("listcmd -> LISTVAR_CMD '(' ROOT_DECL ')'");
            }
#line 3764 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1329 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' ROOT_DECL_LIST ')'");
                (yyval.tree) = astnode_make1(RULE_listcmd(2), astint_make((yyvsp[-1].i)));
                exitrule("listcmd -> LISTVAR_CMD '(' ROOT_DECL_LIST ')'");
            }
#line 3774 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1336 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' ROOT_DECL ')'");
                (yyval.tree) = astnode_make1(RULE_listcmd(3), astint_make((yyvsp[-1].i)));
                exitrule("listcmd -> LISTVAR_CMD '(' ROOT_DECL ')'");
            }
#line 3784 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1343 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' RING_DECL_LIST ')'");
                (yyval.tree) = astnode_make1(RULE_listcmd(4), astint_make((yyvsp[-1].i)));
                exitrule("listcmd -> LISTVAR_CMD '(' RING_DECL_LIST ')'");
            }
#line 3794 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1350 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' RING_CMD ')'");
                (yyval.tree) = astnode_make1(RULE_listcmd(5), astint_make((yyvsp[-1].i)));
                exitrule("listcmd -> LISTVAR_CMD '(' RING_CMD ')'");
            }
#line 3804 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1357 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' mat_cmd ')'");
                (yyval.tree) = astnode_make1(RULE_listcmd(6), (yyvsp[-1].tree));
                exitrule("listcmd -> LISTVAR_CMD '(' mat_cmd ')'");
            }
#line 3814 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1364 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' PROC_CMD ')'");
                (yyval.tree) = astnode_make1(RULE_listcmd(7), astint_make((yyvsp[-1].i)));
                exitrule("listcmd -> LISTVAR_CMD '(' PROC_CMD ')'");
            }
#line 3824 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1371 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' elemexpr ')'");
                (yyval.tree) = astnode_make1(RULE_listcmd(8), (yyvsp[-1].tree));
                exitrule("listcmd -> LISTVAR_CMD '(' elemexpr ')'");
            }
#line 3834 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1378 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' elemexpr ',' ROOT_DECL ')'");
                (yyval.tree) = astnode_make2(RULE_listcmd(9), (yyvsp[-3].tree), astint_make((yyvsp[-1].i)));
                exitrule("listcmd -> LISTVAR_CMD '(' elemexpr ',' ROOT_DECL ')'");
            }
#line 3844 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1385 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' elemexpr ',' ROOT_DECL_LIST ')'");
                (yyval.tree) = astnode_make2(RULE_listcmd(10), (yyvsp[-3].tree), astint_make((yyvsp[-1].i)));
                exitrule("listcmd -> LISTVAR_CMD '(' elemexpr ',' ROOT_DECL_LIST ')'");
            }
#line 3854 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1392 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' elemexpr ',' RING_DECL ')'");
                (yyval.tree) = astnode_make2(RULE_listcmd(11), (yyvsp[-3].tree), astint_make((yyvsp[-1].i)));
                exitrule("listcmd -> LISTVAR_CMD '(' elemexpr ',' RING_DECL ')'");
            }
#line 3864 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1399 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' elemexpr ',' RING_DECL_LIST ')'");
                (yyval.tree) = astnode_make2(RULE_listcmd(12), (yyvsp[-3].tree), astint_make((yyvsp[-1].i)));
                exitrule("listcmd -> LISTVAR_CMD '(' elemexpr ',' RING_DECL_LIST ')'");
            }
#line 3874 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1406 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' elemexpr ',' RING_CMD ')'");
                (yyval.tree) = astnode_make2(RULE_listcmd(13), (yyvsp[-3].tree), astint_make((yyvsp[-1].i)));
                exitrule("listcmd -> LISTVAR_CMD '(' elemexpr ',' RING_CMD ')'");
            }
#line 3884 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1413 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' elemexpr ',' mat_cmd ')'");
                (yyval.tree) = astnode_make2(RULE_listcmd(14), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("listcmd -> LISTVAR_CMD '(' elemexpr ',' mat_cmd ')'");
            }
#line 3894 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1420 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' elemexpr ',' PROC_CMD ')'");
                (yyval.tree) = astnode_make2(RULE_listcmd(15), (yyvsp[-3].tree), astint_make((yyvsp[-1].i)));
                exitrule("listcmd -> LISTVAR_CMD '(' elemexpr ',' PROC_CMD ')'");
            }
#line 3904 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1427 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("listcmd -> LISTVAR_CMD '(' ')'");
                (yyval.tree) = astnode_make0(RULE_listcmd(16));
                exitrule("listcmd -> LISTVAR_CMD '(' ')'");
            }
#line 3914 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1436 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("ringcmd1 -> RING_CMD");
                (yyval.tree) = astnode_make0(RULE_ringcmd1(1));
                exitrule("ringcmd1 -> RING_CMD");
            }
#line 3924 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1449 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("ringcmd -> ringcmd1 elemexpr cmdeq rlist ','  rlist ',' ordering");
                (yyval.tree) = astnode_make4(RULE_ringcmd(1), (yyvsp[-6].tree), (yyvsp[-4].tree), (yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule("ringcmd -> ringcmd1 elemexpr cmdeq rlist ','  rlist ',' ordering");
            }
#line 3934 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1456 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("ringcmd -> ringcmd1 elemexpr");
                (yyval.tree) = astnode_make1(RULE_ringcmd(2), (yyvsp[0].tree));
                exitrule("ringcmd -> ringcmd1 elemexpr");
            }
#line 3944 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1463 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("ringcmd -> ringcmd1 elemexpr cmdeq elemexpr");
                (yyval.tree) = astnode_make2(RULE_ringcmd(3), (yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule("ringcmd -> ringcmd1 elemexpr cmdeq elemexpr");
            }
#line 3954 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1470 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("ringcmd -> ringcmd1 elemexpr cmdeq elemexpr '[' exprlist ']'");
                (yyval.tree) = astnode_make3(RULE_ringcmd(4), (yyvsp[-5].tree), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("ringcmd -> ringcmd1 elemexpr cmdeq elemexpr '[' exprlist ']'");
            }
#line 3964 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1479 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("scriptcmd -> SYSVAR stringexpr");
                (yyval.tree) = astnode_make2(RULE_scriptcmd(1), astint_make((yyvsp[-1].i)), (yyvsp[0].tree));
                exitrule("scriptcmd -> SYSVAR stringexpr");
            }
#line 3974 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1488 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("setrings -> SETRING_CMD");
                (yyval.tree) = astnode_make0(RULE_setrings(1));
                exitrule("setrings -> SETRING_CMD");
            }
#line 3984 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1494 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("setrings -> KEEPRING_CMD");
                (yyval.tree) = astnode_make0(RULE_setrings(2));
                exitrule("setrings -> KEEPRING_CMD");
            }
#line 3994 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1503 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("setringcmd -> setrings expr");
                (yyval.tree) = astnode_make2(RULE_setringcmd(1), (yyvsp[-1].tree), (yyvsp[0].tree));
                exitrule("setringcmd -> setrings expr");
            }
#line 4004 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1512 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("typecmd -> TYPE_CMD expr");
                (yyval.tree) = astnode_make1(RULE_typecmd(1), (yyvsp[0].tree));
                exitrule("typecmd -> TYPE_CMD expr");
            }
#line 4014 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1519 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("typecmd -> exprlist");
                (yyval.tree) = astnode_make1(RULE_typecmd(2), (yyvsp[0].tree));
                exitrule_ex("typecmd -> exprlist", (yyval.tree));
            }
#line 4024 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1531 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("ifcmd -> IF_CMD '(' expr ')' '{' lines '}'");
                (yyval.tree) = astnode_make2(RULE_ifcmd(1), (yyvsp[-4].tree), (yyvsp[-1].tree));
                exitrule_ex("ifcmd -> IF_CMD '(' expr ')' '{' lines '}'",(yyval.tree));
            }
#line 4034 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1538 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("ifcmd -> ELSE_CMD '{' lines '}'");
                (yyval.tree) = astnode_make1(RULE_ifcmd(2), (yyvsp[-1].tree));
                exitrule_ex("ifcmd -> ELSE_CMD '{' lines '}'",(yyval.tree));
            }
#line 4044 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1545 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("ifcmd -> IF_CMD '(' expr ')' BREAK_CMD");
                (yyval.tree) = astnode_make1(RULE_ifcmd(3), (yyvsp[-2].tree));
                exitrule("ifcmd -> IF_CMD '(' expr ')' BREAK_CMD");
            }
#line 4054 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1552 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("ifcmd -> BREAK_CMD");
                (yyval.tree) = astnode_make0(RULE_ifcmd(4));
                exitrule("ifcmd -> BREAK_CMD");
            }
#line 4064 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1559 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("ifcmd -> CONTINUE_CMD");
                (yyval.tree) = astnode_make0(RULE_ifcmd(5));
                exitrule("ifcmd -> CONTINUE_CMD");
            }
#line 4074 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1568 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("whilecmd -> WHILE_CMD '(' expr ')' '{' lines '}'");
                (yyval.tree) = astnode_make2(RULE_whilecmd(1), (yyvsp[-4].tree), (yyvsp[-1].tree));
                exitrule_ex("whilecmd -> WHILE_CMD '(' expr ')' '{' lines '}'",(yyval.tree));
            }
#line 4084 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1577 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("forcmd -> FOR_CMD '(' npprompt ';' expr ';' npprompt ')' '{' lines '}'");
                (yyval.tree) = astnode_make4(RULE_forcmd(1), (yyvsp[-8].tree), (yyvsp[-6].tree), (yyvsp[-4].tree), (yyvsp[-1].tree));
                exitrule_ex("forcmd -> FOR_CMD '(' npprompt ';' expr ';' npprompt ')' '{' lines '}'",(yyval.tree));
            }
#line 4094 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1586 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("proccmd -> PROC_CMD extendedid '{' lines '}'");
                (yyval.tree) = astnode_make2(RULE_proccmd(1), (yyvsp[-3].tree), (yyvsp[-1].tree));
                exitrule("proccmd -> PROC_CMD extendedid '{' lines '}'");
            }
#line 4104 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1593 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("proccmd -> PROC_DEF '(' ')' '{' lines '}'");
                (yyval.tree) = astnode_make2(RULE_proccmd(2), aststring_make((yyvsp[-5].name)), (yyvsp[-1].tree));
                exitrule_ex("proccmd -> PROC_DEF '(' ')' '{' lines '}'",(yyval.tree));
            }
#line 4114 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1600 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("proccmd -> PROC_DEF '(' procarglist ')' '{' lines '}'");
                (yyval.tree) = astnode_make3(RULE_proccmd(3), aststring_make((yyvsp[-6].name)), (yyvsp[-4].tree), (yyvsp[-1].tree));
                exitrule_ex("proccmd -> PROC_DEF '(' procarglist ')' '{' lines '}'",(yyval.tree));
            }
#line 4124 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1607 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("proccmd -> PROC_DEF STRINGTOK '(' procarglist ')' '{' lines '}'");
                (yyval.tree) = astnode_make4(RULE_proccmd(4), aststring_make((yyvsp[-7].name)), aststring_make((yyvsp[-6].name)), (yyvsp[-4].tree), (yyvsp[-1].tree));
                exitrule_ex("proccmd -> PROC_DEF STRINGTOK '(' procarglist ')' '{' lines '}'",(yyval.tree));
            }
#line 4134 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1616 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("parametercmd -> PARAMETER declare_ip_variable");
                (yyval.tree) = astnode_make1(RULE_parametercmd(1), (yyvsp[0].tree));
                exitrule("parametercmd -> PARAMETER declare_ip_variable");
            }
#line 4144 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1623 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("parametercmd -> PARAMETER expr");
                (yyval.tree) = astnode_make1(RULE_parametercmd(2), (yyvsp[0].tree));
                exitrule("parametercmd -> PARAMETER expr");
            }
#line 4154 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1632 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("returncmd -> RETURN '(' exprlist ')'");
                (yyval.tree) = astnode_make1(RULE_returncmd(1), (yyvsp[-1].tree));
                exitrule_ex("returncmd -> RETURN '(' exprlist ')'",(yyval.tree));
            }
#line 4164 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1639 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("returncmd -> RETURN '(' ')'");
                (yyval.tree) = astnode_make0(RULE_returncmd(2));
                exitrule_ex("returncmd -> RETURN '(' ')'",(yyval.tree));
            }
#line 4174 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1648 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("procarglist -> procarglist ',' procarg");
                (yyval.tree) = astnode_append((yyvsp[-2].tree), (yyvsp[0].tree));
                exitrule_ex("procarglist -> procarglist ',' procarg",(yyval.tree));
            }
#line 4184 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1655 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("procarglist -> procarg");
                (yyval.tree) = astnode_make1(RULE_procarglist(1), (yyvsp[0].tree));
                exitrule_ex("procarglist -> procarg",(yyval.tree));
            }
#line 4194 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1664 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("procarg -> ROOT_DECL extendedid");
                (yyval.tree) = astnode_make2(RULE_procarg(1), astint_make((yyvsp[-1].i)), (yyvsp[0].tree));
                exitrule_ex("procarg -> ROOT_DECL extendedid",(yyval.tree));
            }
#line 4204 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1671 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("procarg -> ROOT_DECL_LIST extendedid");
                (yyval.tree) = astnode_make2(RULE_procarg(2), astint_make((yyvsp[-1].i)), (yyvsp[0].tree));
                exitrule_ex("procarg -> ROOT_DECL_LIST extendedid",(yyval.tree));
            }
#line 4214 "grammar.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1678 "grammar.y" /* yacc.c:1646  */
    {
                enterrule("procarg -> extendedid");
                (yyval.tree) = astnode_make1(RULE_procarg(3), (yyvsp[0].tree));
                exitrule_ex("procarg -> extendedid",(yyval.tree));
            }
#line 4224 "grammar.tab.c" /* yacc.c:1646  */
    break;


#line 4228 "grammar.tab.c" /* yacc.c:1646  */
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
#line 1685 "grammar.y" /* yacc.c:1906  */



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
