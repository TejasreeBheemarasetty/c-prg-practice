#include<stdio.h>
int main()
{
int i,j,n,key,temp,a[100];
printf("enter no of elements: ");
scanf("%d",&n);
printf("The %d elements are: ",n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("Enter the key");
scanf("%d",&key);
for(i=0;i<key;i++){
    temp=a[0];
    for(j=0;j<n-1;j++){
        a[j]=a[j+1];
    }
    a[n-1]=temp;
}
 printf("array after %d left rotation\n",key);
 for(i=0;i<n;i++)
 {
    printf("%d ",a[i]);

 }  
 return 0; 


}