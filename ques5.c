#include<stdio.h>
#include<math.h>

int main(){
    int num,temp,i,sum=0,digit;
    printf("Enter number:\n");
    scanf("%d",&num);
    temp=num;
    if(num>=100 && num<=999){
        for(i=temp;i>0;i/=10){
            digit=i%10;
            sum=sum+pow(digit,3);
        }
        if(num==sum){
            printf("%d is an Armstrong number.\n",num);
        }
        else{
            printf("%d is not an Armstrong number.\n",num);
        }
    }
    else{
        printf("Incorrect input.\n");
    }
    return 0;
}