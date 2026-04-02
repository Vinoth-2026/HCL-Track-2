//Implement a queue using two stacks; analyze amortized complexity.
#include<stdio.h>
#define MAX 5
int stack1[MAX],stack2[MAX];
int top1=-1,top2=-1;

void enqueue(int);
void dequeue();
void display();

int main(){
    int ch=1;
    while(ch!=4){
        printf("1.Enqueue\n"
                "2.Dequeue\n"
                "3.Display\n"
                "4.Exit\n"
                "Enter option:");
        scanf("%d",&ch);
        switch (ch){
        case 1:
            int element;
            printf("Enter element to enqueue:");
            scanf("%d",&element);
            enqueue(element);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            printf("Invalid option.\n");
            break;
        }
    }
    return 0;
}
void enqueue(int element){
    if(top1+1==MAX){
        printf("Queue Overflow.\n");
    }else{
        stack1[++top1]=element;
    }
}
void dequeue(){
    if(top1==-1&&top2==-1){
        printf("Queue underflow.\n");
    }else{
        if(top2==-1){
            while(top1!=-1){
                stack2[++top2]=stack1[top1--];
            }
        }
        printf("Dequeued %d.\n",stack2[top2]);
        top2--;
    }
}
void display(){
    if(top1==-1&&top2==-1){
        printf("Queue is empty.\n");
    }else{
        printf("Queue elements:");
        if(top2!=-1){
            for(int i=top2;i>=0;i--)
            printf("%d ",stack2[i]);
        }
        if(top1!=-1){
            for(int i=0;i<=top1;i++)
            printf("%d ",stack1[i]);
        }
        printf("\n");
    }
}