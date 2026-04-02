//6.Create a menu-driven program using do-while for repeated user input until exit.
#include<iostream>
using namespace std;

int main(){
    int number1,number2;
    cout<<"Enter value for number 1 & 2 : ";
    cin>>number1>>number2;
    int ch;
    do{
        cout<<"1.ADD\n"
            "2.SUB\n"
            "3.MUL\n"
            "4.DIV\n"
            "5.EXIT\n"
            "Enter option:";
        cin>>ch;
        switch (ch){
        case 1:
            cout<<number1<<" + "<<number2<<" = "<<number1+number2<<endl;
            break;
        case 2:
            cout<<number1<<" - "<<number2<<" = "<<number1-number2<<endl;
            break;
        case 3:
            cout<<number1<<" * "<<number2<<" = "<<number1*number2<<endl;
            break;
        case 4:
            cout<<number1<<" / "<<number2<<" = "<<number1/number2<<endl;
            break;
        case 5:
            break;
        default:
            break;
        }
    }while(ch!=5);
    return 0;
}