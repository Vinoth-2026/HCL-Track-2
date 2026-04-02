//Define an enum Status with values PENDING, SHIPPED, DELIVERED. Write a program to update and display order status using the enum.
#include<stdio.h>

enum Status{PENDING=-1, SHIPPED=0, DELIVERED=1};

enum Status update(enum Status);
void display(enum Status);

int main(){
    enum Status order=PENDING;
    display(order);
    order=update(order);
    display(order);
    order=update(order);
    display(order);
    return 0;
}
enum Status update(enum Status s){
    switch(s){
        case PENDING:
            s=SHIPPED;
            break;
        case SHIPPED:
            s=DELIVERED;
            break;
        default:
        break;
    }
    return s;
}
void display(enum Status s){
    switch (s)
    {
    case PENDING:
        printf("Order status is Pending\n");
        break;
    case SHIPPED:
        printf("Order status is Shipped\n");
        break;
    case DELIVERED:
        printf("Order status is Delivered\n");
        break;
    default:
        break;
    }
}