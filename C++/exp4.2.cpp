/*Overload printDiag to accept int, double, std::string, and std::vector<int>. 
Ensure the vector overload is chosen over the generic template (if added) by using more specific signatures.*/
#include<iostream>
#include<vector>
using namespace std;

class Print{
    public:
        void printDiag(int);
        void printDiag(double);
        void printDiag(string);
        void printDiag(vector<int>);
};
int main(){
    Print obj;
    obj.printDiag(5);
    obj.printDiag(7.9823);
    obj.printDiag("vinoth");
    vector<int> v{1,2,3,4,5};
    obj.printDiag(v);
    return 0;
}
void Print::printDiag(int number){
    cout<<"Value : "<<number<<endl;
}
void Print::printDiag(double number){
    cout<<"Value : "<<number<<endl;
}
void Print::printDiag(string value){
    cout<<"Value : "<<value<<endl;
}
void Print::printDiag(vector<int> number){
    cout<<"Value : ";
    for(auto i:number){
        cout<<i<<" ";
    }
    cout<<endl;
}