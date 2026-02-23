//linked list implementation
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head;

void insertB(int);
void insertP(int,int);
void insertE(int);
void deleteB();
void deleteP(int);
void deleteE();
void display();
void find(int);

int main(){
    int op;
    while(1){
        printf( "1.Insert at start\t"
                "2.Insert at position\t"
                "3.Insert at end\n"
                "4.Delete at start\t"
                "5.Delete at middle\t"
                "6.Delete at end\n"
                "7.Display\n"
                "8.Find\n"
                "9.Exit\n"
                "Enter option:");
        scanf("%d",&op);
        switch(op){
            case 1:{
                int e;
                printf("Enter element to add:");
                scanf("%d",&e);
                insertB(e);
                break;}
            case 2:{
                int e,p;
                printf("Enter element to add:");
                scanf("%d",&e);
                printf("Enter position to add:");
                scanf("%d",&p);
                insertP(e,p);
                break;}
            case 3:{
                int e;
                printf("Enter element to add:");
                scanf("%d",&e);
                insertE(e);
                break;}
            case 4:
                deleteB();
                break;
            case 5:{
                int e;
                printf("Enter element to delete:");
                scanf("%d",&e);
                deleteP(e);
                break;}
            case 6:
                deleteE();
                break;
            case 7:
                display();
                break;
            case 8:{
                int e;
                printf("Enter element to search:");
                scanf("%d",&e);
                find(e);
                break;}
            default:
                break;
        }
        if(op==9)
        break;
    }
    return 0;
}

void insertB(int data){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;    
    newNode->next=head;
    head=newNode;    
}
void insertP(int data,int pos){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    if(head==NULL){
        
    }
}
void insertE(int data){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
    }else{
        struct Node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
}
void deleteB(){}
void deleteP(int){}
void deleteE(){}
void display(){
    if(head==NULL){
        printf("List is empty.\n");
    }else{
        struct Node* temp=head;
        while(temp!=NULL){
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("NULL\n");
    }
}
void find(int){}