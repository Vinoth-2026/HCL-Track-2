//Reverse an integer (e.g.,12345 -> 54321) and discuss overflow for 32-bit ints.
#include<stdio.h>
#include<limits.h>

int main(){
    int inumber;
    printf("Enter Integer value :");
    scanf("%d",&inumber);
    int reverse=0;
    printf("%d\n",INT_MAX);
    while(inumber!=-0){
        if(reverse>INT_MAX/10||reverse==INT_MAX/10&&inumber%10>7){
            printf("Integer overflow.");
            return 0;
        }
        if(reverse<INT_MIN/10||reverse==INT_MIN/10&&inumber%10>8){
            printf("Integer overflow.");
            return 0;
        }
        reverse=reverse*10+(inumber%10);
        inumber/=10;
    }
    printf("Reverse = %d",reverse);
    return 0;
}