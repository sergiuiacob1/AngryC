%{
    #include <stdio.h>
    #include <string.h>
    #include "./utils.h"
    
    int yylex();
    int yyerror(char *);
    bool PrgError();
    
    extern FILE* yyin;
    extern char* yytext;
    extern int yylineno;
%}

%union {
    int intVal;
    struct variable var;
    struct FunctionResult fRez;
    bool boolVal;
    char strVal[MAX_STRVAL];
};

%token ID ID_VECTOR
%token BGIN END
%token VAR_DATA_TYPE FUNCTION_DATA_TYPE
%token INTEGER STRING
%token ASSIGN
%token SUM FRACTION MINUS TIMES LW LWE EQ GRE GR
%token FOR IF
%token YELL
%start progr

%type<intVal> INTEGER
%type<var> varop
%type<fRez> function_call
%type<intVal> data_type VAR_DATA_TYPE FUNCTION_DATA_TYPE 
%type<strVal> ID ID_VECTOR STRING param_list_function_call param_function_call
//%type<boolVal> varlogop

%left SUM FRACTION MINUS TIMES LW LWE EQ GRE GR

%%
progr: declarations programInstructions
     ;

declarations: declaration '!'
	        | declaration '!' declarations
	        ;

data_type: VAR_DATA_TYPE {$$ = $1;}
         | FUNCTION_DATA_TYPE {$$ = $1;}
         ;

declaration: data_type ID {AddNewVariable($1, $2); if (PrgError()) {return -1;}}
           | function_declaration
           | vector_declaration
           ;

vector_declaration: VAR_DATA_TYPE ID_VECTOR '[' INTEGER ']' {DeclareVector ($1, $2, $4); if (PrgError()) {return -1;}}

function_declaration: data_type ID '(' paramList ')'
                    | data_type ID '('')'

paramList : data_type
          | data_type ',' paramList 
          ;

programInstructions : BGIN instructions END  
     ;
     
instructions :  statement '!' 
     | instructions statement '!'
     ;

statement: assignment
         | function_call
         | YELL '(' ID ')' {Yell ($3); if (PrgError()) {return -1;}}
         | YELL '(' STRING ')' {YellString ($3); if (PrgError()) {return -1;}}
         ;

assignment: ID ASSIGN ID
         | ID ASSIGN INTEGER {CheckAssign ($1, $3); if (PrgError ()) {return -1;} AssignValue ($1, $3);}
         | ID ASSIGN varop {AssignVarValue ($1, $3);}
         ;


varop: ID SUM ID { $$ = OperatorFunction ($1, "+", $3); if (PrgError()) {return -1;}}
     | ID MINUS ID { $$ = OperatorFunction ($1, "-", $3); if (PrgError()) {return -1;}}
     | ID TIMES ID { $$ = OperatorFunction ($1, "*", $3); if (PrgError()) {return -1;}}
     | ID FRACTION ID { $$ = OperatorFunction ($1,"/", $3); if (PrgError()) {return -1;}}
     ;

function_call: ID '(' param_list_function_call ')' {$$ = FunctionCallWithParameters ($1, $3);}
             | ID '('')' {}
             ;

param_list_function_call: param_function_call {strcpy ($$, $1);}
                        | param_function_call ',' param_list_function_call {strcpy ($$, $1); strcat ($$, " "); strcat ($$, $3);}
                        ;

param_function_call: ID {strcpy ($$, $1); }
                   | INTEGER {CopyNumberToString ($$, $1);}
       
//varlogop: ID LW ID {  $$ = LogicOperatorFunction ($1, "<", $3) if (PrgError()) {return -1;}}
//		;

%%
bool PrgError(){
    if (haveError){
        yyerror(errorMessage);
        return true;
    }
    return false;
}

int yyerror(char * s){
    printf("eroare: %s la linia: %d\n", s, yylineno);
}

int main(int argc, char** argv){
    yyin=fopen(argv[1],"r");
    yyparse();
} 