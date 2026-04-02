//5.Demonstrate AND, OR, XOR, and shift operations on two integers.
#include<iostream>
using namespace std;

int main(){
    int number1,number2;
    cout<<"Enter value for number 1 & 2 : ";
    cin>>number1>>number2;
    
    cout<<number1<<" AND "<<number2<<" = "<<(number1&number2)<<endl;
    cout<<number1<<" OR "<<number2<<" = "<<(number1|number2)<<endl;
    cout<<number1<<" XOR "<<number2<<" = "<<(number1^number2)<<endl;
    cout<<number1<<" << "<<number2<<" = "<<(number1<<number2)<<endl;
    cout<<number1<<" >> "<<number2<<" = "<<(number1>>number2)<<endl;
    return 0;
}