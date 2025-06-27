#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
int a;
int b;
printf("enter a");
scanf("%d",&a);
printf("enter b");
scanf("%d",&b);
int min;
int max;
min=((a+b)-abs(a-b))/2;
max=((a+b)+abs(a-b))/2;
printf("\n min %d",min);
printf("\n max %d",max);
}