%{
    #include <stdio.h>
    #include <string.h>
    #include "./utils.h"
    
    int yylex();
    int yyerror(const char *);
    bool PrgError();
    
    extern FILE* yyin;
    extern char* yytext;
    extern int yylineno;
%}

%union {
    int intVal;
    double doubleVal;
    bool boolVal;
    char strVal[MAX_STRVAL];
    struct variable var;
    struct FunctionResult fRez;
};

%token ID ID_VECTOR CONST
%token BGIN END
%token VAR_DATA_TYPE FUNCTION_DATA_TYPE
%token INTEGER DOUBLE STRING
%token LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP LS_OP GR_OP DONE
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME 
%token FOR IF ELSE
%token YELL
%start progr

%type<intVal> INTEGER
%type<var> varop
%type<fRez> function_call
%type<intVal> data_type VAR_DATA_TYPE FUNCTION_DATA_TYPE 
%type<strVal> ID ID_VECTOR STRING param_list_function_call param_function_call
%type<strVal> assign_op ADD_ASSIGN AND_ASSIGN MUL_ASSIGN DIV_ASSIGN OR_ASSIGN MOD_ASSIGN SUB_ASSIGN
%type<doubleVal> DOUBLE
//%type<boolVal> varlogop

%left '=' ADD_ASSIGN AND_ASSIGN MUL_ASSIGN DIV_ASSIGN OR_ASSIGN MOD_ASSIGN SUB_ASSIGN
%left '+' '-'
%left '*' '/' '%'
%left OR_OP
%left AND_OP
%left EQ_OP NE_OP
%left LS_OP LE_OP GR_OP GE_OP

%%
progr: declarations programInstructions
     ;

declarations: declaration '!'
	        | declaration '!' declarations
	        ;

data_type: VAR_DATA_TYPE {$$ = $1;}
         | FUNCTION_DATA_TYPE {$$ = $1;}
         ;

declaration: variable_declaration
           | function_declaration
           | vector_declaration
           | const_variable_declaration
           ;

variable_declaration: VAR_DATA_TYPE ID {AddNewVariable($1, $2); if (PrgError()) {return -1;}}

function_declaration: data_type ID '(' paramList ')'
                    | data_type ID '('')'

vector_declaration: VAR_DATA_TYPE ID_VECTOR '[' INTEGER ']' {DeclareVector ($1, $2, $4); if (PrgError()) {return -1;}}

const_variable_declaration: CONST VAR_DATA_TYPE ID '=' INTEGER {AddNewConstant($2, $3, $5); if (PrgError()) {return -1;}}
                          | CONST VAR_DATA_TYPE ID '=' DOUBLE {AddNewConstant($2, $3, $5); if (PrgError()) {return -1;}}
                          | CONST VAR_DATA_TYPE ID '=' STRING {AddNewConstant($2, $3, $5); if (PrgError()) {return -1;}}

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
         | control_statement
         ;

control_statement: if_statement
                 | for_statement
                 ;

for_statement: FOR '(' for_assignments '!' varop '!' varop ')'
             | FOR '(' for_assignments '!' varop '!' for_assignments ')' 
             | FOR '(' for_assignments '!' varop '!' ')'
             | FOR '(' '!' varop '!' varop ')'
             | FOR '(' '!' varop '!' for_assignments ')'
             | FOR '(' '!' varop '!' ')' {/*PANA AICI FARA INSTRUCZTIUNI*/}
             | FOR '(' for_assignments '!' varop '!' varop ')' '{' instructions '}'
             | FOR '(' for_assignments '!' varop '!' for_assignments ')' '{' instructions '}'
             | FOR '(' for_assignments '!' varop '!' ')' '{' instructions '}'
             | FOR '(' '!' varop '!' varop ')' '{' instructions '}'
             | FOR '(' '!' varop '!' for_assignments ')' '{' instructions '}'
             | FOR '(' '!' varop '!' ')' '{' instructions '}'

for_assignments: assignment
               | assignment ',' for_assignments

if_statement: IF varop '{' instructions '}' {}
            | IF varop '{' '}'
            | IF varop '{' instructions '}' ELSE '{' instructions '}'
            | IF varop '{' '}' ELSE '{' instructions '}'
            | IF varop '{' '}' ELSE '{' '}'

