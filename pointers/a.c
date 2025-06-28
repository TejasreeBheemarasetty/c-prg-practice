#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    printf("value of a:%d\n",a);
    printf("address:%d\n",&a);
    printf("value of p:%d\n",p);
    printf("address:%d\n",*p);
return 0;
}