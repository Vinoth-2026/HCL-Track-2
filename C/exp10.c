//Check if a number is prime; then optimize by checking up to sqrt(n)
#include<stdio.h>
#include<math.h>

int isPrime(int);
int main(){
    int inumber;
    printf("Enter Integer value :");
    scanf("%d",&inumber);    
    if(isPrime(inumber)) printf("It is a Prime number.");
    else printf("It is not a prime number.");
    return 0;
}
int isPrime(int number){
    if(number<=1){
        return 0;
    }
    for(int i=2;i<=sqrt(number);i++){
        if(number%i==0)
            return 0;
    }
    return 1;
}