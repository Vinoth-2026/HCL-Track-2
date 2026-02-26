//Allocate memory dynamically for struct Item array based on user input size. Implement add and delete operations safely.
#include<stdio.h>
#include<stdlib.h>

typedef struct Item{
    int* id;
    int* qantity;
    int size;
    int index;
}Item;
void init(Item* i,int size){
    i->index=-1;
    i->size=size;
    i->id=(int*)malloc(size*sizeof(int));
    i->qantity=(int*)malloc(size*sizeof(int));
}
void add(Item* i,int id,int quantity){
    if(i->index+1==i->size){
        printf("List is Full.\n");
        return;
    }
    i->index+=1;
    i->id[i->index]=id;
    i->qantity[i->index]=quantity;
}
void delete(Item* i){
    if(i->index==-1){
        printf("No Item in present.\n");
    }else{
        i->index-=1;
    }
}
void display(Item* i){
    printf("Item list\nId\tQuantity\n");
    for(int j=0;j<=i->index;j++){
        printf("%d\t%d\n",i->id[j],i->qantity[j]);
    }
    printf("\n");
}
int main(){
    int n;
    printf("Enter size of list:");
    scanf("%d",&n);
    Item item;
    init(&item,n);
    n=1;
    while(n!=4){
        printf("1.ADD\n"
                "2.DELETE\n"
                "3.DISPLAY\n"
                "4.EXIT\n"
                "Enter your choice:");
        scanf("%d",&n);
        switch (n){
            case 1:
                int id,quantity;
                printf("Enter item id:");
                scanf("%d",&id);
                printf("Enter quantity:");
                scanf("%d",&quantity);
                add(&item,id,quantity);
                break;
            case 2:
                delete(&item);
                break;
            case 3:
                display(&item);
                break;
            case 4:
                free(item.id);
                free(item.qantity);
                break;
            default:
                printf("Invalid option.\n");
                break;
        }
    }
    return 0;
}