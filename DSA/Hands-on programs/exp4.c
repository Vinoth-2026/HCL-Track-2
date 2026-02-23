//Given tokens of an RPN expression (e.g., ["2","1","+","3","*"]), use a list as a stack to compute the result.
#include<stdio.h>
#include<ctype.h>

int main(){
    char tokens[100];
    printf("Enter tokens:");
    scanf("%[^\n]s",tokens);
    int stack[100];
    int top=-1;
    int i=0;
    while(tokens[i]!='\0'){
        int number=0;
        if(isdigit(tokens[i])){
            while(isdigit(tokens[i])){
                number=number*10+tokens[i]-'0';
                i++;
            }
            stack[++top]=number;       

        }        
        if(tokens[i]==' '){} 
        else{
            int val1=stack[top--];
            int val2=stack[top--];
            switch(tokens[i]){
                case '+':
                    stack[++top]=val1+val2; break;
                case '-':
                    stack[++top]=val2-val1; break;
                case '*':
                    stack[++top]=val1*val2;break;
                case '/':
                    stack[++top]=val2/val1;break;
                default:
                    break;
            }
        }
        i++;
    }
    printf("The result:%d",stack[0]);
    return 0;
}