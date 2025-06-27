#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter n:");
    scanf("%d",&n);
    int mid=(n+1)/2;
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=n;j++)
       {
          if(j==mid||i==mid)
         {
           printf("* ");
          }
          else{
            printf("  ");
          }
        }
       printf("\n");
    }
    return 0;
}
