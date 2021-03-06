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
#line 1 "angryc.y" /* yacc.c:339  */

    #include <stdio.h>
    #include <string.h>
    #include "./utils.h"
    
    int yylex();
    int yyerror(const char *);
    bool PrgError();
    
    extern FILE* yyin;
    extern char* yytext;
    extern int yylineno;

#line 80 "y.tab.c" /* yacc.c:339  */

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
    ID = 258,
    ID_VECTOR = 259,
    CONST = 260,
    STRUCT = 261,
    BGIN = 262,
    END = 263,
    VAR_DATA_TYPE = 264,
    FUNCTION_DATA_TYPE = 265,
    INTEGER = 266,
    DOUBLE = 267,
    STRING = 268,
    LEFT_OP = 269,
    RIGHT_OP = 270,
    LE_OP = 271,
    GE_OP = 272,
    EQ_OP = 273,
    NE_OP = 274,
    LS_OP = 275,
    GR_OP = 276,
    DONE = 277,
    AND_OP = 278,
    OR_OP = 279,
    MUL_ASSIGN = 280,
    DIV_ASSIGN = 281,
    MOD_ASSIGN = 282,
    ADD_ASSIGN = 283,
    SUB_ASSIGN = 284,
    LEFT_ASSIGN = 285,
    RIGHT_ASSIGN = 286,
    AND_ASSIGN = 287,
    XOR_ASSIGN = 288,
    OR_ASSIGN = 289,
    TYPE_NAME = 290,
    FOR = 291,
    IF = 292,
    ELSE = 293,
    WHILE = 294,
    YELL = 295,
    PLSPLS = 296
  };
#endif
/* Tokens.  */
#define ID 258
#define ID_VECTOR 259
#define CONST 260
#define STRUCT 261
#define BGIN 262
#define END 263
#define VAR_DATA_TYPE 264
#define FUNCTION_DATA_TYPE 265
#define INTEGER 266
#define DOUBLE 267
#define STRING 268
#define LEFT_OP 269
#define RIGHT_OP 270
#define LE_OP 271
#define GE_OP 272
#define EQ_OP 273
#define NE_OP 274
#define LS_OP 275
#define GR_OP 276
#define DONE 277
#define AND_OP 278
#define OR_OP 279
#define MUL_ASSIGN 280
#define DIV_ASSIGN 281
#define MOD_ASSIGN 282
#define ADD_ASSIGN 283
#define SUB_ASSIGN 284
#define LEFT_ASSIGN 285
#define RIGHT_ASSIGN 286
#define AND_ASSIGN 287
#define XOR_ASSIGN 288
#define OR_ASSIGN 289
#define TYPE_NAME 290
#define FOR 291
#define IF 292
#define ELSE 293
#define WHILE 294
#define YELL 295
#define PLSPLS 296

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "angryc.y" /* yacc.c:355  */

    int intVal;
    double doubleVal;
    bool boolVal;
    char strVal[MAX_STRVAL];
    struct variable var;
    Parameter parameter;

#line 211 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 228 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   944

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  108
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  227

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,     2,     2,     2,    46,     2,     2,
      51,    52,    44,    42,    55,    43,     2,    45,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    41,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    50,    56,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    47,    57
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    55,    55,    58,    59,    62,    63,    66,    67,    68,
      69,    70,    71,    74,    77,    78,    79,    80,    83,    85,
      86,    87,    88,    91,    93,    94,    95,    97,    98,   101,
     103,   104,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   118,   119,   120,   123,   124,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   139,   140,
     142,   143,   144,   145,   146,   147,   149,   150,   151,   152,
     155,   156,   157,   158,   159,   160,   161,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   188,
     189,   189,   192,   193,   196,   197,   198,   199,   200
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "ID_VECTOR", "CONST", "STRUCT",
  "BGIN", "END", "VAR_DATA_TYPE", "FUNCTION_DATA_TYPE", "INTEGER",
  "DOUBLE", "STRING", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "LS_OP", "GR_OP", "DONE", "AND_OP", "OR_OP", "MUL_ASSIGN",
  "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN",
  "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME",
  "FOR", "IF", "ELSE", "WHILE", "YELL", "'='", "'+'", "'-'", "'*'", "'/'",
  "'%'", "PLSPLS", "'!'", "'{'", "'}'", "'('", "')'", "'['", "']'", "','",
  "'~'", "\"LS_OP\"", "$accept", "progr", "declarations", "data_type",
  "declaration", "struct_declaration", "function_instructions",
  "variable_declaration", "function_declaration", "vector_declaration",
  "const_variable_declaration", "param_declaration_list",
  "programInstructions", "instructions", "statement", "control_statement",
  "while_statement", "for_statement", "for_assignments", "if_statement",
  "assignment", "assign_op", "varop", "function_call", "$@1",
  "param_list_function_call", "param_function_call", YY_NULLPTR
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
     295,    61,    43,    45,    42,    47,    37,   296,    33,   123,
     125,    40,    41,    91,    93,    44,   126,   297
};
# endif

