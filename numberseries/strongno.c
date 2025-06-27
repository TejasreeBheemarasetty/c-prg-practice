/* strong number or krishnamurthy number */
#include<stdio.h>
int main()
{
    int num;
    int sum=0;
    int temp,digit,fact;
    printf("enter n: ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        digit=temp%10;
        fact=1;
        for(int i=1;i<=digit;i++)
        {
            fact*=i;
        }
        sum+=fact;
        temp/=10;
    }
    if(num==sum)
    {
      printf("%d is   strong number ",num);
    }
    else{
        printf("%d is  not strong number",num);
    }
  return 0; 

}