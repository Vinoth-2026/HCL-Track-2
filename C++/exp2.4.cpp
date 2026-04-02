/*A CryptoBox class stores private key material. Define a friend function dumpForAudit(const CryptoBox&)
that may inspect private fields for compliance reporting. Prove that regular functions cannot access those fields.*/
#include<iostream>
#include<string>
using namespace std;

class CryptoBox{
    private:
        int key;
        string data;
    
    public:
        string encrypted;

        CryptoBox(int key,string data):key(key),data(data){
            encrypted=data;
            for(int i=0;i<data.length();i++){
                encrypted[i]=data[i]+key;
            }
        }
        friend void dumpForAudit(const CryptoBox*);
};
    
void transfer(const CryptoBox*);

int main(){
    CryptoBox obj(5,"rajalakshmi");
    transfer(&obj);
    dumpForAudit(&obj);
    return 0;
}

void transfer(const CryptoBox* obj){
    cout<<"Regular fuction"<<endl;
    cout<<"Transfered message : "<<obj->encrypted<<endl;
    //cout<<obj->key            will throw error
}

void dumpForAudit(const CryptoBox* obj){
    cout<<"\nFriend function"<<endl;
    cout<<"Encyption Key = "<<obj->key<<endl;
    cout<<"Original Data = "<<obj->data<<endl;
    cout<<"Encrypted data = "<<obj->encrypted<<endl;
}