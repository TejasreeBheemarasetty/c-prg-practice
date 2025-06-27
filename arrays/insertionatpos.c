#include<stdio.h>
int main()
{
    int a[100],n,pos,value,i;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("\nenter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("entr position to insert:");
    scanf("%d",&pos);
    printf("enter value to insert:");
    scanf("%d",&value);
    for(i=n;i>pos;i--)
    {
        a[i]=a[i-1];

    }
    a[pos]=value;
    n++;
    printf("after insert operation:");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}