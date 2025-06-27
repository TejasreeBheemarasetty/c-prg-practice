/*finding whether the number is vowel or consanant or spl char*/
#include<stdio.h>
int main()
{
    char ch;
    printf("enter letter:");
    scanf("%c",&ch);
    if((ch>='a'&& ch<='z')||ch>='A'&& ch<='Z')
    {
        if(ch =='a'||ch =='e'||ch =="i"||ch =="o"||ch =="u"||ch =='A'||ch =='E'||ch =='I'||ch =='O'||ch =='U')
          printf("Vowel");
        else
          printf("consonant");
    }
    else{
        printf("special character");
    }
    return 0;
}