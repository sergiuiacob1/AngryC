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
    BGIN = 260,
    END = 261,
    VAR_DATA_TYPE = 262,
    FUNCTION_DATA_TYPE = 263,
    INTEGER = 264,
    STRING = 265,
    ASSIGN = 266,
    SUM = 267,
    FRACTION = 268,
    MINUS = 269,
    TIMES = 270,
    LW = 271,
    LWE = 272,
    EQ = 273,
    GRE = 274,
    GR = 275,
    FOR = 276,
    IF = 277,
    YELL = 278
  };
#endif
/* Tokens.  */
#define ID 258
#define ID_VECTOR 259
#define BGIN 260
#define END 261
#define VAR_DATA_TYPE 262
#define FUNCTION_DATA_TYPE 263
#define INTEGER 264
#define STRING 265
#define ASSIGN 266
#define SUM 267
#define FRACTION 268
#define MINUS 269
#define TIMES 270
#define LW 271
#define LWE 272
#define EQ 273
#define GRE 274
#define GR 275
#define FOR 276
#define IF 277
#define YELL 278

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "angryc.y" /* yacc.c:1909  */

    int intVal;
    struct variable var;
    struct FunctionResult fRez;
    bool boolVal;
    char strVal[MAX_STRVAL];

#line 108 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
