/*sorting using lexcio graph*/
#include<stdio.h>
#include<string.h>
int main()
{ 
              //size(i) no of wordss(j)
    char words[100][100];
    int i,j,k,n;
    char temp[20];
    printf("enter no of words to enter");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter word %d: ",i+1);
        scanf("%s",&words[i]);
    }
    for(i=0;i<n-1;i++)
    {
       for(j=i+1;j<n;j++)//j=0 then descendingng order
       {
            if(strcmp(words[i],words[j])>0)
        {
                int k=0;
                while(words[i][k]!='\0'||words[j][k]!='\0')
            {
                    temp[k]=words[i][k];
                    words[i][k]=words[j][k];
                    words[j][k]=temp[k];
                    k++;
            }
        }
       }
    }
    printf("sorted in lexciographical order:\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",words[i]);
    }
    return 0;

}