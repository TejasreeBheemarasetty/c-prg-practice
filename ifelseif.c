/*basic implementation of conditional stmts*/
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter marks");
    scanf("%d",&marks);
    if(marks>=98)
    {
        printf("Excellent");
    
    }
    else if(marks>=35)
    {
        printf("pass");
    }
    else{
        printf("Fail");
    }
    return 0;
}