//Write a program in C to check Armstrong and Perfect numbers using the function.
#include<stdio.h>
#include<math.h>

void isArmstring(int);
void isPerfect(int);
int main(){
    int inumber;
    printf("Enter Integer value :");
    scanf("%d",&inumber);
    isArmstrong(inumber);
    isPerfect(inumber);
    return 0;
}
void isArmstrong(int number){
    int temp=number,digits=0;
    while(temp>0){
        temp/=10;
        digits++;
    }
    temp=number;
    int sum=0;
    while(temp>0){
        sum+=pow(temp%10,digits);
        temp/=10;
    }
    if(sum==number){
        printf("It is a Armstrong number.\n");
    }else{
        printf("It is not a Armstrong number.\n");
    }
}
void isPerfect(int number){
    int sum=1;
    for(int i=2;i<number;i++){
        if(number%i==0)
        sum+=i;
    }
    if(sum==number){
        printf("It is a Perfect number.\n");
    }else{
        printf("It is not a Perfect number.\n");
    }
}