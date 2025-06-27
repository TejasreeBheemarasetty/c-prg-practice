#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
       for(j=0;j<=n-1-i;j++)
       {
           printf("  ");
       }
       int value=1;
       for(j=0;j<=i;j++)
       {
          printf(" %d  ",value);
          value=(value*(i-j))/(j+1);
       }
       printf("\n");
    }
    return 0;
}
          