// Given a string of brackets like ""({[]})"", use a list as a stack to determine if the string is balanced.
#include<stdio.h>

int main(){
    char bracket[100];
    printf("Enter string:");
    scanf("%s",bracket);

    char stack[50];
    int top=-1;
    int i=0;
    int flag=1;

    while(bracket[i]!='\0'){
        char current=bracket[i];
        if(current=='('||current=='['||current=='{')
        stack[++top]=current;
        else{
            if(top==-1){flag=0;}
            if((stack[top]=='('&&current==')')||
                (stack[top]=='['&&current==']')||
                (stack[top]=='{'&&current=='}'))
                top--;
            else{
                flag=0;
                break;
            }
        }
        i++;
    }
    if(flag)printf("Balanced.");
    else printf("Imbalance.");
    return 0;
}