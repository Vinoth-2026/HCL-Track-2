/*Create strong types for Meters, Seconds, and MetersPerSecond. 
Implement operator overloading so that dividing Meters by Seconds yields MetersPerSecond. 
Ensure type safety by omitting overloads that would allow incompatible unit operations.*/
#include<iostream>
using namespace std;
struct MeterPerSecond{
    int speed;
    MeterPerSecond(int speed):speed(speed){}
    void display(){
        cout<<"Speed = "<<speed<<" m/s."<<endl;
    }
};

struct Second{
    int second;
};

struct Meter{
    int meter;
    MeterPerSecond operator/(const Second& s)const;
};


MeterPerSecond Meter::operator/(const Second& s)const{
        return MeterPerSecond(meter/s.second);
}
int main(){
    Meter m{100};
    Second s{15};
    MeterPerSecond meterPerSecond=m/s;
    meterPerSecond.display();
    return 0;
}