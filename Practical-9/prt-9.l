
%{
#include<stdio.h>
int words=0,lines=0,chars=0;
%}

%%

\n {lines++; chars++;}
[ ] {chars++;}
[a-zA-Z]+ {words++; chars+=yyleng;}
. {chars++;}

%%

int main() {
    yylex();
    printf("Lines=%d Words=%d Characters=%d\n",lines,words,chars);
    return 0;
}
