//Implement a queue using a circular array (ring buffer); demonstrate wrap-around.
#include<stdio.h>
#define MAX 5
int cQueue[MAX];
int front=-1,rear=-1;

int isFull(){
    return (rear+1)%MAX==front;
}
int isEmpty(){
    return front==-1;
}
void enqueue(int element){
    if(isFull()){
        printf("Queue Overflow.\n");
    }else{
        rear=(rear+1)%MAX;
        cQueue[rear]=element;
        if(front==-1)
        front=0;
    }
}
void dequeue(){
    if(isEmpty()){
        printf("Queue Underflow.\n");
    }else{
        printf("Element %d dequeued.\n",cQueue[front]);
        if(front==rear){
            front=-1;
            rear=-1;
        }else
        front=(front+1)%MAX;
    }
}
void display(){
    if(isEmpty()){
        printf("Queue is empty.\n");
    }else{
        printf("Queue element:");
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

int main(){
    int ch=1;
    while(ch!=4){
        printf("1.ENQUEUE\n"
                "2.DEQUEUE\n"
                "3.DISPLAY\n"
                "4.EXIT\n"
                "Enter your choice:");
        scanf("%d",&ch);
        switch (ch){
        case 1:
            int element;
            printf("Enter element:");
            scanf("%d",&element);
            enqueue(element);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        default:
            printf("Invalid option.");
            break;
        }
    }
    return 0;
}