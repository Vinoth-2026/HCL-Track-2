//In a Rectangle class, ensure width and height are always positive via private members + public setters. Use this in setters to throw or clamp values; demonstrate attempts to violate constraints from main().
#include<iostream>
#include<algorithm>
using namespace std;

class Rectangle{
    private:
        int height;
        int width;
    public:
        ~Rectangle(){}
        void setter(int,int);
        void area();
};

int main(){
    Rectangle obj1,obj2;
    obj1.setter(5,8);
    obj2.setter(-5,4);
    obj1.area();
    obj2.area();
    return 0;
}
void Rectangle::setter(int height,int width){
    this->height=clamp(height,1,1000);  //if negative then sets minimum value
    this->width=clamp(width,1,1000);    
}
void Rectangle::area(){
    cout<<"Area = "<<height*width<<endl;
}