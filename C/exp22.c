//Write a custom dynamic array (vector) API supporting push(),pop(),resize()
#include<stdio.h>
#include<stdlib.h>
typedef struct Vector{
    int index;
    int* data;
}Vector;

void resize(Vector*v,int newsize){
    int* newData=(int*)realloc(v->data,newsize*sizeof(int));
    if(newData){
        v->data=newData;
    } 
}
void init(Vector*v){
    v->index=-1;
    v->data=(int*)malloc(sizeof(int));
}
void push(Vector*v,int element){
    v->index+=1;
    resize(v,v->index+1);
    v->data[v->index]=element;
}
void pop(Vector*v){
    if(v->index==-1){
        printf("Vector empty.\n");
    }else{
        if(v->index>=0){
            v->index-=1;
            resize(v,v->index);
        }
    }
}
void display(Vector*v){
    printf("Vector element:");
    for(int i=0;i<=v->index;i++)
    printf("%d ",v->data[i]);
    printf("\n");
}
int main(){
    Vector v;
    init(&v);
    int ch=1;
    while(ch!=4){
        printf("1.PUSH\n"
                "2.POP\n"
                "3.DISPLAY\n"
                "4.EXIT\n"
                "Enter your choice:");
        scanf("%d",&ch);
        switch (ch){
        case 1:
            int element;
            printf("Enter element to push:");
            scanf("%d",&element);
            push(&v,element);
            break;
        case 2:
            pop(&v);
            break;
        case 3:
        display(&v);
            break;
        case 4:
            free(v.data);
            break;
        default:
            printf("Invalid option.\n");
            break;
        }
    }
    return 0;
}
