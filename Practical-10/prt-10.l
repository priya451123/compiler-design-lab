
%{
#include<stdio.h>
%}

%%

[0-9]+      printf("Number: %s\n",yytext);
"<".*">"    printf("HTML Tag: %s\n",yytext);
\n          printf("\n");

%%

int main() {
    yylex();
    return 0;
}
