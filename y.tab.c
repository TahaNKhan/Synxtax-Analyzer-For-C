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

#include <stdio.h>

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
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   444

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  183

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
       0,    67,    67,    68,    70,    71,    72,    73,    75,    77,
      79,    80,    81,    82,    83,    84,    86,    87,    89,    90,
      91,    93,    95,    96,    98,    99,   101,   102,   104,   105,
     107,   108,   109,   111,   112,   115,   116,   119,   120,   123,
     125,   126,   128,   129,   131,   132,   133,   134,   135,   136,
     137,   138,   140,   141,   143,   145,   147,   149,   151,   152,
     154,   156,   157,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   180,   181,   182,   184,   185,   187,   188,   190,   191,
     192,   193
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
  "ID", "$accept", "Program", "Decl", "VariableDecl", "Variable", "Type",
  "FunctionDecl", "Formals", "ClassDecl", "Extends", "Implements", "ids",
  "FieldStar", "Field", "InterfaceDecl", "Prototypes", "Prototype",
  "StmtBlock", "VariableDecl1", "Stmts", "Stmt", "IfStmt", "WhileStmt",
  "ForStmt", "BreakStmt", "ReturnStmt", "ExprStar", "PrintStmt", "Exprs",
  "Expr", "Lvalue", "Call", "Actuals", "Constant", YY_NULLPTR
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

#define YYPACT_NINF -98

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-98)))

#define YYTABLE_NINF -60

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-60)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     151,   -98,   -39,   -98,   -98,   -29,   -98,    -2,   -98,    23,
     -98,   -98,    -3,   -35,   -98,   -98,   -98,    44,    12,    30,
     -98,   -98,   -98,    27,    40,    36,    82,   173,    31,   -98,
      31,   -98,    55,    42,    56,   -98,   -31,    70,   175,   -98,
     -30,   -16,   -15,   -98,    78,   -98,    77,    84,   -98,   -98,
     -98,    31,    87,    87,    76,    72,    31,    31,   -98,   -98,
     -98,   -98,   -98,    95,    94,    98,   100,   106,   110,   243,
     111,   243,   243,   -98,   -98,   -98,   -98,   -98,   -32,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   115,
     -98,   401,    99,   -98,   -98,    11,    33,   126,   -98,   243,
     243,   113,   243,   119,     1,   124,   243,    69,   296,   117,
     243,   -98,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   128,   243,   243,   132,   144,   -98,   140,   192,
     147,   319,   118,   146,   342,   -98,   -98,   360,   -98,   145,
     -98,   148,    69,    69,   240,   240,   190,   190,   190,   190,
     -98,   -98,   -98,   272,   -98,   -98,   -98,   -98,   -98,   243,
     238,    31,   153,   243,   238,   243,   -98,   -98,   383,   183,
      34,   -98,   -98,   -98,   155,   243,   238,   -98,   -98,   157,
     -98,   238,   -98
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    12,     0,    11,    10,     0,    13,     0,    15,     0,
       3,     4,     0,     0,     5,     6,     7,    23,     0,     0,
       1,     2,     8,     0,     9,     0,    25,     0,    20,    14,
      20,    22,     0,     0,     0,    34,     0,     0,    36,    19,
       0,     0,     0,    27,    24,    29,     0,     0,    33,    35,
       9,     0,     0,     0,     0,    59,    20,    20,    18,    41,
      17,    16,    26,     0,     0,     0,     0,     0,     0,    59,
       0,     0,     0,    21,    89,    88,    90,    91,    81,    30,
      31,    28,    51,    32,    45,    46,    47,    48,    49,     0,
      50,    58,    65,    66,    64,     0,     0,    43,    56,    59,
       0,     0,     0,     0,    81,     0,     0,    72,     0,     0,
      87,    44,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,     0,    43,
       0,     0,     0,     0,    62,    79,    57,     0,    67,     0,
      86,     0,    68,    69,    70,    71,    73,    74,    75,    76,
      77,    78,    83,     0,    63,    38,    37,    39,    42,     0,
      59,     0,     0,     0,    59,    87,    84,    82,     0,    52,
       0,    60,    61,    54,     0,    59,    59,    80,    85,     0,
      53,    59,    55
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -98,   -98,   189,   -52,    96,     0,   149,   -26,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   161,   -98,    49,   -98,    74,
     -54,   -98,   -98,   -98,   -98,   -98,   -67,   -98,   -97,   -56,
     -98,   -98,    45,   -98
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    40,    14,    41,    15,    26,
      33,    44,    55,    81,    16,    37,    38,    82,    97,   128,
     129,    84,    85,    86,    87,    88,    89,    90,   140,    91,
      92,    93,   141,    94
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    83,   105,    79,    42,   133,   109,   110,    23,    13,
      17,   -15,    23,    23,    24,   107,   108,   -15,    47,    50,
      18,    51,    51,    20,    52,    53,     1,    36,     2,     3,
      95,    96,   130,    22,     1,     4,     5,     3,    36,   109,
     110,     6,     7,     4,   131,   127,   134,    19,    51,     6,
     137,   125,    25,    27,   134,    13,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   172,   153,   154,    28,
      51,    29,     8,   126,   177,     1,    63,    23,     3,    30,
       8,    64,    65,    45,     4,    31,    66,    67,    68,    69,
       6,     7,    70,    32,    71,   116,   117,   118,   119,   120,
     121,    60,    61,   168,    43,    46,   169,   134,   179,   134,
     173,    72,    48,    59,    73,    54,    56,    74,    75,    76,
      77,    78,   180,    57,    39,    62,    39,   182,    59,     1,
      63,    98,     3,    99,   124,    64,    65,   100,     4,   101,
      66,    67,    68,    69,     6,   102,    70,    58,    71,   103,
     106,   111,    39,    39,     1,   161,     2,     3,   132,   135,
     136,   170,   -59,     4,     5,    72,   139,    59,   155,     6,
       7,    74,    75,    76,    77,    78,     1,   152,     1,     3,
     156,     3,   157,   159,   165,     4,   162,     4,   166,   171,
     176,     6,    34,     6,    34,   178,    63,   181,    21,    49,
       8,    64,    65,   158,    80,     0,    66,    67,    68,    69,
     174,     0,    70,     0,    71,    35,   -60,   -60,   -60,   -60,
     120,   121,     8,     0,     8,     0,     0,     0,   -59,     0,
       0,    72,     0,    59,     0,     0,     0,    74,    75,    76,
      77,   104,    63,     0,     0,     0,     0,    64,    65,     0,
       0,     0,    66,    67,    68,    69,     0,    66,    70,    68,
      71,   112,   113,     0,     0,    71,   116,   117,   118,   119,
     120,   121,     0,     0,     0,     0,     0,    72,     0,    59,
       0,     0,    72,    74,    75,    76,    77,   104,    74,    75,
      76,    77,   104,   112,   113,   114,   115,     0,   116,   117,
     118,   119,   120,   121,     0,     0,     0,     0,     0,     0,
     122,     0,     0,     0,     0,   123,   167,   112,   113,   114,
     115,     0,   116,   117,   118,   119,   120,   121,     0,     0,
       0,     0,     0,     0,   122,     0,   138,     0,     0,   123,
     112,   113,   114,   115,     0,   116,   117,   118,   119,   120,
     121,     0,     0,     0,     0,     0,     0,   122,     0,   160,
       0,     0,   123,   112,   113,   114,   115,     0,   116,   117,
     118,   119,   120,   121,     0,     0,     0,     0,     0,   163,
     122,   112,   113,   114,   115,   123,   116,   117,   118,   119,
     120,   121,     0,     0,     0,     0,     0,     0,   122,     0,
     164,     0,     0,   123,   112,   113,   114,   115,     0,   116,
     117,   118,   119,   120,   121,     0,     0,     0,     0,   175,
       0,   122,   112,   113,   114,   115,   123,   116,   117,   118,
     119,   120,   121,     0,     0,     0,     0,     0,     0,   122,
       0,     0,     0,     0,   123
};