#define YYPACT_NINF -148

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-148)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     114,    -3,    16,    38,    19,    28,    49,    37,  -148,  -148,
     -14,  -148,  -148,    68,    40,    25,    52,    43,  -148,   602,
    -148,   114,    41,    77,   114,    23,   110,    27,   221,    73,
    -148,  -148,  -148,    74,   665,    91,    94,   665,   131,   665,
     665,   189,    98,  -148,  -148,  -148,  -148,  -148,   889,  -148,
    -148,  -148,   104,   100,   104,   178,   102,  -148,  -148,  -148,
      93,   106,   109,  -148,   116,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,   665,  -148,    18,   665,     9,     7,   107,   813,
     665,   662,   112,  -148,   706,   889,  -148,   108,  -148,   665,
     665,   665,   665,   665,   665,   665,   665,   665,   665,   665,
     665,   665,  -148,  -148,  -148,   121,  -148,  -148,  -148,  -148,
      64,  -148,  -148,  -148,   889,   126,  -148,  -148,  -148,  -148,
    -148,   130,   139,   889,   141,   142,   339,   665,   137,   150,
     167,   717,   -13,   155,   157,   754,  -148,  -148,  -148,  -148,
     145,   145,  -148,  -148,   414,    83,   898,   898,   112,   112,
     112,  -148,  -148,  -148,  -148,    14,   170,   171,   847,   665,
      79,   175,   230,   166,  -148,    12,  -148,  -148,  -148,   665,
     665,   605,   856,  -148,   172,   181,   248,   162,   168,   889,
     889,   280,   182,   183,   765,   651,   289,   188,  -148,   307,
     186,   187,   602,   195,   205,   207,   206,   802,  -148,   348,
     366,  -148,  -148,  -148,   407,   602,   602,   602,   208,   214,
    -148,  -148,   425,  -148,   466,   484,   525,   602,   602,  -148,
    -148,  -148,  -148,   543,   584,  -148,  -148
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,    12,     7,
       0,    10,    11,     0,     0,    18,     0,     0,     1,     0,
       2,     3,     0,     0,     0,     0,     0,     0,    95,     0,
      96,    97,    98,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    43,    42,    41,    32,    40,    33,
       4,     9,    15,     0,    14,     0,     0,     5,     6,    22,
      27,     0,     0,    20,     0,    72,    73,    74,    70,    71,
      75,    76,     0,    94,     0,     0,     0,     0,    95,     0,
       0,     0,    83,    93,     0,    84,    29,     0,    30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    17,     8,    16,     0,    24,    25,    26,    13,
       0,    21,    23,    19,    66,   104,   105,   106,   107,   100,
     108,     0,   102,    67,     0,     0,     0,     0,     0,    58,
       0,     0,    95,     0,    98,     0,    82,    31,    87,    88,
      89,    90,    91,    92,    85,    86,    77,    78,    79,    80,
      81,    30,    28,   101,    99,     0,     0,     0,     0,     0,
       0,    61,     0,     0,    34,     0,    35,    38,   103,     0,
       0,     0,     0,    59,     0,    60,     0,     0,     0,    69,
      68,    95,    51,     0,     0,     0,     0,     0,    45,     0,
       0,     0,     0,    50,    49,    48,     0,     0,    65,     0,
       0,    44,    37,    36,     0,     0,     0,     0,    47,    46,
      63,    64,     0,    57,     0,     0,     0,     0,     0,    62,
      56,    55,    54,     0,     0,    53,    52
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -148,  -148,    72,  -148,  -148,  -148,   -36,  -148,  -148,  -148,
    -148,   -24,  -148,   -19,   -40,  -148,  -148,  -148,  -147,  -148,
     -73,  -148,   -32,   -65,  -148,    65,  -148
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,    52,    60,     7,     8,    53,     9,    10,    11,
      12,    61,    20,    54,    42,    43,    44,    45,   128,    46,
      47,    75,    48,    49,   153,   121,   122
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      41,    87,    79,    64,   129,    82,    13,    84,    85,   120,
     126,    29,   124,   173,   105,   177,   102,   115,   104,    14,
     125,   115,    17,   178,   183,   116,   117,   118,    18,   116,
     117,   118,    57,    58,    73,    22,    57,    58,   196,   164,
     114,    15,    16,   123,    28,    29,     1,     2,   131,   135,
       3,     4,    30,    31,    32,   127,    19,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     119,    23,     6,    57,    58,    59,    25,    33,    34,    63,
      35,    36,   126,    29,    37,    21,   152,   129,    38,    24,
     120,    51,    39,    50,    27,   158,    56,    40,   129,    89,
      90,    91,    92,    93,    94,    26,    95,    28,    29,     1,
       2,   162,   129,     3,     4,    30,    31,    32,    55,     1,
       2,    62,    87,     3,     4,    77,    76,   172,    89,    90,
      91,    92,    93,    94,    83,    95,    96,   179,   180,   184,
      33,    34,    80,    35,    36,    81,    88,    37,   110,    87,
     103,    38,   109,   197,    73,    39,   137,   189,   111,    87,
      40,    89,    90,   112,    87,    93,    94,   199,   113,   151,
      28,    29,    87,   204,    87,    87,    87,    74,    30,    31,
      32,   212,   154,    87,    87,   159,   214,   215,   216,   106,
     107,   108,    28,    29,   155,   156,   157,    86,   223,   224,
      30,    31,    32,    33,    34,   160,    35,    36,   165,   166,
      37,   169,   170,   174,    38,   176,   190,   161,    39,   187,
     168,   186,   191,    40,     0,    33,    34,     0,    35,    36,
       0,   192,    37,    28,    29,   193,    38,   200,   202,   203,
      39,    30,    31,    32,   205,    40,    65,    66,    67,    68,
      69,    28,    29,    70,   206,    71,   207,   217,   208,    30,
      31,    32,    72,   218,     0,     0,    33,    34,    73,    35,
      36,     0,    74,    37,     0,     0,     0,    38,     0,     0,
     175,    39,     0,     0,    33,    34,    40,    35,    36,     0,
       0,    37,    28,    29,     0,    38,     0,     0,   188,    39,
      30,    31,    32,     0,    40,    65,    66,    67,    68,    69,
      28,    29,    70,     0,    71,     0,     0,     0,    30,    31,
      32,    72,     0,     0,     0,    33,    34,    73,    35,    36,
       0,     0,    37,     0,     0,     0,    38,     0,     0,   198,
      39,     0,     0,    33,    34,    40,    35,    36,     0,     0,
      37,    28,    29,     0,    38,     0,     0,   201,    39,    30,
      31,    32,     0,    40,    65,    66,    67,    68,    69,    28,
      29,    70,     0,    71,     0,     0,     0,    30,    31,    32,
      72,     0,     0,     0,    33,    34,     0,    35,    36,     0,
       0,    37,     0,     0,     0,    38,     0,     0,   210,    39,
       0,     0,    33,    34,    40,    35,    36,     0,     0,    37,
      28,    29,     0,    38,     0,     0,   211,    39,    30,    31,
      32,     0,    40,     0,     0,     0,     0,     0,    28,    29,
      89,    90,    91,    92,    93,    94,    30,    31,    32,     0,
       0,     0,     0,    33,    34,     0,    35,    36,     0,     0,
      37,     0,     0,     0,    38,     0,     0,   213,    39,     0,
       0,    33,    34,    40,    35,    36,     0,     0,    37,    28,
      29,     0,    38,     0,     0,   219,    39,    30,    31,    32,
       0,    40,     0,     0,     0,     0,     0,    28,    29,     0,
       0,     0,     0,     0,     0,    30,    31,    32,     0,     0,
       0,     0,    33,    34,     0,    35,    36,     0,     0,    37,
       0,     0,     0,    38,     0,     0,   220,    39,     0,     0,
      33,    34,    40,    35,    36,     0,     0,    37,    28,    29,
       0,    38,     0,     0,   221,    39,    30,    31,    32,     0,
      40,     0,     0,     0,     0,     0,    28,    29,     0,     0,
       0,     0,     0,     0,    30,    31,    32,     0,     0,     0,
       0,    33,    34,     0,    35,    36,     0,     0,    37,     0,
       0,     0,    38,     0,     0,   222,    39,     0,     0,    33,
      34,    40,    35,    36,     0,     0,    37,    28,    29,     0,
      38,     0,     0,   225,    39,    30,    31,    32,     0,    40,
       0,     0,     0,     0,     0,    28,    29,     0,   181,    29,
       0,     0,     0,    30,    31,    32,    30,    31,    32,     0,
      33,    34,     0,    35,    36,     0,     0,    37,     0,     0,
       0,    38,     0,     0,   226,    39,     0,     0,    33,    34,
      40,    35,    36,     0,     0,    37,     0,     0,    37,    38,
       0,     0,    38,    39,   181,    29,    39,   182,    40,     0,
       0,    40,    30,    31,    32,   132,   133,     0,    78,     0,
       0,     0,     0,    30,    31,   134,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    37,     0,     0,     0,    38,     0,
       0,     0,    39,   195,     0,    37,     0,    40,    37,    38,
       0,     0,    38,    39,     0,     0,    39,     0,    40,     0,
       0,    40,    89,    90,    91,    92,    93,    94,     0,    95,
      96,     0,     0,    89,    90,    91,    92,    93,    94,     0,
      95,    96,     0,     0,     0,     0,     0,     0,    97,    98,
      99,   100,   101,     0,     0,     0,     0,     0,   136,    97,
      98,    99,   100,   101,     0,     0,     0,     0,     0,   163,
      89,    90,    91,    92,    93,    94,     0,    95,    96,     0,
       0,    89,    90,    91,    92,    93,    94,     0,    95,    96,
       0,     0,     0,     0,     0,     0,    97,    98,    99,   100,
     101,     0,     0,     0,     0,     0,   167,    97,    98,    99,
     100,   101,     0,     0,     0,     0,     0,   194,    89,    90,
      91,    92,    93,    94,     0,    95,    96,     0,     0,    89,
      90,    91,    92,    93,    94,     0,    95,    96,     0,     0,
       0,     0,     0,     0,    97,    98,    99,   100,   101,     0,
       0,     0,     0,     0,   209,    97,    98,    99,   100,   101,
       0,     0,   130,    89,    90,    91,    92,    93,    94,     0,
      95,    96,    89,    90,    91,    92,    93,    94,     0,    95,
      96,     0,     0,     0,     0,     0,     0,     0,     0,    97,
      98,    99,   100,   101,     0,   171,     0,     0,    97,    98,
      99,   100,   101,     0,   185,    89,    90,    91,    92,    93,
      94,     0,    95,    96,    89,    90,    91,    92,    93,    94,
       0,    95,    96,     0,     0,     0,     0,     0,     0,     0,
       0,    97,    98,    99,   100,   101,     0,     0,     0,     0,
       0,     0,    99,   100,   101
};

