/*login system with paramater access*/
#include<stdio.h>
#include<string.h>
int main()
{
    char username[10],password[10];
    printf("Enter username:");
    scanf("%s",&username);
    printf("Enter password:");
    scanf("%s",&password);
    if(strcmp(username,"Admin")==0){
        if(strcmp(password,"1234")==0){
            printf("Successfully accessed");
        }else{
            printf("Wrong password");
        }
    } else{
        printf("Wrong username");
    }
    return 0;
}