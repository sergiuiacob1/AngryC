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
    YELL = 294,
    PLSPLS = 295
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
#define YELL 294
#define PLSPLS 295

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

#line 209 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 226 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   805

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  209

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,     2,     2,    45,     2,     2,
      50,    51,    43,    41,    54,    42,     2,    44,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    40,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    53,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,     2,    49,    55,     2,     2,     2,
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
      35,    36,    37,    38,    39,    46,    56
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    55,    55,    58,    59,    62,    63,    66,    67,    68,
      69,    70,    71,    74,    77,    78,    79,    80,    83,    85,
      86,    87,    88,    91,    93,    94,    95,    97,    98,   101,
     103,   104,   107,   108,   109,   110,   111,   112,   113,   116,
     117,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   133,   134,   136,   137,   138,   139,   140,
     141,   143,   144,   145,   148,   149,   150,   151,   152,   153,
     154,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   181,   182,   182,   185,   186,   189,   190,
     191,   192,   193
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
  "FOR", "IF", "ELSE", "YELL", "'='", "'+'", "'-'", "'*'", "'/'", "'%'",
  "PLSPLS", "'!'", "'{'", "'}'", "'('", "')'", "'['", "']'", "','", "'~'",
  "\"LS_OP\"", "$accept", "progr", "declarations", "data_type",
  "declaration", "struct_declaration", "function_instructions",
  "variable_declaration", "function_declaration", "vector_declaration",
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
      61,    43,    45,    42,    47,    37,   295,    33,   123,   125,
      40,    41,    91,    93,    44,   126,   296
};
# endif

