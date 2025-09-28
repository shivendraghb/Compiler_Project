%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex(void);
void yyerror(const char *s);
%}

%union {
    int integerConstant;
    char *identifier;
}

/* Tokens and their types */
%token <integerConstant> T_IntConstant
%token <identifier> T_Identifier
%token T_For

%%

program:
      statement_list
    ;

statement_list:
      statement_list statement
    | /* empty */
    ;

statement:
      T_For                { printf("Saw 'for'\n"); }
    | T_IntConstant        { printf("Saw int constant: %d\n", $1); }
    | T_Identifier         { printf("Saw identifier: %s\n", $1); free($1); }
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Parse error: %s\n", s);
}

int main(void) {
    return yyparse();
}