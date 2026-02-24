//Create a struct Order containing struct Customer and struct Item. Implement a function to print complete order details.
#include<stdio.h>
#include<string.h>

struct customer{
    int cid;
    char cname[12];
};
struct item{
    int iid;
    int price;
};
typedef struct Order{
    int oid;
    struct customer c; 
    struct item i;
}order;

void display(order o){
    printf("order id : %d\n",o.oid);
    printf("customer id : %d\n",o.c.cid);
    printf("customer name : %s\n",o.c.cname);
    printf("item id : %d\n",o.i.iid);
    printf("item price id : %d\n",o.i.price);
}
int main(){
    order o;
    o.oid=1;
    strcpy(o.c.cname,"vinoth");
    o.i.iid=230;
    o.i.price=499;
    display(o);
    return 0;
}