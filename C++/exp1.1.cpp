//"1.Program to accept a password and check if its length is greater than 8. 
#include<iostream>
using namespace std;

class Password{
    private:
        string password;
    public:
        void getPassword();
        int check();
};

int main(){
    Password obj;
    obj.getPassword();
    if(obj.check()){
        cout<<"Password is greater than 8 character.";
    }else{
        cout<<"Password is not greater than 8 character.";
    }
    return 0;
}

void Password::getPassword(){
    cout<<"Enter password:";
    getline(cin,password);
}
int Password::check(){
    return password.length()>8;
}