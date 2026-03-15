#include<stdio.h>
#include<string.h>

int main() {
    char stack[20],input[20];
    int top=-1,i=0;

    printf("Enter string: ");
    scanf("%s",input);

    stack[++top]='$';
    stack[++top]='E';

    while(top>=0) {
        printf("Stack top: %c\n",stack[top]);
        top--;
    }

    printf("Parsing completed\n");

    return 0;
}