static const yytype_int16 yycheck[] =
{
       0,    55,    69,    55,    30,   102,    38,    39,    43,     9,
      49,    43,    43,    43,    49,    71,    72,    49,    49,    49,
      49,    37,    37,     0,    40,    40,     3,    27,     5,     6,
      56,    57,    99,    36,     3,    12,    13,     6,    38,    38,
      39,    18,    19,    12,   100,    97,   102,    49,    37,    18,
     106,    40,     8,    41,   110,    55,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   163,   123,   124,    39,
      37,    44,    49,    40,    40,     3,     4,    43,     6,    39,
      49,     9,    10,    41,    12,    49,    14,    15,    16,    17,
      18,    19,    20,    11,    22,    26,    27,    28,    29,    30,
      31,    52,    53,   159,    49,    49,   160,   163,   175,   165,
     164,    39,    42,    41,    42,    37,    39,    45,    46,    47,
      48,    49,   176,    39,    28,    49,    30,   181,    41,     3,
       4,    36,     6,    39,    35,     9,    10,    39,    12,    39,
      14,    15,    16,    17,    18,    39,    20,    51,    22,    39,
      39,    36,    56,    57,     3,    37,     5,     6,    45,    40,
      36,   161,    36,    12,    13,    39,    49,    41,    36,    18,
      19,    45,    46,    47,    48,    49,     3,    49,     3,     6,
      36,     6,    42,    36,    39,    12,    40,    12,    40,    36,
       7,    18,    19,    18,    19,    40,     4,    40,     9,    38,
      49,     9,    10,   129,    55,    -1,    14,    15,    16,    17,
     165,    -1,    20,    -1,    22,    42,    26,    27,    28,    29,
      30,    31,    49,    -1,    49,    -1,    -1,    -1,    36,    -1,
      -1,    39,    -1,    41,    -1,    -1,    -1,    45,    46,    47,
      48,    49,     4,    -1,    -1,    -1,    -1,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    17,    -1,    14,    20,    16,
      22,    21,    22,    -1,    -1,    22,    26,    27,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,
      -1,    -1,    39,    45,    46,    47,    48,    49,    45,    46,
      47,    48,    49,    21,    22,    23,    24,    -1,    26,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    43,    44,    21,    22,    23,
      24,    -1,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    40,    -1,    -1,    43,
      21,    22,    23,    24,    -1,    26,    27,    28,    29,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    40,
      -1,    -1,    43,    21,    22,    23,    24,    -1,    26,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,    37,
      38,    21,    22,    23,    24,    43,    26,    27,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      40,    -1,    -1,    43,    21,    22,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    36,
      -1,    38,    21,    22,    23,    24,    43,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,    12,    13,    18,    19,    49,    51,
      52,    53,    54,    55,    56,    58,    64,    49,    49,    49,
       0,    52,    36,    43,    49,     8,    59,    41,    39,    44,
      39,    49,    11,    60,    19,    42,    55,    65,    66,    54,
      55,    57,    57,    49,    61,    41,    49,    49,    42,    65,
      49,    37,    40,    40,    37,    62,    39,    39,    54,    41,
      67,    67,    49,     4,     9,    10,    14,    15,    16,    17,
      20,    22,    39,    42,    45,    46,    47,    48,    49,    53,
      56,    63,    67,    70,    71,    72,    73,    74,    75,    76,
      77,    79,    80,    81,    83,    57,    57,    68,    36,    39,
      39,    39,    39,    39,    49,    76,    39,    79,    79,    38,
      39,    36,    21,    22,    23,    24,    26,    27,    28,    29,
      30,    31,    38,    43,    35,    40,    40,    53,    69,    70,
      76,    79,    45,    78,    79,    40,    36,    79,    40,    49,
      78,    82,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    49,    79,    79,    36,    36,    42,    69,    36,
      40,    37,    40,    37,    40,    39,    40,    44,    79,    70,
      55,    36,    78,    70,    82,    36,     7,    40,    40,    76,
      70,    40,    70
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    51,    52,    52,    52,    52,    53,    54,
      55,    55,    55,    55,    55,    55,    56,    56,    57,    57,
      57,    58,    59,    59,    60,    60,    61,    61,    62,    62,
      63,    63,    63,    64,    64,    65,    65,    66,    66,    67,
      68,    68,    69,    69,    70,    70,    70,    70,    70,    70,
      70,    70,    71,    71,    72,    73,    74,    75,    76,    76,
      77,    78,    78,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    80,    80,    80,    81,    81,    82,    82,    83,    83,
      83,    83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     1,     1,     3,     1,     6,     6,     3,     1,
       0,     7,     2,     0,     2,     0,     3,     1,     2,     0,
       1,     1,     1,     5,     4,     2,     0,     6,     6,     4,
       2,     0,     2,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     5,     7,     5,     9,     2,     3,     1,     0,
       5,     3,     1,     3,     1,     1,     1,     3,     3,     3,
       3,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       6,     1,     4,     3,     4,     6,     1,     0,     1,     1,
       1,     1
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
  printf("[shift]");

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
#line 67 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 68 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 70 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 71 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 72 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 73 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 75 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 77 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 79 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 80 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 81 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 82 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 83 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 84 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 86 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 87 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 89 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 90 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 91 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 93 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 95 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 96 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 98 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 99 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 101 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 102 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 104 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 105 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 107 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 108 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 109 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 111 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 112 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 115 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 116 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 119 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 120 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 123 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 125 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 126 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 128 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 129 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 131 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 132 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 133 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 134 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 135 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 136 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 137 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 138 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 140 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 141 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 143 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 145 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 147 "yaccfile.y" /* yacc.c:1646  */
    {}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 149 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 151 "yaccfile.y" /* yacc.c:1646  */
    { printf("[reduce %i]",yyn);}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 152 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 154 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 156 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 157 "yaccfile.y" /* yacc.c:1646  */
    { printf("[reduce %i]",yyn);}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 160 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 161 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 162 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 163 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 164 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 165 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 166 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 167 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 168 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 169 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 170 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 171 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 172 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 173 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 174 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 175 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 176 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 177 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 180 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 181 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 182 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 184 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 185 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 187 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 188 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 190 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 191 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 192 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 193 "yaccfile.y" /* yacc.c:1646  */
    {printf("[reduce %i]",yyn);}
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2018 "y.tab.c" /* yacc.c:1646  */
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
  printf("\n[accept]\n");
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
#line 196 "yaccfile.y" /* yacc.c:1906  */



int main() {
  yyparse();
  return 0;
}

void yyerror(char *s){
    printf("\n[reject]\n");
}



