/*ATM ACCESS WORKSHOP*/
#include<stdio.h>
int main(){
    int pincode=1234;
    int entered_pin,balance=5000,withdraw;
    printf("Enter pincode:\n");
    scanf("%d",&entered_pin);
    if(entered_pin==pincode){
        printf("verified\n");
        printf("Enter amount to be withdraw\n");
        scanf("%d",&withdraw);
        if(withdraw<=balance)
        {
            balance=balance-withdraw;
            printf("Balance amount:%d\n",balance);
        }
        else{
            printf("insufficient Balance\n");
            }
    }
    else{
        printf("Invalid pin\n");
    }
    return 0;
}