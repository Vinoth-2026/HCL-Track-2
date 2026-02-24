/*"Define a struct Product with price and discount. Write two functions:
One that calculates discounted price (call by value).
Another that updates the price in the original structure (call by address).*/
#include<stdio.h>
typedef struct Product{
    int price;
    int discount;
}Product;
void calculateDiscount(Product p){
    printf("Discounted price : %d\n",(p.price*p.discount)/100);
}
void updatePrice(Product* p,int newPrice){
    p->price=newPrice;
    printf("Price updated.\n");
}
void display(Product* p){
    printf("Product price : %d\n",p->price);
    printf("Product discount : %d\n",p->discount);
}
int main(){
    Product p;
    printf("Enter Product price=");
    scanf("%d",&p.price);
    printf("Enter Product discount=");
    scanf("%d",&p.discount);
    calculateDiscount(p);
    int  new;
    printf("Enter new price=");
    scanf("%d",&new);
    updatePrice(&p,new);
    display(&p);
    return 0;
}
