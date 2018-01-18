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
    BGIN = 261,
    END = 262,
    VAR_DATA_TYPE = 263,
    FUNCTION_DATA_TYPE = 264,
    INTEGER = 265,
    DOUBLE = 266,
    STRING = 267,
    LEFT_OP = 268,
    RIGHT_OP = 269,
    LE_OP = 270,
    GE_OP = 271,
    EQ_OP = 272,
    NE_OP = 273,
    LS_OP = 274,
    GR_OP = 275,
    DONE = 276,
    AND_OP = 277,
    OR_OP = 278,
    MUL_ASSIGN = 279,
    DIV_ASSIGN = 280,
    MOD_ASSIGN = 281,
    ADD_ASSIGN = 282,
    SUB_ASSIGN = 283,
    LEFT_ASSIGN = 284,
    RIGHT_ASSIGN = 285,
    AND_ASSIGN = 286,
    XOR_ASSIGN = 287,
    OR_ASSIGN = 288,
    TYPE_NAME = 289,
    FOR = 290,
    IF = 291,
    ELSE = 292,
    YELL = 293,
    PLSPLS = 294
  };
#endif
/* Tokens.  */
#define ID 258
#define ID_VECTOR 259
#define CONST 260
#define BGIN 261
#define END 262
#define VAR_DATA_TYPE 263
#define FUNCTION_DATA_TYPE 264
#define INTEGER 265
#define DOUBLE 266
#define STRING 267
#define LEFT_OP 268
#define RIGHT_OP 269
#define LE_OP 270
#define GE_OP 271
#define EQ_OP 272
#define NE_OP 273
#define LS_OP 274
#define GR_OP 275
#define DONE 276
#define AND_OP 277
#define OR_OP 278
#define MUL_ASSIGN 279
#define DIV_ASSIGN 280
#define MOD_ASSIGN 281
#define ADD_ASSIGN 282
#define SUB_ASSIGN 283
#define LEFT_ASSIGN 284
#define RIGHT_ASSIGN 285
#define AND_ASSIGN 286
#define XOR_ASSIGN 287
#define OR_ASSIGN 288
#define TYPE_NAME 289
#define FOR 290
#define IF 291
#define ELSE 292
#define YELL 293
#define PLSPLS 294

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

#line 207 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 224 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   790

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  191

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,     2,     2,     2,    44,     2,     2,
      49,    50,    42,    40,    53,    41,     2,    43,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    39,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,    48,    54,     2,     2,     2,
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
      35,    36,    37,    38,    45,    55
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    55,    55,    58,    59,    62,    63,    66,    67,    68,
      69,    70,    73,    74,    75,    76,    79,    81,    82,    83,
      84,    87,    89,    90,    91,    93,    94,    97,    99,   100,
     103,   104,   105,   106,   107,   108,   111,   112,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     128,   129,   131,   132,   133,   134,   135,   137,   138,   140,
     141,   142,   143,   144,   145,   146,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   173,   174,
     174,   177,   178,   181,   182,   183,   184,   185
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "ID_VECTOR", "CONST", "BGIN",
  "END", "VAR_DATA_TYPE", "FUNCTION_DATA_TYPE", "INTEGER", "DOUBLE",
  "STRING", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP",
  "LS_OP", "GR_OP", "DONE", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME", "FOR", "IF",
  "ELSE", "YELL", "'='", "'+'", "'-'", "'*'", "'/'", "'%'", "PLSPLS",
  "'!'", "'{'", "'}'", "'('", "')'", "'['", "']'", "','", "'~'",
  "\"LS_OP\"", "$accept", "progr", "declarations", "data_type",
  "declaration", "function_instructions", "variable_declaration",
  "function_declaration", "vector_declaration",
  "const_variable_declaration", "param_declaration_list",
  "programInstructions", "instructions", "statement", "control_statement",
  "for_statement", "for_assignments", "if_statement", "assignment",
  "assign_op", "varop", "function_call", "$@1", "param_list_function_call",
  "param_function_call", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,    61,
      43,    45,    42,    47,    37,   294,    33,   123,   125,    40,
      41,    91,    93,    44,   126,   295
};
# endif

