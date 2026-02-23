// Compute the factorial of n using an iterative loop; handle n=0 correctly.
#include<stdio.h>

int main(){
    int inum;
    printf("Enter Integer value :");
    scanf("%d",&inum);
    printf("Factorial is ");
    if(inum<0){
        printf("Undefined.");
    }else if(inum<=1){
        printf("1");
    }else{
        unsigned int ifactorial=1;
        for(int i=2;i<=inum;i++)
        ifactorial*=i;
        printf("%d",ifactorial);
    }
    return 0;
}