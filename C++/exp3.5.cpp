//Create classes: Device → Phone & Camera → SmartPhone Use virtual base classes to avoid duplicate Device members.
#include<iostream>
using namespace std;

class Device{
    public:
        void device(){cout<<"Device used for Sending message"<<endl;}
};
class Phone:virtual public Device{
    public:
        void phone(){cout<<"Phone used for Calling"<<endl;}
};
class Camera:virtual public Device{
    public:
        void camera(){cout<<"Camera used for taking Photos"<<endl;}
};
class Smartphone:public Phone,public Camera{
    public:
        void smartphone(){cout<<"Smartphone used for accessing Internet"<<endl;}
};

int main(){
    Smartphone obj;
    obj.device();
    obj.phone();
    obj.camera();
    obj.smartphone();
    return 0;
}