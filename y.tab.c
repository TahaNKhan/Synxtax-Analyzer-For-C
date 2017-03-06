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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "yaccfile.y" /* yacc.c:339  */

#include <iostream>

#line 70 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    BOOLEAN = 258,
    BREAK = 259,
    CLASS = 260,
    DOUBLE = 261,
    ELSE = 262,
    EXTENDS = 263,
    FOR = 264,
    IF = 265,
    IMPLEMENTS = 266,
    INT = 267,
    INTERFACE = 268,
    NEWARRAY = 269,
    PRINTLN = 270,
    READLN = 271,
    RETURN = 272,
    STRING = 273,
    VOID = 274,
    WHILE = 275,
    PLUS = 276,
    MINUS = 277,
    MULTIPLICATION = 278,
    DIVISION = 279,
    MOD = 280,
    LESS = 281,
    LESSEQUAL = 282,
    GREATER = 283,
    GREATEREQUAL = 284,
    EQUAL = 285,
    NOTEQUAL = 286,
    AND = 287,
    OR = 288,
    NOT = 289,
    ASSIGNOP = 290,
    SEMICOLON = 291,
    COMMA = 292,
    PERIOD = 293,
    LEFTPAREN = 294,
    RIGHTPAREN = 295,
    LEFTBRACE = 296,
    RIGHTBRACE = 297,
    LEFTBRACKET = 298,
    RIGHTBRACKET = 299,
    INTCONSTANT = 300,
    DOUBLECONSTANT = 301,
    STRINGCONSTANT = 302,
    BOOLEANCONSTANT = 303,
    ID = 304
  };
#endif
/* Tokens.  */
#define BOOLEAN 258
#define BREAK 259
#define CLASS 260
#define DOUBLE 261
#define ELSE 262
#define EXTENDS 263
#define FOR 264
#define IF 265
#define IMPLEMENTS 266
#define INT 267
#define INTERFACE 268
#define NEWARRAY 269
#define PRINTLN 270
#define READLN 271
#define RETURN 272
#define STRING 273
#define VOID 274
#define WHILE 275
#define PLUS 276
#define MINUS 277
#define MULTIPLICATION 278
#define DIVISION 279
#define MOD 280
#define LESS 281
#define LESSEQUAL 282
#define GREATER 283
#define GREATEREQUAL 284
#define EQUAL 285
#define NOTEQUAL 286
#define AND 287
#define OR 288
#define NOT 289
#define ASSIGNOP 290
#define SEMICOLON 291
#define COMMA 292
#define PERIOD 293
#define LEFTPAREN 294
#define RIGHTPAREN 295
#define LEFTBRACE 296
#define RIGHTBRACE 297
#define LEFTBRACKET 298
#define RIGHTBRACKET 299
#define INTCONSTANT 300
#define DOUBLECONSTANT 301
#define STRINGCONSTANT 302
#define BOOLEANCONSTANT 303
#define ID 304

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 219 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   364

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  184

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    60,    60,    62,    63,    65,    66,    67,    68,    70,
      71,    73,    75,    77,    78,    79,    80,    81,    82,    84,
      85,    87,    88,    89,    91,    93,    94,    96,    97,    99,
     100,   102,   103,   104,   106,   107,   110,   111,   114,   115,
     118,   120,   121,   122,   124,   125,   126,   127,   128,   129,
     130,   131,   133,   134,   136,   138,   140,   142,   144,   146,
     147,   149,   150,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   171,   172,   173,   175,   176,   178,   179,   180,   182,
     183,   184,   185
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOOLEAN", "BREAK", "CLASS", "DOUBLE",
  "ELSE", "EXTENDS", "FOR", "IF", "IMPLEMENTS", "INT", "INTERFACE",
  "NEWARRAY", "PRINTLN", "READLN", "RETURN", "STRING", "VOID", "WHILE",
  "PLUS", "MINUS", "MULTIPLICATION", "DIVISION", "MOD", "LESS",
  "LESSEQUAL", "GREATER", "GREATEREQUAL", "EQUAL", "NOTEQUAL", "AND", "OR",
  "NOT", "ASSIGNOP", "SEMICOLON", "COMMA", "PERIOD", "LEFTPAREN",
  "RIGHTPAREN", "LEFTBRACE", "RIGHTBRACE", "LEFTBRACKET", "RIGHTBRACKET",
  "INTCONSTANT", "DOUBLECONSTANT", "STRINGCONSTANT", "BOOLEANCONSTANT",
  "ID", "$accept", "Program", "Decll", "Decl", "VariableDecll",
  "VariableDecl", "Variable", "Type", "FunctionDecl", "Formals",
  "ClassDecl", "Extends", "Implements", "ids", "Field", "InterfaceDecl",
  "Prototypes", "Prototype", "StmtBlock", "Stmts", "Stmt", "IfStmt",
  "WhileStmt", "ForStmt", "BreakStmt", "ReturnStmt", "PrintStmt", "Exprs",
  "ExprNoExpr", "Expr", "Lvalue", "Call", "Actuals", "Constant", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

