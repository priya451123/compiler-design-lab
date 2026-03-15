#include<stdio.h>
#include<ctype.h>

int main() {
    char ch;
    FILE *fp;
    int keywords=0, identifiers=0, numbers=0;

    fp=fopen("input.txt","r");

    while((ch=fgetc(fp))!=EOF) {
        if(isalpha(ch))
            identifiers++;
        else if(isdigit(ch))
            numbers++;
    }

    printf("Identifiers: %d\n",identifiers);
    printf("Numbers: %d\n",numbers);

    fclose(fp);
    return 0;
}
