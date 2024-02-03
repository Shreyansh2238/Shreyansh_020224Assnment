#include<stdio.h>

int main(){
    float num1,num2; int choice;
    printf("\nEnter a number:");
    scanf("%f",&num1);
    printf("\nEnter another number:");
    scanf("%f",&num2);
    printf("\nEnter the operation you wish to perform:Press 1 for +, 2 for -, 3 for *, 4 for /:");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            printf("\nThe result is=%f",num1+num2);
            break;
        case 2:
            printf("\nThe result is=%f",num1-num2);
            break;
        case 3:
            printf("\nThe result is=%f",num1*num2);
            break;
        case 4:
            printf("\nThe result is=%f  ",num1/num2);
            break;
    }
    return 0;
}