#define YYPACT_NINF -125

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-125)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      39,     8,    19,    16,    25,    20,    -6,  -125,     6,  -125,
    -125,    48,    30,    29,    33,  -125,   504,  -125,    39,   159,
      32,     2,    58,    22,    79,  -125,  -125,  -125,    34,   559,
      43,   559,    85,   559,   559,    84,    47,  -125,  -125,  -125,
    -125,   707,  -125,  -125,  -125,   174,    52,   174,    87,  -125,
    -125,  -125,    49,    59,    56,  -125,    61,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,   559,  -125,    17,   559,     4,    68,
     657,     9,   759,  -125,   574,   707,  -125,    69,  -125,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   559,   559,
     559,   559,  -125,  -125,  -125,    71,  -125,  -125,  -125,    37,
    -125,  -125,  -125,   707,    72,  -125,  -125,  -125,  -125,  -125,
      76,    77,   707,    10,   559,    81,    78,   214,    86,    90,
    -125,  -125,  -125,  -125,    54,    54,  -125,  -125,   172,   768,
     563,   563,   759,   759,   759,  -125,  -125,  -125,  -125,    74,
     666,   559,   131,    98,   229,  -125,  -125,  -125,   507,   698,
    -125,    94,   106,   728,   100,    95,   610,   510,   269,   104,
     504,   112,   113,   114,   103,   621,  -125,   284,   504,   324,
     504,   504,   504,   116,   125,  -125,   339,  -125,   379,   394,
     434,   504,   504,  -125,  -125,  -125,  -125,   449,   489,  -125,
    -125
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     7,     0,    10,
      11,     0,    16,     0,     0,     1,     0,     2,     3,     0,
       0,     0,     0,     0,    84,    85,    86,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    34,    37,    36,
      30,    35,    31,     4,     9,    13,     0,    12,     0,     5,
       6,    20,    25,     0,     0,    18,     0,    61,    62,    63,
      59,    60,    64,    65,     0,    83,     0,     0,     0,    84,
       0,     0,    72,    82,     0,    73,    27,     0,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    15,     8,    14,     0,    22,    23,    24,     0,
      19,    21,    17,    57,    93,    94,    95,    96,    89,    97,
       0,    91,    58,     0,     0,     0,    50,     0,     0,     0,
      71,    29,    76,    77,    78,    79,    80,    81,    74,    75,
      66,    67,    68,    69,    70,    28,    26,    90,    88,     0,
       0,     0,     0,    53,     0,    32,    33,    92,     0,     0,
      51,     0,    52,    84,    43,     0,     0,     0,     0,     0,
       0,    42,    41,    40,     0,     0,    56,     0,     0,     0,
       0,     0,     0,    39,    38,    55,     0,    49,     0,     0,
       0,     0,     0,    54,    48,    47,    46,     0,     0,    45,
      44
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -125,  -125,    14,  -125,  -125,   -32,  -125,  -125,  -125,  -125,
     -21,  -125,   -16,   -30,  -125,  -125,  -124,  -125,   -67,  -125,
     -25,   -63,  -125,    35,  -125
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,    45,    52,     6,    46,     7,     8,     9,    10,
      53,    17,    47,    36,    37,    38,   115,    39,    40,    67,
      41,    42,   137,   110,   111
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      35,   116,    56,   109,    70,    77,    72,   113,    74,    75,
      49,    50,   118,    92,     5,    94,    11,    95,   150,    14,
     104,   119,    12,    13,   155,    15,    16,   105,   106,   107,
      49,    50,    43,   164,    57,    58,    59,    60,    61,   103,
      18,    62,   112,    63,     1,    49,    50,     2,     3,    64,
     114,    20,    51,    19,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   108,    54,    79,
      80,    48,    55,    83,    84,   116,   109,   104,   136,    21,
      22,   116,    23,    68,   105,   106,   107,    24,    73,   140,
     116,    76,    71,    78,    25,    26,    27,    96,    97,    98,
      93,   144,    99,    57,    58,    59,    60,    61,   101,   100,
      62,   102,    63,    65,    77,   121,   149,   135,    64,    28,
      29,    66,    30,   156,    65,    31,   138,   141,    66,    32,
     139,   142,   165,    33,   113,   151,   145,    77,    34,    77,
     146,   158,   167,   159,   169,   161,    77,   160,    77,    77,
      77,   168,   176,   173,   178,   179,   180,    77,    77,   170,
     171,   172,    24,   181,     1,   187,   188,     2,     3,    25,
      26,    27,   182,     0,   147,     0,     0,    24,     0,     1,
       0,     0,     2,     3,    25,    26,    27,    79,    80,    81,
      82,    83,    84,     0,    28,    29,     0,    30,     0,     0,
      31,     0,     0,     0,    32,     0,     0,    44,    33,    28,
      29,     0,    30,    34,     0,    31,     0,    24,     0,    32,
       0,     0,     0,    33,    25,    26,    27,     0,    34,     0,
       0,     0,    24,     0,     0,     0,     0,     0,     0,    25,
      26,    27,     0,     0,     0,     0,     0,     0,     0,    28,
      29,     0,    30,     0,     0,    31,     0,     0,     0,    32,
       0,     0,   143,    33,    28,    29,     0,    30,    34,     0,
      31,     0,    24,     0,    32,     0,     0,   152,    33,    25,
      26,    27,     0,    34,     0,     0,     0,    24,     0,     0,
       0,     0,     0,     0,    25,    26,    27,     0,     0,     0,
       0,     0,     0,     0,    28,    29,     0,    30,     0,     0,
      31,     0,     0,     0,    32,     0,     0,   166,    33,    28,
      29,     0,    30,    34,     0,    31,     0,    24,     0,    32,
       0,     0,   175,    33,    25,    26,    27,     0,    34,     0,
       0,     0,    24,     0,     0,     0,     0,     0,     0,    25,
      26,    27,     0,     0,     0,     0,     0,     0,     0,    28,
      29,     0,    30,     0,     0,    31,     0,     0,     0,    32,
       0,     0,   177,    33,    28,    29,     0,    30,    34,     0,
      31,     0,    24,     0,    32,     0,     0,   183,    33,    25,
      26,    27,     0,    34,     0,     0,     0,    24,     0,     0,
       0,     0,     0,     0,    25,    26,    27,     0,     0,     0,
       0,     0,     0,     0,    28,    29,     0,    30,     0,     0,
      31,     0,     0,     0,    32,     0,     0,   184,    33,    28,
      29,     0,    30,    34,     0,    31,     0,    24,     0,    32,
       0,     0,   185,    33,    25,    26,    27,     0,    34,     0,
       0,     0,    24,     0,     0,     0,     0,     0,     0,    25,
      26,    27,     0,     0,     0,     0,     0,     0,     0,    28,
      29,     0,    30,     0,     0,    31,     0,     0,     0,    32,
       0,     0,   186,    33,    28,    29,     0,    30,    34,     0,
      31,     0,    24,     0,    32,     0,     0,   189,    33,    25,
      26,    27,     0,    34,     0,     0,     0,    24,     0,     0,
     153,     0,     0,   153,    25,    26,    27,    25,    26,    27,
      25,    26,    27,     0,    28,    29,     0,    30,     0,     0,
      31,     0,     0,     0,    32,     0,     0,   190,    33,    28,
      29,     0,    30,    34,     0,    31,     0,     0,    31,    32,
       0,    31,    32,    33,     0,    32,    33,   154,    34,    33,
     163,    34,    69,     0,    34,     0,     0,     0,     0,    25,
      26,    27,     0,     0,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,     0,    85,    86,     0,     0,    79,
      80,    81,    82,    83,    84,     0,    85,    86,     0,     0,
      31,     0,     0,     0,    32,    89,    90,    91,    33,     0,
       0,     0,     0,    34,    87,    88,    89,    90,    91,     0,
       0,     0,     0,     0,   120,    79,    80,    81,    82,    83,
      84,     0,    85,    86,     0,     0,    79,    80,    81,    82,
      83,    84,     0,    85,    86,     0,     0,     0,     0,     0,
      87,    88,    89,    90,    91,     0,     0,     0,     0,     0,
     162,    87,    88,    89,    90,    91,     0,     0,     0,     0,
       0,   174,    79,    80,    81,    82,    83,    84,     0,    85,
      86,    79,    80,    81,    82,    83,    84,     0,    85,    86,
       0,     0,     0,     0,     0,     0,     0,    87,    88,    89,
      90,    91,     0,     0,   117,     0,    87,    88,    89,    90,
      91,     0,   148,    79,    80,    81,    82,    83,    84,     0,
      85,    86,    79,    80,    81,    82,    83,    84,     0,    85,
      86,     0,     0,     0,     0,     0,     0,     0,    87,    88,
      89,    90,    91,     0,   157,     0,     0,    87,    88,    89,
      90,    91,    57,    58,    59,    60,    61,     0,     0,    62,
       0,    63,     0,     0,     0,     0,     0,    64,     0,     0,
       0,     0,     0,    65,    79,    80,    81,    82,    83,    84,
       0,    85,    86,    79,    80,    81,    82,    83,    84,     0,
      85
};