#define YYPACT_NINF -75

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-75)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      43,    -1,     8,    16,    26,    33,    32,     3,   -75,   -75,
      -2,   -75,   -75,    72,    29,    31,    36,    47,   -75,   514,
     -75,    43,    80,    68,    43,    25,   103,    27,   722,    63,
     -75,   -75,   -75,    70,     1,    74,     1,   115,     1,     1,
     171,    81,   -75,   -75,   -75,   -75,   692,   -75,   -75,   -75,
     100,    78,   100,    61,    85,   -75,   -75,   -75,    84,    89,
      88,   -75,    94,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       1,   -75,    19,     1,   136,    24,   102,   618,    13,   773,
     -75,   560,   692,   -75,   104,   -75,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,   -75,
     -75,   -75,   106,   -75,   -75,   -75,   -75,    45,   -75,   -75,
     -75,   692,   108,   -75,   -75,   -75,   -75,   -75,   105,   107,
     692,   113,   748,     1,   112,   119,   183,   116,   124,   126,
     -75,   -75,   -75,   -75,    79,    79,   -75,   -75,   228,   782,
     701,   701,   773,   773,   773,   -75,   -75,   -75,   -75,    12,
     138,   651,     1,    98,   147,   224,   -75,   177,   -75,   -75,
       1,   517,   660,   -75,   141,   152,   139,   692,   172,   143,
     142,   571,   520,   239,   154,   158,   514,   155,   157,   163,
     164,   607,   -75,   279,   294,   -75,   334,   514,   514,   514,
     166,   168,   -75,   -75,   349,   -75,   389,   404,   444,   514,
     514,   -75,   -75,   -75,   -75,   459,   499,   -75,   -75
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,    12,     7,
       0,    10,    11,     0,     0,    18,     0,     0,     1,     0,
       2,     3,     0,     0,     0,     0,     0,     0,    89,     0,
      90,    91,    92,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    37,    40,    39,    32,    38,    33,     4,     9,
      15,     0,    14,     0,     0,     5,     6,    22,    27,     0,
       0,    20,     0,    66,    67,    68,    64,    65,    69,    70,
       0,    88,     0,     0,     0,     0,    89,     0,     0,    77,
      87,     0,    78,    29,     0,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    17,
       8,    16,     0,    24,    25,    26,    13,     0,    21,    23,
      19,    61,    98,    99,   100,   101,    94,   102,     0,    96,
      62,     0,     0,     0,     0,    53,     0,     0,     0,     0,
      76,    31,    81,    82,    83,    84,    85,    86,    79,    80,
      71,    72,    73,    74,    75,    30,    28,    95,    93,     0,
       0,     0,     0,     0,    56,     0,    34,     0,    35,    97,
       0,     0,     0,    54,     0,    55,     0,    63,    89,    46,
       0,     0,     0,     0,     0,     0,     0,    45,    44,    43,
       0,     0,    60,     0,     0,    36,     0,     0,     0,     0,
      42,    41,    58,    59,     0,    52,     0,     0,     0,     0,
       0,    57,    51,    50,    49,     0,     0,    48,    47
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -75,   -75,    21,   -75,   -75,   -75,   -12,   -75,   -75,   -75,
     -75,   -25,   -75,   -19,   -34,   -75,   -75,   -28,   -75,   -74,
     -75,   -29,   -69,   -75,    75,   -75
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,    50,    58,     7,     8,    51,     9,    10,    11,
      12,    59,    20,    52,    41,    42,    43,   124,    44,    45,
      73,    46,    47,   147,   118,   119
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      40,   125,    62,   117,    76,    77,    84,    79,    13,    81,
      82,    14,    30,    31,    32,   112,   127,   128,   102,    15,
      16,     6,   112,   113,   114,   115,   129,   122,    29,    17,
     113,   114,   115,    18,    55,    56,    55,    56,    99,    19,
     101,   111,    48,    36,   120,    54,    22,    37,     1,     2,
      21,    38,     3,     4,    55,    56,    39,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     116,   123,   103,   104,   105,    23,    57,    24,    61,   125,
     117,    25,   146,    28,    29,     1,     2,   125,    26,     3,
       4,    30,    31,    32,   151,    86,    87,    27,   125,    90,
      91,   122,    29,    28,    29,     1,     2,   155,    53,     3,
       4,    30,    31,    32,    60,    74,    33,    34,    80,    35,
      75,    84,    36,   162,    78,   163,    37,   100,    85,    49,
      38,   167,   171,   170,   106,    39,    33,    34,   107,    35,
     108,   109,    36,   181,   180,   110,    37,   121,    71,    84,
      38,   131,    84,   145,   183,    39,   148,   186,    72,   152,
      84,   149,    84,    84,    84,   194,   150,   156,   196,   197,
     198,    84,    84,   153,    28,    29,   157,   158,   160,    83,
     205,   206,    30,    31,    32,   164,    28,    29,   166,   173,
     174,   176,   175,   177,    30,    31,    32,    63,    64,    65,
      66,    67,   184,   187,    68,   188,    69,    33,    34,   185,
      35,   189,    70,    36,   199,   190,   200,    37,    71,    33,
      34,    38,    35,     0,   159,    36,    39,    28,    29,    37,
       0,     0,   154,    38,     0,    30,    31,    32,    39,     0,
       0,     0,    28,    29,    86,    87,    88,    89,    90,    91,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     0,
      33,    34,     0,    35,     0,     0,    36,     0,     0,     0,
      37,     0,     0,   165,    38,    33,    34,     0,    35,    39,
       0,    36,    28,    29,     0,    37,     0,     0,   182,    38,
      30,    31,    32,     0,    39,     0,     0,    28,    29,     0,
       0,     0,     0,     0,     0,    30,    31,    32,     0,     0,
       0,     0,     0,     0,     0,    33,    34,     0,    35,     0,
       0,    36,     0,     0,     0,    37,     0,     0,   192,    38,
      33,    34,     0,    35,    39,     0,    36,    28,    29,     0,
      37,     0,     0,   193,    38,    30,    31,    32,     0,    39,
       0,     0,    28,    29,     0,     0,     0,     0,     0,     0,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     0,
      33,    34,     0,    35,     0,     0,    36,     0,     0,     0,
      37,     0,     0,   195,    38,    33,    34,     0,    35,    39,
       0,    36,    28,    29,     0,    37,     0,     0,   201,    38,
      30,    31,    32,     0,    39,     0,     0,    28,    29,     0,
       0,     0,     0,     0,     0,    30,    31,    32,     0,     0,
       0,     0,     0,     0,     0,    33,    34,     0,    35,     0,
       0,    36,     0,     0,     0,    37,     0,     0,   202,    38,
      33,    34,     0,    35,    39,     0,    36,    28,    29,     0,
      37,     0,     0,   203,    38,    30,    31,    32,     0,    39,
       0,     0,    28,    29,     0,     0,     0,     0,     0,     0,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     0,
      33,    34,     0,    35,     0,     0,    36,     0,     0,     0,
      37,     0,     0,   204,    38,    33,    34,     0,    35,    39,
       0,    36,    28,    29,     0,    37,     0,     0,   207,    38,
      30,    31,    32,     0,    39,     0,     0,    28,    29,     0,
     168,    29,     0,   168,    29,    30,    31,    32,    30,    31,
      32,    30,    31,    32,     0,    33,    34,     0,    35,     0,
       0,    36,     0,     0,     0,    37,     0,     0,   208,    38,
      33,    34,     0,    35,    39,     0,    36,     0,     0,    36,
      37,     0,    36,    37,    38,     0,    37,    38,   169,    39,
      38,   179,    39,     0,     0,    39,    86,    87,    88,    89,
      90,    91,     0,    92,    93,     0,     0,    86,    87,    88,
      89,    90,    91,     0,    92,    93,     0,     0,     0,     0,
       0,    94,    95,    96,    97,    98,     0,     0,     0,     0,
       0,   130,    94,    95,    96,    97,    98,     0,     0,     0,
       0,     0,   178,    86,    87,    88,    89,    90,    91,     0,
      92,    93,     0,     0,    86,    87,    88,    89,    90,    91,
       0,    92,    93,     0,     0,     0,     0,     0,    94,    95,
      96,    97,    98,     0,     0,     0,     0,     0,   191,    94,
      95,    96,    97,    98,     0,     0,   126,    86,    87,    88,
      89,    90,    91,     0,    92,    93,    86,    87,    88,    89,
      90,    91,     0,    92,    93,     0,     0,     0,     0,     0,
       0,     0,    94,    95,    96,    97,    98,     0,   161,     0,
       0,    94,    95,    96,    97,    98,     0,   172,    86,    87,
      88,    89,    90,    91,     0,    92,    93,    86,    87,    88,
      89,    90,    91,     0,    92,    93,     0,     0,     0,     0,
       0,     0,     0,    94,    95,    96,    97,    98,     0,     0,
       0,     0,     0,     0,    96,    97,    98,    63,    64,    65,
      66,    67,     0,     0,    68,     0,    69,     0,     0,     0,
       0,     0,    70,     0,     0,     0,     0,     0,    71,     0,
       0,     0,    72,    63,    64,    65,    66,    67,     0,     0,
      68,     0,    69,     0,     0,     0,     0,     0,    70,    86,
      87,    88,    89,    90,    91,     0,    92,    93,    86,    87,
      88,    89,    90,    91,     0,    92
};

