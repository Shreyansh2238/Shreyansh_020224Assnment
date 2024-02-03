#include<stdio.h>

int main(){
    float currBal, credScore, interest;
    printf("Enter current balance:\n");
    scanf("%f",&currBal);
    printf("Enter credit score:\n");
    scanf("%f",&credScore);

    if(credScore<=600){
        interest= 0.15*credScore;
        printf("calculated interest=%f",interest);
    }
    else if(credScore>600 && credScore<=750){
        interest=0.12*credScore;
        printf("calculated interest=%f",interest);
    }
    else{
        interest=0.1*credScore;
        printf("calculated interest=%f",interest);
    }
    return 0;
}