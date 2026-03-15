
#include<stdio.h>

char str[20];
int i=0;

void E();
void E1();

void E() {
    if(str[i]=='i') {
        i++;
        E1();
    }
}

void E1() {
    if(str[i]=='+') {
        i++;
        if(str[i]=='i') {
            i++;
            E1();
        }
    }
}

int main() {
    printf("Enter string: ");
    scanf("%s",str);

    E();

    if(str[i]=='\0')
        printf("Valid string\n");
    else
        printf("Invalid string\n");

    return 0;
}
