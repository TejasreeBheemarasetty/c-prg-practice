#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=n-i;j++)
       {
           printf("  ");
       }
       for(k=1;k<=i;k++)//for(j=1;j<=(2*i-1);j++)
       {
          printf(" * ");
       }
       printf("\n");
    }
    return 0;
}
          