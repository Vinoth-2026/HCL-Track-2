//stack implementation
#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;

int isFull();
int isEmpty();
void push(int);
void pop();
void peek();
void display();

int main(){
    int ch;
    while(1){
        printf("\n1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT\nEnter option:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                int e;
                printf("Enter element to push:");
                scanf("%d",&e);
                push(e);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            default:
                break;
        }
        if(ch==5)
        break;
    }
    return 0;
}

int isFull(){
    return top+1==MAX;
}
int isEmpty(){
    return top==-1;
}
void push(int e){
    if(isFull()){
        printf("Stack Overflow.\n");
    }else{
        stack[++top]=e;
        printf("Element inserted.\n");
    }
}
void pop(){
    if(isEmpty()){
        printf("Stack Underflow.\n");
    }else{
        printf("Element %d poped.\n");
        top--;
    }
}
void peek(){
    if(isEmpty()){
        printf("Stack  is empty.\n");
    }else{
        printf("Peek element is %d\n",stack[top]);
    }
}
void display(){
    if(isEmpty()){
        printf("Stack is empty.\n");
    }else{
        printf("Stack Elements : ");
        for(int i=0;i<=top;i++){
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}