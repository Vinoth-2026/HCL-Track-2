//queue implementation
#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;

int isFull();
int isEmpty();
void enqueue(int);
void dequeue();
void frontEle();
void display();

int main(){
    int op;
    while(1){
        printf("\n1.Enqueue\n2.Dequeue\n3.Front\n4.DISPLAY\n5.EXIT\nEnter option:");
        scanf("%d",&op);
        switch(op){
            case 1:
                int e;
                printf("Enter element to enqueue:");
                scanf("%d",&e);
                enqueue(e);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                frontEle();
                break;
            case 4:
                display();
                break;
            default:
                break;
        }
        if(op==5)
        break;
    }
    return 0;
}
int isFull(){
    return rear+1==MAX;
}
int isEmpty(){
    return front==-1;
}
void enqueue(int e){
    if(isFull()){
        printf("Queue overflow.\n");
    }else{
        queue[++rear]=e;
        if(front==-1)
        front=0;
    }
}
void dequeue(){
    if(isEmpty()){
        printf("Queue underflow.\n");
    }else{
        printf("Dequeued element %d.\n",queue[front]);
        front++;
        if(front-1==rear)
        front=rear=-1;
    }
}
void frontEle(){
    if(isEmpty()){
        printf("Queue is empty.\n");
    }else{
        printf("Front element is %d.\n",queue[front]);
    }
}
void display(){
    if(isEmpty()){
        printf("Queue is empty.\n");
    }else{
        printf("Queue element : ");
        for(int i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}