#define YYPACT_NINF -90

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-90)))

#define YYTABLE_NINF -63

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-63)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,   -90,   -42,   -90,   -90,   -12,   -90,    -8,   -90,    32,
      12,   -90,   -90,    14,   -40,   -90,   -90,   -90,    57,    37,
      41,   -90,   -90,   -90,    54,    72,    67,   107,    30,    88,
     -90,    88,   -90,    77,    89,    82,   -90,   -38,    91,    63,
     -90,   -35,   -18,    27,    98,   -90,    65,    97,   105,   -90,
     -90,   -90,    88,   104,   104,    77,   -90,   -90,   108,    88,
      88,   -90,    88,   -90,   -90,   -90,   -90,    36,    50,    93,
      88,   110,   111,   115,   113,   118,   119,   123,   124,   150,
     126,   150,   150,   -90,   -90,   -90,   -90,    47,   -90,   125,
      93,   -90,   -90,   -90,   -90,   -90,   -90,   132,   308,   134,
     -90,   -90,   -90,   -90,   -90,   -90,   150,   150,   128,   150,
     130,   135,   150,    81,   203,   127,   150,   -90,   -90,   -90,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     133,   150,   150,   138,   226,   140,    83,   308,   -90,   -90,
     249,   -90,   136,   272,   141,    81,    81,   -17,   -17,   321,
     321,   321,   321,   308,   308,   -90,   179,   308,   150,   139,
      88,   150,   143,   139,   150,   150,   -90,   -90,   290,   176,
     -20,   308,   -90,   -90,   151,   -90,   150,   139,   -90,   -90,
     152,   -90,   139,   -90
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    15,     0,    14,    13,     0,    16,     0,    18,     0,
       2,     4,     5,     0,     0,     6,     7,     8,    26,     0,
       0,     1,     3,    11,     0,    12,     0,    28,     0,    23,
      17,    23,    25,     0,     0,     0,    35,     0,     0,    37,
      22,     0,     0,     0,    30,    27,    33,     0,     0,    34,
      36,    12,     0,     0,     0,     0,    31,    32,     0,    23,
      23,    21,    10,    20,    19,    29,    24,     0,     0,    43,
      10,     0,     0,     0,     0,     0,     0,     0,     0,    62,
       0,     0,     0,    89,    90,    91,    92,    81,    51,     0,
      42,    45,    46,    47,    48,    49,    50,     0,    61,    65,
      66,    64,     9,    39,    38,    56,    62,     0,     0,     0,
       0,     0,     0,    72,     0,     0,    88,    40,    41,    44,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    60,    79,    57,
       0,    67,     0,    86,     0,    68,    69,    70,    71,    73,
      74,    75,    76,    77,    78,    83,     0,    63,     0,    62,
       0,     0,     0,    62,    88,    88,    84,    82,     0,    52,
       0,    59,    58,    54,     0,    87,    62,    62,    80,    85,
       0,    53,    62,    55
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -90,   -90,   -90,   180,   142,    55,   -25,     0,   147,   -15,
     -90,   -90,   -90,   149,   -90,   -90,   155,   -90,    68,   -90,
     -89,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -77,   -69,
     -90,   -90,   -37,   -90
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    69,    12,    13,    41,    15,    42,
      16,    27,    34,    45,    58,    17,    38,    39,    88,    89,
      90,    91,    92,    93,    94,    95,    96,   136,    97,    98,
      99,   100,   144,   101
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      14,   118,   111,    24,    40,    24,    40,    18,    24,    25,
      14,    48,   113,   114,    51,     1,    43,     2,     3,    52,
     178,   130,    53,    24,     4,     5,   131,    61,    37,   133,
       6,     7,    21,     1,    40,    40,     3,    19,   134,    37,
     137,    20,     4,   140,    67,    68,    14,   143,     6,    35,
      23,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,     8,   156,   157,    52,    26,     1,    54,     1,     3,
     169,     3,    36,    52,   173,     4,    71,     4,    28,     8,
      29,     6,    35,     6,     7,   115,   116,    52,   181,   168,
      72,     1,   171,   183,     3,   143,   143,    73,    30,   180,
       4,    56,    74,    75,   122,   123,     6,    76,    77,    78,
      79,    31,     8,    80,     8,    81,    32,    70,    33,   130,
     161,    63,    64,   162,   131,    70,    44,   174,   175,   -62,
      46,    47,    82,    49,    62,    55,    59,     8,    83,    84,
      85,    86,    87,    73,    60,    62,   103,   104,    74,    75,
      66,   105,   106,    76,    77,    78,    79,   107,   108,    80,
     170,    81,   109,   110,    76,   112,    78,   117,   119,   132,
     138,   139,    81,   135,   158,   164,   142,   160,    82,   172,
      62,   166,   155,   177,    83,    84,    85,    86,    87,    82,
      22,   179,   182,    57,    50,    83,    84,    85,    86,    87,
     120,   121,   122,   123,    65,   124,   125,   126,   127,   128,
     129,     0,   102,     0,     0,     0,     0,   130,     0,     0,
       0,     0,   131,   167,   120,   121,   122,   123,     0,   124,
     125,   126,   127,   128,   129,     0,     0,     0,     0,     0,
       0,   130,     0,   141,     0,     0,   131,   120,   121,   122,
     123,     0,   124,   125,   126,   127,   128,   129,     0,     0,
       0,     0,     0,     0,   130,     0,   159,     0,     0,   131,
     120,   121,   122,   123,     0,   124,   125,   126,   127,   128,
     129,     0,     0,     0,     0,     0,     0,   130,     0,   163,
       0,     0,   131,   120,   121,   122,   123,     0,   124,   125,
     126,   127,   128,   129,     0,     0,     0,     0,     0,   165,
     130,   120,   121,   122,   123,   131,   124,   125,   126,   127,
     128,   129,     0,     0,     0,     0,   176,     0,   130,   120,
     121,   122,   123,   131,   124,   125,   126,   127,   128,   129,
       0,     0,   120,   121,   122,   123,   130,   -63,   -63,   -63,
     -63,   131,     0,     0,     0,     0,     0,     0,     0,   130,
       0,     0,     0,     0,   131
};

