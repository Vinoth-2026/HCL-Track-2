//Determine if an input year is a leap year using only conditional operators.
#include<stdio.h>

int main(){
    int iyear;
    printf("Enter Year : ");
    scanf("%d",&iyear);
    ((iyear%4==0&&iyear%100!=0)||(iyear%400==0))?printf("It is a leap year."):printf("It is not a leap year.");    
    return 0;
}