static const yytype_int16 yycheck[] =
{
      16,    68,    23,    66,    29,    35,    31,     3,    33,    34,
       8,     9,     3,    45,     0,    47,     8,    47,   142,     3,
       3,    12,     3,     4,   148,     0,     6,    10,    11,    12,
       8,     9,    18,   157,    24,    25,    26,    27,    28,    64,
      46,    31,    67,    33,     5,     8,     9,     8,     9,    39,
      46,     3,    50,    47,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    50,    10,    15,
      16,    39,    50,    19,    20,   142,   139,     3,    99,    49,
      51,   148,    49,    49,    10,    11,    12,     3,     3,   114,
     157,     7,    49,    46,    10,    11,    12,    10,    11,    12,
      48,   117,    53,    24,    25,    26,    27,    28,    52,    50,
      31,    50,    33,    45,   144,    46,   141,    46,    39,    35,
      36,    49,    38,   148,    45,    41,    50,    46,    49,    45,
      53,    53,   157,    49,     3,    37,    50,   167,    54,   169,
      50,    47,   158,    37,   160,    50,   176,    47,   178,   179,
     180,    47,   168,    50,   170,   171,   172,   187,   188,    47,
      47,    47,     3,    47,     5,   181,   182,     8,     9,    10,
      11,    12,    47,    -1,   139,    -1,    -1,     3,    -1,     5,
      -1,    -1,     8,     9,    10,    11,    12,    15,    16,    17,
      18,    19,    20,    -1,    35,    36,    -1,    38,    -1,    -1,
      41,    -1,    -1,    -1,    45,    -1,    -1,    48,    49,    35,
      36,    -1,    38,    54,    -1,    41,    -1,     3,    -1,    45,
      -1,    -1,    -1,    49,    10,    11,    12,    -1,    54,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    45,
      -1,    -1,    48,    49,    35,    36,    -1,    38,    54,    -1,
      41,    -1,     3,    -1,    45,    -1,    -1,    48,    49,    10,
      11,    12,    -1,    54,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    -1,    38,    -1,    -1,
      41,    -1,    -1,    -1,    45,    -1,    -1,    48,    49,    35,
      36,    -1,    38,    54,    -1,    41,    -1,     3,    -1,    45,
      -1,    -1,    48,    49,    10,    11,    12,    -1,    54,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    45,
      -1,    -1,    48,    49,    35,    36,    -1,    38,    54,    -1,
      41,    -1,     3,    -1,    45,    -1,    -1,    48,    49,    10,
      11,    12,    -1,    54,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    -1,    38,    -1,    -1,
      41,    -1,    -1,    -1,    45,    -1,    -1,    48,    49,    35,
      36,    -1,    38,    54,    -1,    41,    -1,     3,    -1,    45,
      -1,    -1,    48,    49,    10,    11,    12,    -1,    54,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    45,
      -1,    -1,    48,    49,    35,    36,    -1,    38,    54,    -1,
      41,    -1,     3,    -1,    45,    -1,    -1,    48,    49,    10,
      11,    12,    -1,    54,    -1,    -1,    -1,     3,    -1,    -1,
       3,    -1,    -1,     3,    10,    11,    12,    10,    11,    12,
      10,    11,    12,    -1,    35,    36,    -1,    38,    -1,    -1,
      41,    -1,    -1,    -1,    45,    -1,    -1,    48,    49,    35,
      36,    -1,    38,    54,    -1,    41,    -1,    -1,    41,    45,
      -1,    41,    45,    49,    -1,    45,    49,    50,    54,    49,
      50,    54,     3,    -1,    54,    -1,    -1,    -1,    -1,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    20,    -1,    22,    23,    -1,    -1,    15,
      16,    17,    18,    19,    20,    -1,    22,    23,    -1,    -1,
      41,    -1,    -1,    -1,    45,    42,    43,    44,    49,    -1,
      -1,    -1,    -1,    54,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    50,    15,    16,    17,    18,    19,
      20,    -1,    22,    23,    -1,    -1,    15,    16,    17,    18,
      19,    20,    -1,    22,    23,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,
      50,    40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    50,    15,    16,    17,    18,    19,    20,    -1,    22,
      23,    15,    16,    17,    18,    19,    20,    -1,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    -1,    -1,    47,    -1,    40,    41,    42,    43,
      44,    -1,    46,    15,    16,    17,    18,    19,    20,    -1,
      22,    23,    15,    16,    17,    18,    19,    20,    -1,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    -1,    46,    -1,    -1,    40,    41,    42,
      43,    44,    24,    25,    26,    27,    28,    -1,    -1,    31,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    45,    15,    16,    17,    18,    19,    20,
      -1,    22,    23,    15,    16,    17,    18,    19,    20,    -1,
      22
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     8,     9,    57,    58,    60,    62,    63,    64,
      65,     8,     3,     4,     3,     0,     6,    67,    46,    47,
       3,    49,    51,    49,     3,    10,    11,    12,    35,    36,
      38,    41,    45,    49,    54,    68,    69,    70,    71,    73,
      74,    76,    77,    58,    48,    58,    61,    68,    39,     8,
       9,    50,    59,    66,    10,    50,    66,    24,    25,    26,
      27,    28,    31,    33,    39,    45,    49,    75,    49,     3,
      76,    49,    76,     3,    76,    76,     7,    69,    46,    15,
      16,    17,    18,    19,    20,    22,    23,    40,    41,    42,
      43,    44,    61,    48,    61,    69,    10,    11,    12,    53,
      50,    52,    50,    76,     3,    10,    11,    12,    50,    77,
      79,    80,    76,     3,    46,    72,    74,    47,     3,    12,
      50,    46,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    46,    66,    78,    50,    53,
      76,    46,    53,    48,    68,    50,    50,    79,    46,    76,
      72,    37,    48,     3,    50,    72,    76,    46,    47,    37,
      47,    50,    50,    50,    72,    76,    48,    68,    47,    68,
      47,    47,    47,    50,    50,    48,    68,    48,    68,    68,
      68,    47,    47,    48,    48,    48,    48,    68,    68,    48,
      48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    58,    58,    59,    59,    60,    60,    60,
      60,    60,    61,    61,    61,    61,    62,    63,    63,    63,
      63,    64,    65,    65,    65,    66,    66,    67,    68,    68,
      69,    69,    69,    69,    69,    69,    70,    70,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      72,    72,    73,    73,    73,    73,    73,    74,    74,    75,
      75,    75,    75,    75,    75,    75,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    77,    78,
      77,    79,    79,    80,    80,    80,    80,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     1,     1,     1,     4,     3,
       1,     1,     1,     1,     2,     2,     2,     5,     4,     5,
       4,     5,     5,     5,     5,     1,     3,     3,     2,     3,
       1,     1,     4,     4,     1,     1,     1,     1,     8,     8,
       7,     7,     7,     6,    11,    11,    10,    10,    10,     9,
       1,     3,     5,     4,     9,     8,     7,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     1,     1,     1,     1,     4,     0,
       4,     1,     3,     1,     1,     1,     1,     1
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
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 63 "angryc.y" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[0].intVal);}
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 67 "angryc.y" /* yacc.c:1646  */
    {nrParams = 0;}
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 68 "angryc.y" /* yacc.c:1646  */
    {nrParams = 0;}
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 79 "angryc.y" /* yacc.c:1646  */
    {AddNewVariable((yyvsp[-1].intVal), (yyvsp[0].strVal)); if (PrgError()) {return -1;}}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 81 "angryc.y" /* yacc.c:1646  */
    {AddNewFunctionWithParameters ((yyvsp[-4].intVal), (yyvsp[-3].strVal)); if (PrgError()) {return -1;}}
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 82 "angryc.y" /* yacc.c:1646  */
    {AddNewFunction ((yyvsp[-3].intVal), (yyvsp[-2].strVal)); if (PrgError()) {return -1;}}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 83 "angryc.y" /* yacc.c:1646  */
    {AddNewFunctionWithParameters ((yyvsp[-4].intVal), (yyvsp[-3].strVal)); if (PrgError()) {return -1;}}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 84 "angryc.y" /* yacc.c:1646  */
    {AddNewFunction ((yyvsp[-3].intVal), (yyvsp[-2].strVal)); if (PrgError()) {return -1;}}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 87 "angryc.y" /* yacc.c:1646  */
    {DeclareVector ((yyvsp[-4].intVal), (yyvsp[-3].strVal), (yyvsp[-1].intVal)); if (PrgError()) {return -1;}}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 89 "angryc.y" /* yacc.c:1646  */
    {AddNewConstant((yyvsp[-3].intVal), (yyvsp[-2].strVal), (yyvsp[0].intVal)); if (PrgError()) {return -1;}}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 90 "angryc.y" /* yacc.c:1646  */
    {AddNewConstant((yyvsp[-3].intVal), (yyvsp[-2].strVal), (yyvsp[0].doubleVal)); if (PrgError()) {return -1;}}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 91 "angryc.y" /* yacc.c:1646  */
    {AddNewConstant((yyvsp[-3].intVal), (yyvsp[-2].strVal), (yyvsp[0].strVal)); if (PrgError()) {return -1;}}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 93 "angryc.y" /* yacc.c:1646  */
    {parameters[nrParams].dataType = (yyvsp[0].intVal); ++nrParams;}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 94 "angryc.y" /* yacc.c:1646  */
    {parameters[nrParams].dataType = (yyvsp[-2].intVal); ++nrParams;}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 105 "angryc.y" /* yacc.c:1646  */
    {Yell ((yyvsp[-1].strVal)); if (PrgError()) {return -1;}}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 106 "angryc.y" /* yacc.c:1646  */
    {YellString ((yyvsp[-1].strVal)); if (PrgError()) {return -1;}}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 120 "angryc.y" /* yacc.c:1646  */
    {/*PANA AICI FARA INSTRUCZTIUNI*/}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 131 "angryc.y" /* yacc.c:1646  */
    {}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 137 "angryc.y" /* yacc.c:1646  */
    {AssignVarValue ((yyvsp[-2].strVal), (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 138 "angryc.y" /* yacc.c:1646  */
    {struct variable var1, rezVar; var1 = GetVariable((yyvsp[-2].strVal)); rezVar = (yyvsp[0].var); rezVar = OperatorFunction (var1, (yyvsp[-1].strVal), rezVar); AssignVarValue (var1.varName, rezVar);}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 140 "angryc.y" /* yacc.c:1646  */
    {strcpy ((yyval.strVal), (yyvsp[0].strVal));}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 141 "angryc.y" /* yacc.c:1646  */
    {strcpy ((yyval.strVal), (yyvsp[0].strVal));}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 142 "angryc.y" /* yacc.c:1646  */
    {strcpy ((yyval.strVal), (yyvsp[0].strVal));}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 143 "angryc.y" /* yacc.c:1646  */
    {strcpy ((yyval.strVal), (yyvsp[0].strVal));}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 144 "angryc.y" /* yacc.c:1646  */
    {strcpy ((yyval.strVal), (yyvsp[0].strVal));}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 145 "angryc.y" /* yacc.c:1646  */
    {strcpy ((yyval.strVal), (yyvsp[0].strVal));}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 146 "angryc.y" /* yacc.c:1646  */
    {strcpy ((yyval.strVal), (yyvsp[0].strVal));}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 149 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), "+", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 150 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), "-", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 151 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), "*", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 152 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var),"/", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 153 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), "%", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 154 "angryc.y" /* yacc.c:1646  */
    {(yyval.var) = (yyvsp[-1].var);}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 155 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = (yyvsp[0].var); (yyval.var).value.intVal=-(yyval.var).value.intVal; (yyval.var).value.doubleVal=-(yyval.var).value.doubleVal;}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 156 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = (yyvsp[0].var); if((yyval.var).value.boolVal==0){(yyval.var).value.boolVal=1;}else{(yyval.var).value.boolVal=0;} }
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 157 "angryc.y" /* yacc.c:1646  */
    {(yyval.var) = OperatorFunction ((yyvsp[-2].var), "&&", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 158 "angryc.y" /* yacc.c:1646  */
    {(yyval.var) = OperatorFunction ((yyvsp[-2].var), "||", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 159 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), "<=", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 160 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), ">=", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 161 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), "==", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 162 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), "!=", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 163 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), "<", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 164 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), ">", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 165 "angryc.y" /* yacc.c:1646  */
    { Incr((yyvsp[0].strVal)); (yyval.var)= GetVariable((yyvsp[0].strVal)); }
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 166 "angryc.y" /* yacc.c:1646  */
    { (yyval.var)=GetVariable((yyvsp[-1].strVal)); Incr((yyvsp[-1].strVal)); }
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 167 "angryc.y" /* yacc.c:1646  */
    {(yyval.var) = GetVariable((yyvsp[0].strVal)); }
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 168 "angryc.y" /* yacc.c:1646  */
    {struct variable tempVar; strcpy (tempVar.varName, "tempVar"); tempVar.value.intVal = (yyvsp[0].intVal); tempVar.dataType = INT_t; tempVar.isInitialized = true; (yyval.var) = tempVar;}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 169 "angryc.y" /* yacc.c:1646  */
    {struct variable tempVar; strcpy (tempVar.varName, "tempVar"); tempVar.value.doubleVal = (yyvsp[0].doubleVal); tempVar.dataType = DOUBLE_t; tempVar.isInitialized = true;  (yyval.var) = tempVar;}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 170 "angryc.y" /* yacc.c:1646  */
    {struct variable tempVar; tempVar.value.stringVal = (char*)malloc (strlen((yyvsp[0].strVal))+1); strcpy (tempVar.varName, "tempVar"); strcpy (tempVar.value.stringVal, (yyvsp[0].strVal)); tempVar.dataType = STRING_t; tempVar.isInitialized = true;  (yyval.var) = tempVar;}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 173 "angryc.y" /* yacc.c:1646  */
    {FunctionCallWithParameters ((yyvsp[-3].strVal)); nrParams = 0; if (PrgError()) {return -1;} (yyval.intVal) = GetFunction((yyvsp[-3].strVal)).dataType;}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 174 "angryc.y" /* yacc.c:1646  */
    {}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 174 "angryc.y" /* yacc.c:1646  */
    {FunctionCallNoParameters ((yyvsp[-3].strVal)); if (PrgError()) {return -1;} (yyval.intVal) = GetFunction((yyvsp[-3].strVal)).dataType;}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 177 "angryc.y" /* yacc.c:1646  */
    {parameters[nrParams] = (yyvsp[0].parameter); ++nrParams;}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 178 "angryc.y" /* yacc.c:1646  */
    {parameters[nrParams] = (yyvsp[-2].parameter); ++nrParams; }
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 181 "angryc.y" /* yacc.c:1646  */
    {struct variable var; var = GetVariable ((yyvsp[0].strVal)); if (PrgError()) {return -1;} strcpy ((yyval.parameter).parName, (yyvsp[0].strVal)); (yyval.parameter).dataType = GetVariable ((yyvsp[0].strVal)).dataType; (yyval.parameter).isFunction = false;}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 182 "angryc.y" /* yacc.c:1646  */
    {(yyval.parameter).dataType = INT_t; (yyval.parameter).isFunction = false;}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 183 "angryc.y" /* yacc.c:1646  */
    {(yyval.parameter).dataType = DOUBLE_t; (yyval.parameter).isFunction = false;}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 184 "angryc.y" /* yacc.c:1646  */
    {(yyval.parameter).dataType = STRING_t; (yyval.parameter).isFunction = false;}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 185 "angryc.y" /* yacc.c:1646  */
    {(yyval.parameter).dataType = (yyvsp[0].intVal); (yyval.parameter).isFunction = true;}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1916 "y.tab.c" /* yacc.c:1646  */
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
#line 187 "angryc.y" /* yacc.c:1906  */

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