static const yytype_int16 yycheck[] =
{
       0,    90,    79,    43,    29,    43,    31,    49,    43,    49,
      10,    49,    81,    82,    49,     3,    31,     5,     6,    37,
      40,    38,    40,    43,    12,    13,    43,    52,    28,   106,
      18,    19,     0,     3,    59,    60,     6,    49,   107,    39,
     109,    49,    12,   112,    59,    60,    46,   116,    18,    19,
      36,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,    49,   131,   132,    37,     8,     3,    40,     3,     6,
     159,     6,    42,    37,   163,    12,    40,    12,    41,    49,
      39,    18,    19,    18,    19,    38,    39,    37,   177,   158,
      40,     3,   161,   182,     6,   164,   165,     4,    44,   176,
      12,    46,     9,    10,    23,    24,    18,    14,    15,    16,
      17,    39,    49,    20,    49,    22,    49,    62,    11,    38,
      37,    53,    54,    40,    43,    70,    49,   164,   165,    36,
      41,    49,    39,    42,    41,    37,    39,    49,    45,    46,
      47,    48,    49,     4,    39,    41,    36,    36,     9,    10,
      42,    36,    39,    14,    15,    16,    17,    39,    39,    20,
     160,    22,    39,    39,    14,    39,    16,    42,    36,    35,
      40,    36,    22,    45,    36,    39,    49,    37,    39,    36,
      41,    40,    49,     7,    45,    46,    47,    48,    49,    39,
      10,    40,    40,    46,    39,    45,    46,    47,    48,    49,
      21,    22,    23,    24,    55,    26,    27,    28,    29,    30,
      31,    -1,    70,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    43,    44,    21,    22,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    40,    -1,    -1,    43,    21,    22,    23,
      24,    -1,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    40,    -1,    -1,    43,
      21,    22,    23,    24,    -1,    26,    27,    28,    29,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    40,
      -1,    -1,    43,    21,    22,    23,    24,    -1,    26,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,    37,
      38,    21,    22,    23,    24,    43,    26,    27,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    36,    -1,    38,    21,
      22,    23,    24,    43,    26,    27,    28,    29,    30,    31,
      -1,    -1,    21,    22,    23,    24,    38,    26,    27,    28,
      29,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,    12,    13,    18,    19,    49,    51,
      52,    53,    55,    56,    57,    58,    60,    65,    49,    49,
      49,     0,    53,    36,    43,    49,     8,    61,    41,    39,
      44,    39,    49,    11,    62,    19,    42,    57,    66,    67,
      56,    57,    59,    59,    49,    63,    41,    49,    49,    42,
      66,    49,    37,    40,    40,    37,    55,    58,    64,    39,
      39,    56,    41,    68,    68,    63,    42,    59,    59,    54,
      55,    40,    40,     4,     9,    10,    14,    15,    16,    17,
      20,    22,    39,    45,    46,    47,    48,    49,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    78,    79,    80,
      81,    83,    54,    36,    36,    36,    39,    39,    39,    39,
      39,    78,    39,    79,    79,    38,    39,    42,    70,    36,
      21,    22,    23,    24,    26,    27,    28,    29,    30,    31,
      38,    43,    35,    78,    79,    45,    77,    79,    40,    36,
      79,    40,    49,    79,    82,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    49,    79,    79,    36,    40,
      37,    37,    40,    40,    39,    37,    40,    44,    79,    70,
      57,    79,    36,    70,    82,    82,    36,     7,    40,    40,
      78,    70,    40,    70
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    53,    53,    54,
      54,    55,    56,    57,    57,    57,    57,    57,    57,    58,
      58,    59,    59,    59,    60,    61,    61,    62,    62,    63,
      63,    64,    64,    64,    65,    65,    66,    66,    67,    67,
      68,    69,    69,    69,    70,    70,    70,    70,    70,    70,
      70,    70,    71,    71,    72,    73,    74,    75,    76,    77,
      77,    78,    78,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    80,    80,    80,    81,    81,    82,    82,    82,    83,
      83,    83,    83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     2,
       0,     2,     2,     1,     1,     1,     1,     3,     1,     6,
       6,     3,     1,     0,     7,     2,     0,     2,     0,     3,
       1,     1,     1,     0,     5,     4,     2,     0,     6,     6,
       4,     2,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     5,     7,     5,     9,     2,     3,     5,     3,
       1,     1,     0,     3,     1,     1,     1,     3,     3,     3,
       3,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       6,     1,     4,     3,     4,     6,     1,     3,     0,     1,
       1,     1,     1
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
      yyerror (YY_("syntax error: cannot back up")); \
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
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
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
      yychar = yylex ();
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
#line 60 "yaccfile.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);printf("[Reduce %i]",yyn);}
#line 1464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 62 "yaccfile.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);printf("[Reduce %i]",yyn);}
#line 1470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 63 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 65 "yaccfile.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);printf("[Reduce %i]",yyn);}
#line 1482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 66 "yaccfile.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);printf("[Reduce %i]",yyn);}
#line 1488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 67 "yaccfile.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);printf("[Reduce %i]",yyn);}
#line 1494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 68 "yaccfile.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);printf("[Reduce %i]",yyn);}
#line 1500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 70 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 71 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 73 "yaccfile.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);printf("[Reduce %i]",yyn);}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 75 "yaccfile.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);printf("[Reduce %i]",yyn);}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 77 "yaccfile.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);printf("[Reduce %i]",yyn);}
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 78 "yaccfile.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);printf("[Reduce %i]",yyn);}
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 79 "yaccfile.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);printf("[Reduce %i]",yyn);}
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 80 "yaccfile.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);printf("[Reduce %i]",yyn);}
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 81 "yaccfile.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]);printf("[Reduce %i]",yyn);}
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 82 "yaccfile.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);printf("[Reduce %i]",yyn);}
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 84 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 85 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 87 "yaccfile.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]);printf("[Reduce %i]",yyn);}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 88 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 89 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 91 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 93 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 94 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 96 "yaccfile.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);printf("[Reduce %i]",yyn);}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 97 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 99 "yaccfile.y" /* yacc.c:1646  */
    {(yyval) =(yyvsp[-2]);printf("[Reduce %i]",yyn);}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 100 "yaccfile.y" /* yacc.c:1646  */
    {(yyval) =(yyvsp[0]);printf("[Reduce %i]",yyn);}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 102 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 103 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 104 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 106 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 107 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 110 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 111 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 114 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 115 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 118 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 120 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 121 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 122 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 124 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 125 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 126 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 127 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 128 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 129 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 130 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 131 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 133 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 134 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 136 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 138 "yaccfile.y" /* yacc.c:1646  */
    {(yyval) =(yyvsp[-6])+(yyvsp[-4])+(yyvsp[-2])+(yyvsp[0]);printf("[Reduce %i]",yyn);}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 140 "yaccfile.y" /* yacc.c:1646  */
    {}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 142 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn)}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 144 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 146 "yaccfile.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-2]) + (yyvsp[0]); printf("[Reduce %i]",yyn);}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 147 "yaccfile.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]); printf("[Reduce %i]",yyn);}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 149 "yaccfile.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]); printf("[Reduce %i]",yyn);}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 150 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 152 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 153 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 154 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 155 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 156 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 157 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 158 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 159 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 160 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 161 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 162 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 163 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 164 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 165 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 166 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 167 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 168 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 169 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 171 "yaccfile.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);printf("[Reduce %i]",yyn);}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 172 "yaccfile.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-3]) + (yyvsp[-1]);printf("[Reduce %i]",yyn);}
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 173 "yaccfile.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-2]) + (yyvsp[0]);printf("[Reduce %i]",yyn);}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 175 "yaccfile.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-3]) + (yyvsp[-1]);printf("[Reduce %i]",yyn);}
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 176 "yaccfile.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-5]) + (yyvsp[-3]) + (yyvsp[-1]);printf("[Reduce %i]",yyn);}
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 178 "yaccfile.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);printf("[Reduce %i]",yyn);}
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 179 "yaccfile.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-2]) + (yyvsp[0]);printf("[Reduce %i]",yyn);}
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 180 "yaccfile.y" /* yacc.c:1646  */
    {printf("[Reduce %i]",yyn);}
#line 1980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 182 "yaccfile.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);printf("[Reduce %i]",yyn);}
#line 1986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 183 "yaccfile.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);printf("[Reduce %i]",yyn);}
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 184 "yaccfile.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);printf("[Reduce %i]",yyn);}
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 185 "yaccfile.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);printf("[Reduce %i]",yyn);}
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2008 "y.tab.c" /* yacc.c:1646  */
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
      yyerror (YY_("syntax error"));
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
        yyerror (yymsgp);
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
                      yytoken, &yylval);
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
                  yystos[yystate], yyvsp);
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
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
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
#line 188 "yaccfile.y" /* yacc.c:1906  */



int main() {
  yyparse();
  return 0;
}

yyerror(s)
char *s;
{
    printf("yacc error: %s\n", s);
}
yywrap()
{
    return(0);
}

