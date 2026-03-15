
#include<stdio.h>
#include<string.h>

int main() {
    char user[20],pass[20];

    printf("Enter Username: ");
    scanf("%s",user);

    printf("Enter Password: ");
    scanf("%s",pass);

    if(strlen(pass)<8)
        printf("Password too short\n");
    else
        printf("Username and Password accepted\n");

    return 0;
}
