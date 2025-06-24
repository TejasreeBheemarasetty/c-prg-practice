/*normal swap through using only arithmetic operator*/
#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter a:\n");
    scanf("%d",&a);
    printf("enter b: \n");
    scanf("%d",&b);
    printf("Before swap\n");
    printf("\na:%d",a);
    printf("\nb: %d",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap\n");
    printf("\na:%d",a);
    printf("\nb: %d",b);
return 0;
}