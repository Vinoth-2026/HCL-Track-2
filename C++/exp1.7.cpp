//7.Write a function to swap two integers using pointers.
#include<iostream>
using namespace std;

class Swap{
    public:
        void swap(int*,int*);
};
int main(){
    int number1,number2;
    cout<<"Enter value for number 1 & 2 : ";
    cin>>number1>>number2;
    Swap obj;
    obj.swap(&number1,&number2);
    cout<<"After swap\nnumber 1 = "<<number1<<"  number 2 ="<<number2;
    return 0;
}

void Swap::swap(int*i,int*j){
    int temp=*i;
    *i=*j;
    *j=temp;
}