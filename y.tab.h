/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 15 "angryc.y" /* yacc.c:1909  */

    int intVal;
    double doubleVal;
    bool boolVal;
    char strVal[MAX_STRVAL];
    struct variable var;
    Parameter parameter;

#line 143 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
