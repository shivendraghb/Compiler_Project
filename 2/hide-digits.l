%{
#include<stdio.h>
%}

%%
[0-9]+  printf("?");
.       ECHO;
%%

int yywrap(void) {
    return 1;
}

int main(void) {
    yylex();
    return 0;
}