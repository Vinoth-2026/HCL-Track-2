//Print the first N Fibonacci numbers iteratively; then re-implement recursively.
#include<stdio.h>

int fibonacci(int n){
    if(n==1)
    return 0;
    else  if(n==2)
    return 1;
    else
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int iterm=5;
    printf("Enter N'th term :");
    scanf("%d",&iterm);
    if(iterm<=0)
    return 0;
    printf("Fibonacci numbers : ");
    for(int i=1;i<=iterm;i++)
    printf("%d ",fibonacci(i));
    return 0;
}