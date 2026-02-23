//alloc-dm-for-struc-item-array-based-on-user-input-implement-add-and-delete-safely
#include<stdio.h>
#include<stdlib.h>
struct item{
    int id;
    char name[24];
};

int main(){
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    struct item *item=(struct item*)malloc(n*sizeof(struct item));
    for(int i=0;i<n;i++){
        printf("Enter item id:");
        scanf("%d",item->id);
        printf("Enter item name:");
        scanf("  %[^\n]s",item->name);
    }
}