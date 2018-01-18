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
    BGIN = 261,
    END = 262,
    VAR_DATA_TYPE = 263,
    FUNCTION_DATA_TYPE = 264,
    INTEGER = 265,
    DOUBLE = 266,
    STRING = 267,
    SUM = 268,
    FRACTION = 269,
    MINUS = 270,
    TIMES = 271,
    LW = 272,
    LWE = 273,
    EQ = 274,
    GRE = 275,
    GR = 276,
    FOR = 277,
    IF = 278,
    YELL = 279
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
#define SUM 268
#define FRACTION 269
#define MINUS 270
#define TIMES 271
#define LW 272
#define LWE 273
#define EQ 274
#define GRE 275
#define GR 276
#define FOR 277
#define IF 278
#define YELL 279

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
    struct FunctionResult fRez;

#line 111 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
