
#include<stdio.h>

int main() {
    char str[100];
    int vowels=0,digits=0,symbols=0,i;

    printf("Enter string: ");
    gets(str);

    for(i=0;str[i]!='\0';i++) {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            vowels++;
        else if(str[i]>='0' && str[i]<='9')
            digits++;
        else if(!((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')))
            symbols++;
    }

    printf("Vowels=%d\nDigits=%d\nSymbols=%d\n",vowels,digits,symbols);

    return 0;
}
