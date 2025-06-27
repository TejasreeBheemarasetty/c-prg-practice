/*finding the frequency of numbers in a array*/
#include<stdio.h>
int main()
{
int i,j,n,no,arr[100];
int count=0;
printf("enter no of elements: ");
scanf("%d",&n);
printf("The %d elements are: ",n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
printf("enter the no to find freqency of\n");
scanf("%d",&no);
for(i=0;i<n;i++)
{
    if(arr[i]==no)
    {
        count++;
    }
    

}

printf("the freqency of %d is %d",no,count);
return 0;
}
