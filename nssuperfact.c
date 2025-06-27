#include<stdio.h>
int main()
{
    int n,i,j,fact,sfact=1;
    printf("enter n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {   fact=1;
        for(int j=1;j<=i;j++)
        {
            fact*=j;
        }
        sfact*=fact;
    }
    printf("superfact number is %d",sfact);
    return 0;
    }