static const yytype_int16 yycheck[] =
{
      19,    75,    27,    72,     3,    34,    40,    36,     9,    38,
      39,     3,    11,    12,    13,     3,     3,     4,    52,     3,
       4,     0,     3,    11,    12,    13,    13,     3,     4,     3,
      11,    12,    13,     0,     9,    10,     9,    10,    50,     7,
      52,    70,    21,    42,    73,    24,    48,    46,     5,     6,
      47,    50,     9,    10,     9,    10,    55,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      51,    47,    11,    12,    13,     3,    51,    48,    51,   153,
     149,    50,   107,     3,     4,     5,     6,   161,    52,     9,
      10,    11,    12,    13,   123,    16,    17,    50,   172,    20,
      21,     3,     4,     3,     4,     5,     6,   126,    40,     9,
      10,    11,    12,    13,    11,    52,    36,    37,     3,    39,
      50,   155,    42,   152,    50,   153,    46,    49,    47,    49,
      50,   160,   161,   161,    49,    55,    36,    37,    54,    39,
      51,    53,    42,   172,   172,    51,    46,    11,    46,   183,
      50,    47,   186,    47,   173,    55,    51,   176,    50,    47,
     194,    54,   196,   197,   198,   184,    53,    51,   187,   188,
     189,   205,   206,    54,     3,     4,    52,    51,    40,     8,
     199,   200,    11,    12,    13,    38,     3,     4,    11,    48,
      38,    48,    53,    51,    11,    12,    13,    25,    26,    27,
      28,    29,    48,    48,    32,    48,    34,    36,    37,    51,
      39,    48,    40,    42,    48,    51,    48,    46,    46,    36,
      37,    50,    39,    -1,   149,    42,    55,     3,     4,    46,
      -1,    -1,    49,    50,    -1,    11,    12,    13,    55,    -1,
      -1,    -1,     3,     4,    16,    17,    18,    19,    20,    21,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,
      46,    -1,    -1,    49,    50,    36,    37,    -1,    39,    55,
      -1,    42,     3,     4,    -1,    46,    -1,    -1,    49,    50,
      11,    12,    13,    -1,    55,    -1,    -1,     3,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    37,    -1,    39,    -1,
      -1,    42,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,
      36,    37,    -1,    39,    55,    -1,    42,     3,     4,    -1,
      46,    -1,    -1,    49,    50,    11,    12,    13,    -1,    55,
      -1,    -1,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,
      46,    -1,    -1,    49,    50,    36,    37,    -1,    39,    55,
      -1,    42,     3,     4,    -1,    46,    -1,    -1,    49,    50,
      11,    12,    13,    -1,    55,    -1,    -1,     3,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    37,    -1,    39,    -1,
      -1,    42,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,
      36,    37,    -1,    39,    55,    -1,    42,     3,     4,    -1,
      46,    -1,    -1,    49,    50,    11,    12,    13,    -1,    55,
      -1,    -1,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,
      46,    -1,    -1,    49,    50,    36,    37,    -1,    39,    55,
      -1,    42,     3,     4,    -1,    46,    -1,    -1,    49,    50,
      11,    12,    13,    -1,    55,    -1,    -1,     3,     4,    -1,
       3,     4,    -1,     3,     4,    11,    12,    13,    11,    12,
      13,    11,    12,    13,    -1,    36,    37,    -1,    39,    -1,
      -1,    42,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,
      36,    37,    -1,    39,    55,    -1,    42,    -1,    -1,    42,
      46,    -1,    42,    46,    50,    -1,    46,    50,    51,    55,
      50,    51,    55,    -1,    -1,    55,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    -1,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    -1,    -1,    -1,    -1,
      -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,    51,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    51,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    -1,    -1,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    -1,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    51,    41,
      42,    43,    44,    45,    -1,    -1,    48,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    44,    45,    -1,    47,    -1,
      -1,    41,    42,    43,    44,    45,    -1,    47,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    45,    25,    26,    27,
      28,    29,    -1,    -1,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    50,    25,    26,    27,    28,    29,    -1,    -1,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    40,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    16,    17,
      18,    19,    20,    21,    -1,    23
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     9,    10,    58,    59,    61,    62,    64,
      65,    66,    67,     9,     3,     3,     4,     3,     0,     7,
      69,    47,    48,     3,    48,    50,    52,    50,     3,     4,
      11,    12,    13,    36,    37,    39,    42,    46,    50,    55,
      70,    71,    72,    73,    75,    76,    78,    79,    59,    49,
      59,    63,    70,    40,    59,     9,    10,    51,    60,    68,
      11,    51,    68,    25,    26,    27,    28,    29,    32,    34,
      40,    46,    50,    77,    52,    50,     3,    78,    50,    78,
       3,    78,    78,     8,    71,    47,    16,    17,    18,    19,
      20,    21,    23,    24,    41,    42,    43,    44,    45,    63,
      49,    63,    71,    11,    12,    13,    49,    54,    51,    53,
      51,    78,     3,    11,    12,    13,    51,    79,    81,    82,
      78,    11,     3,    47,    74,    76,    48,     3,     4,    13,
      51,    47,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    47,    68,    80,    51,    54,
      53,    78,    47,    54,    49,    70,    51,    52,    51,    81,
      40,    47,    78,    74,    38,    49,    11,    78,     3,    51,
      74,    78,    47,    48,    38,    53,    48,    51,    51,    51,
      74,    78,    49,    70,    48,    51,    70,    48,    48,    48,
      51,    51,    49,    49,    70,    49,    70,    70,    70,    48,
      48,    49,    49,    49,    49,    70,    70,    49,    49
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    59,    60,    60,    61,    61,    61,
      61,    61,    61,    62,    63,    63,    63,    63,    64,    65,
      65,    65,    65,    66,    67,    67,    67,    68,    68,    69,
      70,    70,    71,    71,    71,    71,    71,    71,    71,    72,
      72,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    74,    74,    75,    75,    75,    75,    75,
      75,    76,    76,    76,    77,    77,    77,    77,    77,    77,
      77,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    79,    80,    79,    81,    81,    82,    82,
      82,    82,    82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     1,     1,     1,     4,     3,
       1,     1,     1,     5,     1,     1,     2,     2,     2,     5,
       4,     5,     4,     5,     5,     5,     5,     1,     3,     3,
       2,     3,     1,     1,     4,     4,     7,     1,     1,     1,
       1,     8,     8,     7,     7,     7,     6,    11,    11,    10,
      10,    10,     9,     1,     3,     5,     4,     9,     8,     8,
       7,     3,     3,     6,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     1,
       1,     1,     1,     4,     0,     4,     1,     3,     1,     1,
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
        case 5:
#line 62 "angryc.y" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[0].intVal);}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 63 "angryc.y" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[0].intVal);}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 67 "angryc.y" /* yacc.c:1646  */
    {nrParams = 0;}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 68 "angryc.y" /* yacc.c:1646  */
    {nrParams = 0;}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 74 "angryc.y" /* yacc.c:1646  */
    {AddNewStruct ((yyvsp[-3].strVal)); if (PrgError()) {return -1;}}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 83 "angryc.y" /* yacc.c:1646  */
    {AddNewVariable((yyvsp[-1].intVal), (yyvsp[0].strVal)); if (PrgError()) {return -1;}}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 85 "angryc.y" /* yacc.c:1646  */
    {AddNewFunctionWithParameters ((yyvsp[-4].intVal), (yyvsp[-3].strVal)); if (PrgError()) {return -1;}}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 86 "angryc.y" /* yacc.c:1646  */
    {AddNewFunction ((yyvsp[-3].intVal), (yyvsp[-2].strVal)); if (PrgError()) {return -1;}}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 87 "angryc.y" /* yacc.c:1646  */
    {AddNewFunctionWithParameters ((yyvsp[-4].intVal), (yyvsp[-3].strVal)); if (PrgError()) {return -1;}}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 88 "angryc.y" /* yacc.c:1646  */
    {AddNewFunction ((yyvsp[-3].intVal), (yyvsp[-2].strVal)); if (PrgError()) {return -1;}}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 91 "angryc.y" /* yacc.c:1646  */
    {DeclareVector ((yyvsp[-4].intVal), (yyvsp[-3].strVal), (yyvsp[-1].intVal)); if (PrgError()) {return -1;}}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 93 "angryc.y" /* yacc.c:1646  */
    {AddNewConstant((yyvsp[-3].intVal), (yyvsp[-2].strVal), (yyvsp[0].intVal)); if (PrgError()) {return -1;}}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 94 "angryc.y" /* yacc.c:1646  */
    {AddNewConstant((yyvsp[-3].intVal), (yyvsp[-2].strVal), (yyvsp[0].doubleVal)); if (PrgError()) {return -1;}}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 95 "angryc.y" /* yacc.c:1646  */
    {AddNewConstant((yyvsp[-3].intVal), (yyvsp[-2].strVal), (yyvsp[0].strVal)); if (PrgError()) {return -1;}}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 97 "angryc.y" /* yacc.c:1646  */
    {parameters[nrParams].dataType = (yyvsp[0].intVal); ++nrParams;}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 98 "angryc.y" /* yacc.c:1646  */
    {parameters[nrParams].dataType = (yyvsp[-2].intVal); ++nrParams;}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 109 "angryc.y" /* yacc.c:1646  */
    {Yell ((yyvsp[-1].strVal)); if (PrgError()) {return -1;}}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 110 "angryc.y" /* yacc.c:1646  */
    {YellString ((yyvsp[-1].strVal)); if (PrgError()) {return -1;}}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 111 "angryc.y" /* yacc.c:1646  */
    {YellVec((yyvsp[-4].strVal), (yyvsp[-2].intVal)); if (PrgError()) {return -1;}}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 125 "angryc.y" /* yacc.c:1646  */
    {/*PANA AICI FARA INSTRUCZTIUNI*/}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 136 "angryc.y" /* yacc.c:1646  */
    {}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 143 "angryc.y" /* yacc.c:1646  */
    {AssignVarValue ((yyvsp[-2].strVal), (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 144 "angryc.y" /* yacc.c:1646  */
    {struct variable var1, rezVar; var1 = GetVariable((yyvsp[-2].strVal)); rezVar = (yyvsp[0].var); rezVar = OperatorFunction (var1, (yyvsp[-1].strVal), rezVar); AssignVarValue (var1.varName, rezVar);}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 145 "angryc.y" /* yacc.c:1646  */
    { AssignVectorValue((yyvsp[-5].strVal), (yyvsp[-3].intVal), (yyvsp[0].var)); if (PrgError()) {return -1;} }
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 148 "angryc.y" /* yacc.c:1646  */
    {strcpy ((yyval.strVal), (yyvsp[0].strVal));}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 149 "angryc.y" /* yacc.c:1646  */
    {strcpy ((yyval.strVal), (yyvsp[0].strVal));}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 150 "angryc.y" /* yacc.c:1646  */
    {strcpy ((yyval.strVal), (yyvsp[0].strVal));}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 151 "angryc.y" /* yacc.c:1646  */
    {strcpy ((yyval.strVal), (yyvsp[0].strVal));}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 152 "angryc.y" /* yacc.c:1646  */
    {strcpy ((yyval.strVal), (yyvsp[0].strVal));}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 153 "angryc.y" /* yacc.c:1646  */
    {strcpy ((yyval.strVal), (yyvsp[0].strVal));}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 154 "angryc.y" /* yacc.c:1646  */
    {strcpy ((yyval.strVal), (yyvsp[0].strVal));}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 157 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), "+", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 158 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), "-", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 159 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), "*", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 160 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var),"/", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 161 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), "%", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 162 "angryc.y" /* yacc.c:1646  */
    {(yyval.var) = (yyvsp[-1].var);}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 163 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = (yyvsp[0].var); (yyval.var).value.intVal=-(yyval.var).value.intVal; (yyval.var).value.doubleVal=-(yyval.var).value.doubleVal;}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 164 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = (yyvsp[0].var); if((yyval.var).value.boolVal==0){(yyval.var).value.boolVal=1;}else{(yyval.var).value.boolVal=0;} }
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 165 "angryc.y" /* yacc.c:1646  */
    {(yyval.var) = OperatorFunction ((yyvsp[-2].var), "&&", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 166 "angryc.y" /* yacc.c:1646  */
    {(yyval.var) = OperatorFunction ((yyvsp[-2].var), "||", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 167 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), "<=", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 168 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), ">=", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 169 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), "==", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 170 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), "!=", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 171 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), "<", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 172 "angryc.y" /* yacc.c:1646  */
    { (yyval.var) = OperatorFunction ((yyvsp[-2].var), ">", (yyvsp[0].var)); if (PrgError()) {return -1;}}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 173 "angryc.y" /* yacc.c:1646  */
    { Incr((yyvsp[0].strVal)); (yyval.var)= GetVariable((yyvsp[0].strVal)); }
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 174 "angryc.y" /* yacc.c:1646  */
    { (yyval.var)=GetVariable((yyvsp[-1].strVal)); Incr((yyvsp[-1].strVal)); }
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 175 "angryc.y" /* yacc.c:1646  */
    {(yyval.var) = GetVariable((yyvsp[0].strVal)); }
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 176 "angryc.y" /* yacc.c:1646  */
    {struct variable tempVar; strcpy (tempVar.varName, "tempVar"); tempVar.value.intVal = (yyvsp[0].intVal); tempVar.dataType = INT_t; tempVar.isInitialized = true; (yyval.var) = tempVar;}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 177 "angryc.y" /* yacc.c:1646  */
    {struct variable tempVar; strcpy (tempVar.varName, "tempVar"); tempVar.value.doubleVal = (yyvsp[0].doubleVal); tempVar.dataType = DOUBLE_t; tempVar.isInitialized = true;  (yyval.var) = tempVar;}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 178 "angryc.y" /* yacc.c:1646  */
    {struct variable tempVar; tempVar.value.stringVal = (char*)malloc (strlen((yyvsp[0].strVal))+1); strcpy (tempVar.varName, "tempVar"); strcpy (tempVar.value.stringVal, (yyvsp[0].strVal)); tempVar.dataType = STRING_t; tempVar.isInitialized = true;  (yyval.var) = tempVar;}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 181 "angryc.y" /* yacc.c:1646  */
    {FunctionCallWithParameters ((yyvsp[-3].strVal)); nrParams = 0; if (PrgError()) {return -1;} (yyval.intVal) = GetFunction((yyvsp[-3].strVal)).dataType;}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 182 "angryc.y" /* yacc.c:1646  */
    {}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 182 "angryc.y" /* yacc.c:1646  */
    {FunctionCallNoParameters ((yyvsp[-3].strVal)); if (PrgError()) {return -1;} (yyval.intVal) = GetFunction((yyvsp[-3].strVal)).dataType;}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 185 "angryc.y" /* yacc.c:1646  */
    {parameters[nrParams] = (yyvsp[0].parameter); ++nrParams;}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 186 "angryc.y" /* yacc.c:1646  */
    {parameters[nrParams] = (yyvsp[-2].parameter); ++nrParams; }
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 189 "angryc.y" /* yacc.c:1646  */
    {struct variable var; var = GetVariable ((yyvsp[0].strVal)); if (PrgError()) {return -1;} strcpy ((yyval.parameter).parName, (yyvsp[0].strVal)); (yyval.parameter).dataType = GetVariable ((yyvsp[0].strVal)).dataType; (yyval.parameter).isFunction = false;}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 190 "angryc.y" /* yacc.c:1646  */
    {(yyval.parameter).dataType = INT_t; (yyval.parameter).isFunction = false;}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 191 "angryc.y" /* yacc.c:1646  */
    {(yyval.parameter).dataType = DOUBLE_t; (yyval.parameter).isFunction = false;}
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 192 "angryc.y" /* yacc.c:1646  */
    {(yyval.parameter).dataType = STRING_t; (yyval.parameter).isFunction = false;}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 193 "angryc.y" /* yacc.c:1646  */
    {(yyval.parameter).dataType = (yyvsp[0].intVal); (yyval.parameter).isFunction = true;}
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1944 "y.tab.c" /* yacc.c:1646  */
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
#line 195 "angryc.y" /* yacc.c:1906  */

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
