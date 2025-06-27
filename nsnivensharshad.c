/*niven or harshad number  where the sum of digits should divide the original no */
#include<stdio.h>
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int sum=0;
    int temp=n;
    while(n!=0)
    {
        sum+=n%10;
        n=n/10;
    }
    if(temp%sum==0)
    {
      printf("%d is niven number ",temp);
    }
    else{
        printf("%d is not a niven number",temp);
    }
  return 0; 

}