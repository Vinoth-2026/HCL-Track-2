//Read a string and display its length. Convert it to uppercase without using built-in functions.
#include<iostream>
#include<string>
using namespace std;

class String{
    private:
        string str;
        int strlen;
    public:
        String(string str):str(str){}
        void length();
        void toupperCase();
        void print();
};

int main(){
    string str;
    cout<<"Enter String input : ";
    getline(cin,str);
    String obj(str);
    obj.length();
    obj.toupperCase();
    obj.print();
    return 0;
}
void String::length(){
    strlen=str.length();
    cout<<"Length of string : "<<strlen<<endl;
}
void String::toupperCase(){
    for(int i=0;i<strlen;i++){
        if(str[i]>='a')
            str[i]-=32;
    }
}
void String::print(){
    cout<<"String converted to uppercase : "<<str<<endl;
}