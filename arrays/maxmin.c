#include<stdio.h>
int main(){
    int arr[10];
    int n;
    printf("enter no items:\n");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
      printf("%d",arr[i]);
    }
    return 0;
}