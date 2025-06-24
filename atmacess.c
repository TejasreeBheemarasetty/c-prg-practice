/*atm access*/
#include<stdio.h>
int main()
{
    int password=1234;
    int no=12345678;
    int cardno;
    char account="sbi";
    char typeofaccount;
    int pin;
    int balance=5000;
    int withdraw;
    printf("enter card no:");
    scanf("%d",&cardno);
    if(cardno==no)
    {
        printf("enter type of account");
        scanf("%d",&typeofaccount);
        if(typeofaccount==account)
        {
            printf("\nenter pin: ");
            scanf("%d",&pin);
            if(pin==password)
             {
                printf("\nyour account balance is: %d",balance);
                printf("\nenter withdraw amount: ");
                scanf("%d",&withdraw);
                if(withdraw>0 && withdraw<=balance)
                    {
                     printf("\namount  successfully drawn :%d",withdraw);
                     printf("\nremaining balance :%d\n",balance-withdraw);
                     }
                else if(withdraw>balance)
            {
            printf("Insuffiecient balance enter amount less than balance\n");
        }
        else{
            printf("enter amount morethan 0");
        }
    }
    else{
        printf("incorrect pin enter valid pin\n");
    }
    return 0;
}