/*Build class Wallet (private balance) and class WalletAuditor as a friend class.
Wallet exposes deposit/withdraw with validation.
WalletAuditor::report(const Wallet&) reads internals.
Show friendship is not transitive: a third class cannot access Wallet despite WalletAuditor friendship.*/
#include<iostream>
using namespace std;

class Wallet{
    private:
        int balance;
    public:
        Wallet(int balance):balance(balance){}
        void withdraw(int);
        void deposit(int);
        void display();
        friend class Audit;
};
class Audit{
    public:
        void report(const Wallet&);
        friend class ThirdPartyAudit;
};
class ThirdPartyAudit{
    public:
        void report(const Wallet&);
};
int main(){
    Wallet w(5000);
    w.withdraw(2000);
    w.deposit(500);
    Audit obj;
    obj.report(w);
    return 0;
}
void Wallet::withdraw(int amount){
    if(amount<=balance){
        balance-=amount;
        cout<<"Withdrawal successful."<<endl;
    }else{
        cout<<"Withdrawal unsuccessful."<<endl;
    }
}
void Wallet::deposit(int amount){
    if(amount>0){
        balance+=amount;
        cout<<"Deposit successful."<<endl;
    }else{
        cout<<"Deposit unsuccessful."<<endl;
    }
}
void Wallet::display(){
    cout<<"Current balance = "<<balance<<endl;
}
void Audit::report(const Wallet& w){
    cout<<"Friend class Audit accessing Wallet"<<endl;
    cout<<"Wallet Balance = "<<w.balance<<endl;
}
void ThirdPartyAudit::report(const Wallet& w){
    cout<<"class Third party Audit accessing Wallet"<<endl;
    //cout<<"Wallet Balance = "<<w.balance<<endl; error wallet balance is inaccessable
}