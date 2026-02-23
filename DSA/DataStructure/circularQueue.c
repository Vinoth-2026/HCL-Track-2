#include<stdio.h>
#define MAX 5
int front=-1,rear=-1;
int cQueue[MAX];

void enqueue(int data);
void dequeue();
void display();
int isFull();
int isEmpty();

int main(){
    int ch;
    while(1){
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nEnter your choice:");
        scanf("%d",&ch);
        switch (ch){
            case 1:
                int e;
                printf("Enter new element:");
                scanf("%d",&e);
                enqueue(e);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            default:
                break;
        }
        if(ch==4)
        break;
    }   
    return 0;
}
int isFull(){
    return (rear+1)%MAX==front;    
}
int isEmpty(){
    return rear==-1;
}
void enqueue(int data){
    if(!isFull()){
        rear=(rear+1)%MAX;
        cQueue[rear]=data;
        if(front==-1) front=0;
        printf("Inserted successfully.\n");
    }else{
        printf("Queue is Full.");
    }
}
void dequeue(){
    if(isEmpty()){
        printf("Queue is Empty.");
    }else{
        printf("Element %d is dequeued.",cQueue[front]);
        if(front==rear){
            front=rear=-1;
        }else{
            front=(front+1)%MAX;
        }
    }
}
void display(){
    if(isEmpty()){
        printf("Queue is Empty.");
    }else{
        printf("Queue elements:");
        int i=front;
        while(1){
            printf("%d ",cQueue[i]);
            if(i==rear)
            break;
            i=(i+1)%MAX;
        }
        printf("\n");
    }
}
