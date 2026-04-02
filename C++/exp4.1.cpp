/*Overload Distance to compute:
•        Between two points (double x1, double y1, double x2, double y2)
•        Between two Point objects
•        Between a Point and the origin (single parameter)*/
#include<iostream>
#include<cmath>
using namespace std;

class Points{
    public:
        double x,y;
        Points(int x,int y):x(x),y(y){}
};
void between2Points(double,double,double,double);
void between2Points(Points*,Points*);
void between2Points(double,double);

int main(){
    Points obj1(3,6),obj2(8,-6);
    between2Points(1,3,-7,-9);
    between2Points(&obj1,&obj2);
    between2Points(12,28);
    return 0;
}
void between2Points(double x1,double y1,double x2,double y2){
    cout<<"Distance "<<sqrt(pow(x2-x1,2)+pow(y2-y1,2))<<endl;
}
void between2Points(Points* obj1,Points* obj2){
    cout<<"Distance "<<sqrt(pow(obj2->x-obj1->x,2)+pow(obj1->y-obj2->y,2))<<endl;
}
void between2Points(double x,double y){
    cout<<"Distance "<<sqrt((x*x)+(y*y))<<endl;
}
