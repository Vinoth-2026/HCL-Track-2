//Implement a menu-driven calculator using an array of function pointers.
#include<stdio.h>
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

    func_ptr operations[]={add,sub,mul,div};
    int ch;
    while(1){
        printf("1.ADD\t2.SUB\t3.MUL\t4.DIV\t5.EXIT\n");
        printf("Select operation:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("%d + %d = %d\n",num1,num2,operations[0](num1,num2));
                break;
            case 2:
                printf("%d - %d = %d\n",num1,num2,operations[1](num1,num2));
                break;
            case 3:
                printf("%d * %d = %d\n",num1,num2,operations[2](num1,num2));
                break;
            case 4:
                printf("%d / %d = %d\n",num1,num2,operations[3](num1,num2));
                break;
            case 5:
                printf("Thank you.");
                break;
            default:
                printf("Invalid option");
                break;
        }
        if(ch==5)
        break;
    }
    return 0;
}
int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int mul(int a,int b){return a*b;}
int div(int a,int b){return (b!=0)?a/b:0;}