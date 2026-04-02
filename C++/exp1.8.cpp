//8.Create a structure Order containing another structure Customer. Display complete order details.
#include<iostream>
using namespace std;

typedef struct Customer{
    int customerId;
    string cName;
}Customer;

struct Order{
    int orderId;
    int price;
    Customer customer;
    
};
class Display{
    public:
        void display(Order*);
};
int main(){
    Order order={1,100,50102,"vinoth"};
    Display obj;
    obj.display(&order);
    return 0;
}
void Display::display(Order* o){
    cout<<"Order Id : "<<o->orderId<<endl;
    cout<<"Order price : "<<o->price<<endl;
    cout<<"Customer Id : "<<o->customer.customerId<<endl;
    cout<<"Customer Name : "<<o->customer.cName<<endl;
}