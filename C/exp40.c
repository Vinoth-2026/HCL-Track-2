//Use a stack to check balanced parentheses/brackets in an expression.
#include<stdio.h>
#include<string.h>
#define MAX 20
int main(){
    char parentheses[MAX];
    printf("Enter parantheses express:");
    scanf(" %[^\n]s",parentheses);
    int l=strlen(parentheses);

    if(l<=0)
    return 0;

    char stack[MAX];
    int top=-1;
    int flag=1;
    
    for(int i=0;i<l;i++){
        char current=parentheses[i];
        if(current=='('||current=='['||current=='{')
            stack[++top]=current;
        else{
            if((top!=-1)&&(stack[top]+1==current||stack[top]+2==current))
                top--;
            else{
                flag=0;
                break;
            }
        }
    }
    if(flag==0||top>-1)
    printf("Expression is imbalanced.");
    else
    printf("Expression is balanced.");
    return 0;
}