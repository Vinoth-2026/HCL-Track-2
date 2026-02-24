//Create and use a function pointer to select different arithmetic operations at runtime.
#include<stdio.h>

int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);

typedef int(*func_ptr)(int,int);

int main(){
    int num1,num2;
    printf("Enter number1 value :");
    scanf("%d",&num1);
    printf("Enter number2 value :");
    scanf("%d",&num2);

    func_ptr operations;
    int ch;
    while(1){
        printf("1.ADD\t2.SUB\t3.MUL\t4.DIV\t5.EXIT\n");
        printf("Select operation:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                operations=add;
                break;
            case 2:
                operations=sub;
                break;
            case 3:
                operations=mul;
                break;
            case 4:
                operations=div;
                break;
            case 5:
                printf("Thank you.");
                break;
            default:
                printf("Invalid option");
                break;
        }
        printf("Result=%d\n",operations(num1,num2));
        if(ch==5)
        break;
    }
    return 0;
}
int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int mul(int a,int b){return a*b;}
int div(int a,int b){return (b!=0)?a/b:0;}