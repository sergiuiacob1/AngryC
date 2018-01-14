%{
#include <stdio.h>
#include "utils.h"
#include "y.tab.h"
%}

number 0|[1-9][0-9]*
letter [a-zA-Z_]
varId [_]*{letter}+{number}*

%%
"int"|"float"|"char"|"string" {yylval.intVal = SetDataType (yytext); return VAR_DATA_TYPE;}
"void" {yylval.intVal = SetDataType (yytext); return FUNCTION_DATA_TYPE;}
"START_ALREADY!" {return BGIN;}
"ARE_WE_DONE_YET?!" {return END;}
"+" {return SUM;}
"-" {return MINUS;}
"*" {return TIMES;}
"/" {return FRACTION;}
"<" {return LW;}
"<=" {return LWE;}
"==" {return EQ;}
">=" {return GRE;}
">" {return GR;}
"=" {return ASSIGN;}
"for" {return FOR;}
"if" {return IF;}
{varId} {if (strcmp (yytext, "yell")==0) {REJECT;} strcpy (yylval.strVal, yytext); return ID;}
{varId}[ \t]*\[ {ExtractVectorName(yylval.strVal, yytext); if (strcmp (yylval.strVal, "yell")==0) {REJECT;} yyless (yyleng - 1); return ID_VECTOR; }
{number} {yylval.intVal = atoi(yytext); return INTEGER;}
"yell" {return YELL;}
["][^"]*["] {strcpy (yylval.strVal, yytext + 1); yylval.strVal [strlen(yylval.strVal) - 1] = 0; return STRING;}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}