static const yytype_int16 yycheck[] =
{
      19,    41,    34,    27,    77,    37,     9,    39,    40,    74,
       3,     4,     3,   160,    54,     3,    52,     3,    54,     3,
      11,     3,     3,    11,   171,    11,    12,    13,     0,    11,
      12,    13,     9,    10,    47,    49,     9,    10,   185,    52,
      72,     3,     4,    75,     3,     4,     5,     6,    80,    81,
       9,    10,    11,    12,    13,    48,     7,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
      52,     3,     0,     9,    10,    52,    51,    36,    37,    52,
      39,    40,     3,     4,    43,    48,   110,   160,    47,    49,
     155,    50,    51,    21,    51,   127,    24,    56,   171,    16,
      17,    18,    19,    20,    21,    53,    23,     3,     4,     5,
       6,   130,   185,     9,    10,    11,    12,    13,    41,     5,
       6,    11,   162,     9,    10,    51,    53,   159,    16,    17,
      18,    19,    20,    21,     3,    23,    24,   169,   170,   171,
      36,    37,    51,    39,    40,    51,    48,    43,    55,   189,
      50,    47,    50,   185,    47,    51,    48,   176,    52,   199,
      56,    16,    17,    54,   204,    20,    21,   186,    52,    48,
       3,     4,   212,   192,   214,   215,   216,    51,    11,    12,
      13,   200,    52,   223,   224,    48,   205,   206,   207,    11,
      12,    13,     3,     4,    55,    54,    54,     8,   217,   218,
      11,    12,    13,    36,    37,    55,    39,    40,    53,    52,
      43,    41,    41,    38,    47,    49,    54,    50,    51,    38,
     155,    49,    54,    56,    -1,    36,    37,    -1,    39,    40,
      -1,    49,    43,     3,     4,    52,    47,    49,    52,    52,
      51,    11,    12,    13,    49,    56,    25,    26,    27,    28,
      29,     3,     4,    32,    49,    34,    49,    49,    52,    11,
      12,    13,    41,    49,    -1,    -1,    36,    37,    47,    39,
      40,    -1,    51,    43,    -1,    -1,    -1,    47,    -1,    -1,
      50,    51,    -1,    -1,    36,    37,    56,    39,    40,    -1,
      -1,    43,     3,     4,    -1,    47,    -1,    -1,    50,    51,
      11,    12,    13,    -1,    56,    25,    26,    27,    28,    29,
       3,     4,    32,    -1,    34,    -1,    -1,    -1,    11,    12,
      13,    41,    -1,    -1,    -1,    36,    37,    47,    39,    40,
      -1,    -1,    43,    -1,    -1,    -1,    47,    -1,    -1,    50,
      51,    -1,    -1,    36,    37,    56,    39,    40,    -1,    -1,
      43,     3,     4,    -1,    47,    -1,    -1,    50,    51,    11,
      12,    13,    -1,    56,    25,    26,    27,    28,    29,     3,
       4,    32,    -1,    34,    -1,    -1,    -1,    11,    12,    13,
      41,    -1,    -1,    -1,    36,    37,    -1,    39,    40,    -1,
      -1,    43,    -1,    -1,    -1,    47,    -1,    -1,    50,    51,
      -1,    -1,    36,    37,    56,    39,    40,    -1,    -1,    43,
       3,     4,    -1,    47,    -1,    -1,    50,    51,    11,    12,
      13,    -1,    56,    -1,    -1,    -1,    -1,    -1,     3,     4,
      16,    17,    18,    19,    20,    21,    11,    12,    13,    -1,
      -1,    -1,    -1,    36,    37,    -1,    39,    40,    -1,    -1,
      43,    -1,    -1,    -1,    47,    -1,    -1,    50,    51,    -1,
      -1,    36,    37,    56,    39,    40,    -1,    -1,    43,     3,
       4,    -1,    47,    -1,    -1,    50,    51,    11,    12,    13,
      -1,    56,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    11,    12,    13,    -1,    -1,
      -1,    -1,    36,    37,    -1,    39,    40,    -1,    -1,    43,
      -1,    -1,    -1,    47,    -1,    -1,    50,    51,    -1,    -1,
      36,    37,    56,    39,    40,    -1,    -1,    43,     3,     4,
      -1,    47,    -1,    -1,    50,    51,    11,    12,    13,    -1,
      56,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    -1,    -1,    -1,
      -1,    36,    37,    -1,    39,    40,    -1,    -1,    43,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    -1,    -1,    36,
      37,    56,    39,    40,    -1,    -1,    43,     3,     4,    -1,
      47,    -1,    -1,    50,    51,    11,    12,    13,    -1,    56,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,     3,     4,
      -1,    -1,    -1,    11,    12,    13,    11,    12,    13,    -1,
      36,    37,    -1,    39,    40,    -1,    -1,    43,    -1,    -1,
      -1,    47,    -1,    -1,    50,    51,    -1,    -1,    36,    37,
      56,    39,    40,    -1,    -1,    43,    -1,    -1,    43,    47,
      -1,    -1,    47,    51,     3,     4,    51,    52,    56,    -1,
      -1,    56,    11,    12,    13,     3,     4,    -1,     3,    -1,
      -1,    -1,    -1,    11,    12,    13,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    47,    -1,
      -1,    -1,    51,    52,    -1,    43,    -1,    56,    43,    47,
      -1,    -1,    47,    51,    -1,    -1,    51,    -1,    56,    -1,
      -1,    56,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    -1,    -1,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    -1,    -1,    -1,    -1,    -1,    52,    42,
      43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,    52,
      16,    17,    18,    19,    20,    21,    -1,    23,    24,    -1,
      -1,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,    -1,    52,    42,    43,    44,
      45,    46,    -1,    -1,    -1,    -1,    -1,    52,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    -1,    -1,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    52,    42,    43,    44,    45,    46,
      -1,    -1,    49,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    -1,    48,    -1,    -1,    42,    43,
      44,    45,    46,    -1,    48,    16,    17,    18,    19,    20,
      21,    -1,    23,    24,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     9,    10,    59,    60,    62,    63,    65,
      66,    67,    68,     9,     3,     3,     4,     3,     0,     7,
      70,    48,    49,     3,    49,    51,    53,    51,     3,     4,
      11,    12,    13,    36,    37,    39,    40,    43,    47,    51,
      56,    71,    72,    73,    74,    75,    77,    78,    80,    81,
      60,    50,    60,    64,    71,    41,    60,     9,    10,    52,
      61,    69,    11,    52,    69,    25,    26,    27,    28,    29,
      32,    34,    41,    47,    51,    79,    53,    51,     3,    80,
      51,    51,    80,     3,    80,    80,     8,    72,    48,    16,
      17,    18,    19,    20,    21,    23,    24,    42,    43,    44,
      45,    46,    64,    50,    64,    72,    11,    12,    13,    50,
      55,    52,    54,    52,    80,     3,    11,    12,    13,    52,
      81,    83,    84,    80,     3,    11,     3,    48,    76,    78,
      49,    80,     3,     4,    13,    80,    52,    48,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    48,    69,    82,    52,    55,    54,    54,    80,    48,
      55,    50,    71,    52,    52,    53,    52,    52,    83,    41,
      41,    48,    80,    76,    38,    50,    49,     3,    11,    80,
      80,     3,    52,    76,    80,    48,    49,    38,    50,    71,
      54,    54,    49,    52,    52,    52,    76,    80,    50,    71,
      49,    50,    52,    52,    71,    49,    49,    49,    52,    52,
      50,    50,    71,    50,    71,    71,    71,    49,    49,    50,
      50,    50,    50,    71,    71,    50,    50
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    62,    62,    62,
      62,    62,    62,    63,    64,    64,    64,    64,    65,    66,
      66,    66,    66,    67,    68,    68,    68,    69,    69,    70,
      71,    71,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    73,    73,    73,    74,    74,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    76,    76,
      77,    77,    77,    77,    77,    77,    78,    78,    78,    78,
      79,    79,    79,    79,    79,    79,    79,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    81,
      82,    81,    83,    83,    84,    84,    84,    84,    84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     1,     1,     1,     4,     3,
       1,     1,     1,     5,     1,     1,     2,     2,     2,     5,
       4,     5,     4,     5,     5,     5,     5,     1,     3,     3,
       2,     3,     1,     1,     4,     4,     7,     7,     4,     1,
       1,     1,     1,     1,     7,     6,     8,     8,     7,     7,
       7,     6,    11,    11,    10,    10,    10,     9,     1,     3,
       5,     4,     9,     8,     8,     7,     3,     3,     6,     6,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     1,     1,     1,     1,     4,
       0,     4,     1,     3,     1,     1,     1,     1,     1
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
        case 5:
#line 62 "angryc.y" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[0].intVal);}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 63 "angryc.y" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[0].intVal);}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 67 "angryc.y" /* yacc.c:1646  */
    {nrParams = 0;}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 68 "angryc.y" /* yacc.c:1646  */
    {nrParams = 0;}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 74 "angryc.y" /* yacc.c:1646  */
    {AddNewStruct ((yyvsp[-3].strVal)); if (PrgError()) {return -1;}}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 83 "angryc.y" /* yacc.c:1646  */
    {AddNewVariable((yyvsp[-1].intVal), (yyvsp[0].strVal)); if (PrgError()) {return -1;}}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 85 "angryc.y" /* yacc.c:1646  */
    {AddNewFunctionWithParameters ((yyvsp[-4].intVal), (yyvsp[-3].strVal)); if (PrgError()) {return -1;}}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 86 "angryc.y" /* yacc.c:1646  */
    {AddNewFunction ((yyvsp[-3].intVal), (yyvsp[-2].strVal)); if (PrgError()) {return -1;}}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 87 "angryc.y" /* yacc.c:1646  */
    {AddNewFunctionWithParameters ((yyvsp[-4].intVal), (yyvsp[-3].strVal)); if (PrgError()) {return -1;}}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 88 "angryc.y" /* yacc.c:1646  */
    {AddNewFunction ((yyvsp[-3].intVal), (yyvsp[-2].strVal)); if (PrgError()) {return -1;}}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 91 "angryc.y" /* yacc.c:1646  */
    {DeclareVector ((yyvsp[-4].intVal), (yyvsp[-3].strVal), (yyvsp[-1].intVal)); if (PrgError()) {return -1;}}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 93 "angryc.y" /* yacc.c:1646  */
    {AddNewConstant((yyvsp[-3].intVal), (yyvsp[-2].strVal), (yyvsp[0].intVal)); if (PrgError()) {return -1;}}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 94 "angryc.y" /* yacc.c:1646  */
    {AddNewConstant((yyvsp[-3].intVal), (yyvsp[-2].strVal), (yyvsp[0].doubleVal)); if (PrgError()) {return -1;}}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 95 "angryc.y" /* yacc.c:1646  */
    {AddNewConstant((yyvsp[-3].intVal), (yyvsp[-2].strVal), (yyvsp[0].strVal)); if (PrgError()) {return -1;}}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 97 "angryc.y" /* yacc.c:1646  */
    {parameters[nrParams].dataType = (yyvsp[0].intVal); ++nrParams;}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 98 "angryc.y" /* yacc.c:1646  */
    {parameters[nrParams].dataType = (yyvsp[-2].intVal); ++nrParams;}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 109 "angryc.y" /* yacc.c:1646  */
    {Yell ((yyvsp[-1].strVal)); if (PrgError()) {return -1;}}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 110 "angryc.y" /* yacc.c:1646  */
    {YellString ((yyvsp[-1].strVal)); if (PrgError()) {return -1;}}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 111 "angryc.y" /* yacc.c:1646  */
    {YellVec((yyvsp[-4].strVal), (yyvsp[-2].intVal)); if (PrgError()) {return -1;}}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 112 "angryc.y" /* yacc.c:1646  */
    {struct variable var = GetVariable ((yyvsp[-2].strVal)); if (var.dataType != INT_t || var.isInitialized == false) {yyerror ("Vector index can only be an initialized integer!!!"); return -1;} YellVec ((yyvsp[-4].strVal), var.value.intVal); }
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 113 "angryc.y" /* yacc.c:1646  */
    {YellVarOp ((yyvsp[-1].var)); if (PrgError()) {return -1;} }
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 131 "angryc.y" /* yacc.c:1646  */
    {/*PANA AICI FARA INSTRUCZTIUNI*/}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 142 "angryc.y" /* yacc.c:1646  */
    {}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 149 "angryc.y" /* yacc.c:1646  */
    {AssignVarValue ((yyvsp[-2].strVal), (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 150 "angryc.y" /* yacc.c:1646  */
    {struct variable var1, rezVar; var1 = GetVariable((yyvsp[-2].strVal)); rezVar = (yyvsp[0].var); rezVar = OperatorFunction (var1, (yyvsp[-1].strVal), rezVar); AssignVarValue (var1.varName, rezVar);}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 151 "angryc.y" /* yacc.c:1646  */
    { AssignVectorValue((yyvsp[-5].strVal), (yyvsp[-3].intVal), (yyvsp[0].var)); if (PrgError()) {return -1;} }
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 152 "angryc.y" /* yacc.c:1646  */
    {struct variable var = GetVariable ((yyvsp[-3].strVal)); if (PrgError()) {return -1;} if (var.dataType != INT_t || var.isInitialized == false) {yyerror ("Vector index can only be an initialized integer!!!"); return -1;} AssignVectorValue ((yyvsp[-5].strVal), var.value.intVal, (yyvsp[0].var));}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 155 "angryc.y" /* yacc.c:1646  */
    {strcpy ((yyval.strVal), (yyvsp[0].strVal));}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 156 "angryc.y" /* yacc.c:1646  */
    {strcpy ((yyval.strVal), (yyvsp[0].strVal));}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 157 "angryc.y" /* yacc.c:1646  */
    {strcpy ((yyval.strVal), (yyvsp[0].strVal));}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 158 "angryc.y" /* yacc.c:1646  */
    {strcpy ((yyval.strVal), (yyvsp[0].strVal));}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 159 "angryc.y" /* yacc.c:1646  */
    {strcpy ((yyval.strVal), (yyvsp[0].strVal));}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 160 "angryc.y" /* yacc.c:1646  */
    {strcpy ((yyval.strVal), (yyvsp[0].strVal));}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 161 "angryc.y" /* yacc.c:1646  */
    {strcpy ((yyval.strVal), (yyvsp[0].strVal));}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 164 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), "+", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 165 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), "-", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 166 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), "*", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 167 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var),"/", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 168 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), "%", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 169 "angryc.y" /* yacc.c:1646  */
    {(yyval.var) = (yyvsp[-1].var);}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 170 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = (yyvsp[0].var); (yyval.var).value.intVal=-(yyval.var).value.intVal; (yyval.var).value.doubleVal=-(yyval.var).value.doubleVal;}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 171 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = (yyvsp[0].var); if((yyval.var).value.boolVal==0){(yyval.var).value.boolVal=1;}else{(yyval.var).value.boolVal=0;} }
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 172 "angryc.y" /* yacc.c:1646  */
    {(yyval.var) = OperatorFunction ((yyvsp[-2].var), "&&", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 173 "angryc.y" /* yacc.c:1646  */
    {(yyval.var) = OperatorFunction ((yyvsp[-2].var), "||", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 174 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), "<=", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 175 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), ">=", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 176 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), "==", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 177 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), "!=", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 178 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), "<", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 179 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), ">", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 180 "angryc.y" /* yacc.c:1646  */
    { Incr((yyvsp[0].strVal)); (yyval.var)= GetVariable((yyvsp[0].strVal)); }
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 181 "angryc.y" /* yacc.c:1646  */
    { (yyval.var)=GetVariable((yyvsp[-1].strVal)); Incr((yyvsp[-1].strVal)); }
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 182 "angryc.y" /* yacc.c:1646  */
    {(yyval.var) = GetVariable((yyvsp[0].strVal)); }
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 183 "angryc.y" /* yacc.c:1646  */
    {struct variable tempVar; strcpy (tempVar.varName, "tempVar"); tempVar.value.intVal = (yyvsp[0].intVal); tempVar.dataType = INT_t; tempVar.isInitialized = true; (yyval.var) = tempVar;}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 184 "angryc.y" /* yacc.c:1646  */
    {struct variable tempVar; strcpy (tempVar.varName, "tempVar"); tempVar.value.doubleVal = (yyvsp[0].doubleVal); tempVar.dataType = DOUBLE_t; tempVar.isInitialized = true;  (yyval.var) = tempVar;}
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 185 "angryc.y" /* yacc.c:1646  */
    {struct variable tempVar; tempVar.value.stringVal = (char*)malloc (strlen((yyvsp[0].strVal))+1); strcpy (tempVar.varName, "tempVar"); strcpy (tempVar.value.stringVal, (yyvsp[0].strVal)); tempVar.dataType = STRING_t; tempVar.isInitialized = true;  (yyval.var) = tempVar;}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 188 "angryc.y" /* yacc.c:1646  */
    {int auxDataType; FunctionCallWithParameters ((yyvsp[-3].strVal)); auxDataType = GetFunction((yyvsp[-3].strVal)).dataType; nrParams = 0; if (PrgError()) {return -1;} (yyval.intVal) = auxDataType;}
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 189 "angryc.y" /* yacc.c:1646  */
    {}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 189 "angryc.y" /* yacc.c:1646  */
    {FunctionCallNoParameters ((yyvsp[-3].strVal)); if (PrgError()) {return -1;} (yyval.intVal) = GetFunction((yyvsp[-3].strVal)).dataType;}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 192 "angryc.y" /* yacc.c:1646  */
    {parameters[nrParams] = (yyvsp[0].parameter); ++nrParams;}
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 193 "angryc.y" /* yacc.c:1646  */
    {parameters[nrParams] = (yyvsp[-2].parameter); ++nrParams; }
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 196 "angryc.y" /* yacc.c:1646  */
    {struct variable var; var = GetVariable ((yyvsp[0].strVal)); if (PrgError()) {return -1;} strcpy ((yyval.parameter).parName, (yyvsp[0].strVal)); (yyval.parameter).dataType = GetVariable ((yyvsp[0].strVal)).dataType; (yyval.parameter).isFunction = false;}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 197 "angryc.y" /* yacc.c:1646  */
    {(yyval.parameter).dataType = INT_t; (yyval.parameter).isFunction = false;}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 198 "angryc.y" /* yacc.c:1646  */
    {(yyval.parameter).dataType = DOUBLE_t; (yyval.parameter).isFunction = false;}
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 199 "angryc.y" /* yacc.c:1646  */
    {(yyval.parameter).dataType = STRING_t; (yyval.parameter).isFunction = false;}
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 200 "angryc.y" /* yacc.c:1646  */
    {(yyval.parameter).dataType = (yyvsp[0].intVal); (yyval.parameter).isFunction = true;}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1998 "y.tab.c" /* yacc.c:1646  */
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
#line 202 "angryc.y" /* yacc.c:1906  */

bool PrgError(){
    if (haveError){
        yyerror(errorMessage);
        return true;
    }
    return false;
}

int yyerror(const char *s){
    printf("eroare: %s la linia: %d\n", s, yylineno);
}

int main(int argc, char** argv){
    yyin=fopen(argv[1],"r");
    yyparse();
} 
