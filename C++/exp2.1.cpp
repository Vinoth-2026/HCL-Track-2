//Create an Order class that owns a collection of line items (IDs and quantities). Provide addLineItem(int id, int qty) and totalItems(); show object creation, modification, and summary printing.
#include<iostream>
#define MAX 10
using namespace std;

class Order{
    private:
        int *id;
        int *quantity;
        int index;
        int size;
    public:
        Order(int n){
            id=new int[n];
            quantity=new int[n];
            index=0;
            size=n;
        }
        ~Order(){
            delete[] id;
            delete[] quantity;
        }
        void addLineItem(int,int);
        void totalItem();
};
int main(){
    int n;
    cout<<"Enter size of order list : ";
    cin>>n;
    Order obj(n);
    obj.addLineItem(1,5);
    obj.addLineItem(2,8);
    obj.addLineItem(3,10);
    obj.addLineItem(4,1);
    obj.totalItem();
    return 0;
}
void Order::addLineItem(int id,int quantity){
    if(index<size){
        this->id[index]=id;
        this->quantity[index++]=quantity;  
    }else{
        cout<<"Size Full.";
    }
}
void Order::totalItem(){
    if(index==0){
        cout<<"No Item";
    }else{
        cout<<"Id\tQuantity"<<endl;
        for(int i=0;i<index;i++){
            cout<<id[i]<<"\t"<<quantity[i]<<endl;
        }
    }
}