/*cyclic swap through using only arithmetic operator*/
#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter a:\n");
    scanf("%d",&a);
    printf("enter b: \n");
    scanf("%d",&b);
    printf("enter c: \n");
    scanf("%d",&c);
    printf("Before swap\n");
    printf("\na:%d",a);
    printf("\nb: %d",b);
     printf("\nc: %d",c);
    a=a+b+c;
    b=a-b-c;
    c=a-b-c;
    a=a-b-c;
    printf("After swap\n");
    printf("\na:%d",a);
    printf("\nb: %d",b);
    printf("\nc: %d",c);
return 0;
}