assignment: ID '=' varop {AssignVarValue ($1, $3); if (PrgError()) {return -1;}}
          | ID assign_op varop {struct variable var1, rezVar; var1 = GetVariable($1); rezVar = $3; rezVar = OperatorFunction (var1, $2, rezVar); AssignVarValue (var1.varName, rezVar);}

assign_op: ADD_ASSIGN {strcpy ($$, $1);}
         | SUB_ASSIGN {strcpy ($$, $1);}
         | MUL_ASSIGN {strcpy ($$, $1);}
         | DIV_ASSIGN {strcpy ($$, $1);}
         | MOD_ASSIGN {strcpy ($$, $1);}
         | AND_ASSIGN {strcpy ($$, $1);}
         | OR_ASSIGN {strcpy ($$, $1);}
         ;

varop: varop '+' varop { $$ = OperatorFunction ($1, "+", $3); if (PrgError()) {return -1;}}
     | varop '-' varop { $$ = OperatorFunction ($1, "-", $3); if (PrgError()) {return -1;}}
     | varop '*' varop { $$ = OperatorFunction ($1, "*", $3); if (PrgError()) {return -1;}}
     | varop '/' varop { $$ = OperatorFunction ($1,"/", $3); if (PrgError()) {return -1;}}
     | varop '%' varop { $$ = OperatorFunction ($1, "%", $3); if (PrgError()) {return -1;}}
     | '(' varop ')' {$$ = $2;}
     | '-' varop %prec '*'  { $$ = $2; $$.value.intVal=-$$.value.intVal; $$.value.doubleVal=-$$.value.doubleVal;}
     | '~' varop %prec "LS_OP" { $$ = $2; if($$.value.boolVal==0){$$.value.boolVal=1;}else{$$.value.boolVal=0;} }
     | varop AND_OP varop {$$ = OperatorFunction ($1, "&&", $3); if (PrgError()) {return -1;}}
     | varop OR_OP varop {$$ = OperatorFunction ($1, "||", $3); if (PrgError()) {return -1;}}
     | varop LE_OP varop { $$ = OperatorFunction ($1, "<=", $3); if (PrgError()) {return -1;}}
     | varop GE_OP varop { $$ = OperatorFunction ($1, ">=", $3); if (PrgError()) {return -1;}}
     | varop EQ_OP varop { $$ = OperatorFunction ($1, "==", $3); if (PrgError()) {return -1;}}
     | varop NE_OP varop { $$ = OperatorFunction ($1, "!=", $3); if (PrgError()) {return -1;}}
     | varop LS_OP varop { $$ = OperatorFunction ($1, "<", $3); if (PrgError()) {return -1;}}
     | varop GR_OP varop { $$ = OperatorFunction ($1, ">", $3); if (PrgError()) {return -1;}}
     | ID {$$ = GetVariable($1); }
     | INTEGER {;struct variable tempVar; strcpy (tempVar.varName, "tempVar"); tempVar.value.intVal = $1; tempVar.dataType = INT_t; tempVar.isInitialized = true; $$ = tempVar;}
     | DOUBLE {struct variable tempVar; strcpy (tempVar.varName, "tempVar"); tempVar.value.doubleVal = $1; tempVar.dataType = DOUBLE_t; tempVar.isInitialized = true;  $$ = tempVar;}
     | STRING {struct variable tempVar; tempVar.value.stringVal = (char*)malloc (strlen($1)+1); strcpy (tempVar.varName, "tempVar"); strcpy (tempVar.value.stringVal, $1); tempVar.dataType = STRING_t; tempVar.isInitialized = true;  $$ = tempVar;}
     ;

function_call: ID '(' param_list_function_call ')' {$$ = FunctionCallWithParameters ($1, $3);}
             | ID '('')' {}
             ;

param_list_function_call: param_function_call {strcpy ($$, $1);}
                        | param_function_call ',' param_list_function_call {strcpy ($$, $1); strcat ($$, " "); strcat ($$, $3);}
                        ;

param_function_call: ID {strcpy ($$, $1); }
                   | INTEGER {CopyNumberToString ($$, $1);}

%%
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