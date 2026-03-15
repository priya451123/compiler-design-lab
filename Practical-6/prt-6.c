
#include<stdio.h>

int main() {
    char stack[20],input[20];
    int top=-1,i=0;

    printf("Enter input string: ");
    scanf("%s",input);

    stack[++top]='$';

    while(input[i]!='\0') {
        stack[++top]=input[i];
        printf("Shift %c\n",input[i]);
        i++;
    }

    printf("Parsing Finished\n");

    return 0;
}
