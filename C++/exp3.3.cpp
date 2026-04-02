//Create classes: Device → Mobile → Smartphone Add features at each level and show how derived class accesses base class members.
#include<iostream>
#include<string>
using namespace std;

class Device{
    protected:
        string name;
        int core;
        int batteryCapacity;
        int price;
    public:
        Device(string name,int c,int b,int p):name(name),core(c),batteryCapacity(b),price(p){}
        void analogCall();
        void sms();
};
class Mobile:public Device{
    protected:
        int cameraPixel;
        int broadbandSpeed;
    public:
        Mobile(int cp,int bb,string name,int c,int b,int p):cameraPixel(cp),broadbandSpeed(bb),Device(name,c,b,p){}
        void internetAccess();
        void voLTE();
        virtual void bluetooth()=0;
        virtual void wifi()=0;
};
class Smartphone:public Mobile{
    protected:
        int latency;
    public:
        Smartphone(int l,int cp,int bb,string name,int c,int b,int p):latency(l),Mobile(cp,bb,name,c,b,p){}
        void mobileBanking();
        virtual void bluetooth(){cout<<"Bluetooth version 6.0"<<endl;};
        virtual void wifi(){cout<<"WiFi version 7"<<endl;};
        void display();
};

int main(){
    Smartphone obj(28,50,100,"Samsung M52",8,5500,20000);
    obj.display();
    return 0;
}
void Smartphone::display(){
    cout<<"Phone name : "<<name<<endl;
    cout<<"Processor core : "<<core<<endl;
    cout<<"Phone battery : "<<batteryCapacity<<endl;
    cout<<"Phone camera : "<<cameraPixel<<endl;
    cout<<"Phone BroadBand speed : "<<broadbandSpeed<<endl;
    cout<<"Phone latency : "<<latency<<endl;
    cout<<"Phone price : "<<price<<endl;
}