/*0 0 7 6 14 12 21 18....*/
#include<stdio.h>
int  main()
{
    int n,six=0,seven=0;
    printf("enter no:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            seven+=7;
        }
        else{
            six+=6;
        }
    }
    if(n%2!=0)
        {
            printf("%d term of series %d \t",n,seven-7);
        }
        else{
            printf("%d term of series %d \t",n,seven-7);

        }
        return 0;
}