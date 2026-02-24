//Implement a calculator using an array of function pointers for operations (+, -, *, /). Allow user to select operation at runtime.
#include<stdio.h>
int add(int num1,int num2){return num1+num2;}
int sub(int num1,int num2){return num1-num2;}
int mul(int num1,int num2){return num1*num2;}
int div(int num1,int num2){if(num2==0) return 0; return num1/num2;}

int main(){
    typedef int (*func_ptr)(int,int);
    func_ptr operation[]={add,sub,mul,div};
    int number1,number2;
    printf("Enter two numbers:");
    scanf("%d %d",&number1,&number2);
    int ch;
    printf("1.ADD\n2.SUB\n3.MUL\n4.div\n");
    printf("Enter choice:");
    scanf("%d",&ch);
    if(ch>=1&&ch<=4)
    printf("Result = %d",operation[ch-1](number1,number2));
    else
    printf("Invalid option.");
    return 0;
}