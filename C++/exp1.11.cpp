//11.	Write a recursive function to calculate the factorial of a number and compare with iterative approach."
#include<iostream>
using namespace std;

class Factorial{
    public:
        int factorial(int);
};

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    if(n<0){
        cout<<"Factorial Undefined.";
        return 0;
    }
    Factorial obj;
    cout<<"Factorial = "<<obj.factorial(n);
    return 0;
}

int Factorial::factorial(int n){
    if(n<=1)
        return 1;
    else
        return n*factorial(n-1);    
}
