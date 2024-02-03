#include<stdio.h>

int main(){
    int age,tPrice;
    printf("\nEnter age of the person:");
    scanf("%d",&age);
    if(age<5){
        tPrice=0;
        printf("The ticket price for a %d  year old is %d.\n",age,tPrice);
    }
    else if(age>=5 && age<=12){
        tPrice=20;
        printf("The ticket price for a %d  year old is %d.\n",age,tPrice);
    }
    else if(age>12 && age<60){
        tPrice=50;
        printf("The ticket price for a %d  year old is %d.\n",age,tPrice);
    }
    else{
        tPrice=40;
        printf("The ticket price for a %d  year old is %d.\n",age,tPrice);
    }
    return 0;
}