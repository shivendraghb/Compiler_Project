%{
#include<stdio.h>
#include<stdlib.h>

// Forward declaration of yylex (provided by flex)
int yylex(void);

// Error handler (just declaration here)
void yyerror(const char *s);
%}

%token HELLO    /* declare HELLO token */

%%
input:
    HELLO   { printf("Hello, World!\n"); exit(0); }
;
%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main(void) {
    return yyparse();
}