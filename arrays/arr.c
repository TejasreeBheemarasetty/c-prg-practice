/*combinations using arrays*/
#include<stdio.h>
int main()
{
    char ch;
    int i,j,k,n;
    printf("enter choice of combinations u want 1.single\n2.double\n3.triple\n");
    scanf("%d",&n);
    if(n==1)
    {
       printf("single permutation\n");
       for(ch='A';ch<='E';ch++)
       {
          printf("%c\n",ch);
       }
    }
    else if(n==2)
    {   
        printf("double combinations\n");
        for(i='A';i<='E';i++)
      {
           for(j='A';j<='E';j++)
          {
               printf("%c%c\n",i,j);
          }
      }
    }
    else if(n==3)
    {
         printf("triple combinations");
         for(i='A';i<='E';i++)
        {
            for(j='A';j<='E';j++)
           {
                for(k='A';k<='E';k++)
                {
                   printf("%c%c%c\n",i,j,k);
                }
            }
        }
    }
        else{
            printf("invalid");
        }
 return 0;
}
