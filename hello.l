%{
#include "hello.tab.h"                      //Declarations
%}

%%                                          //Defintions
hello   { return HELLO; }
[ \t\n] ;       /* ignore newlines */       //Rules
.       ;
%%

int yywrap(void) {                          //User subroutines
    return 1;
}