/* menu hospital 1.patient ,2 bill,3 exit */
#include<stdio.h>
int main(){;
int choice,patient_count=0,age,disease_code;
float bill,total_bill=0;
do {
    printf("\n -------Hospital Menu-------\n");
    printf("1. Add patient \n");
    printf("2. View TotalBill \n");
    printf("3. Exit \n");
    printf("Enter your choice:");
    scanf("%d", &choice);
    if(choice==1){
        patient_count++;
        printf("Enter the patient age :");
        scanf("%d",&age);
        printf("Enter the disease type :");
        printf("1. Fever \n");
        printf("2. Infection \n");
        printf("3. Surgery \n");
        printf("Enter the disease code of (1-3) : ");
        scanf("%d",&disease_code);
        printf("Enter the estimated bill : ");
        scanf("%f",&bill);
        if(disease_code==1)
        {
            printf("Disease fever \n");
        }
        else if(disease_code==2)
        {
            printf("Disease infection \n");
        }
        else if(disease_code==3)
        {
            printf("Disease surgery \n");
        }
        else{
            printf("Invalid code enter between (1-3)");
        }
    total_bill+=bill;
    printf("patient added successfully");
    }
    else if(choice==2)
    {
    printf("\ntotal patients:%d\n",patient_count);
        printf("Total hospital bill:%.2f \n",total_bill);
    }
    else if(choice==3)
    {
        printf("Exiting system,Thank you \n");
    }
    else{
        printf("Invalid choice,Try again!!!");
    }
    }
while (choice!=3);
  return 0;
}
