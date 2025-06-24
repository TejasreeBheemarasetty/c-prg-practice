// /*candies jar having n capacity it can have sales in such a way that the jar is not empty there will be always k remains where k<=5,n=10  test cases:sales=0 invalid input*/
#include<stdio.h>
int main()
{
    int n=10;
    int k=5;
    int s;
    printf("");
    scanf("%d",&s);
    if(s>0&&s<=5)
    {
        printf("NUMBER OF CANDIES SOLD %d\n",s);
        printf("NUMBER OF CANDIES LEFT %d\n",n-s);
    }
    else{
        printf("INVALID INPUT\n");
                printf("NUMBER OF CANDIES LEFT %d\n",n);

    }
    return 0;
}