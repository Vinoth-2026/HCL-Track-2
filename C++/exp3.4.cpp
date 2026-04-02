//Create classes: Teacher + Researcher → Professor Demonstrate multiple inheritance and method overriding.
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Teacher{
    protected:
        string name;
        string dept;
        vector<string> subjects;
    public:
        Teacher(string name,string dept,vector<string> subjects):name(name),dept(dept),subjects(subjects){}
        virtual void display();
};
class Researcher{
    protected:
        string name;
        string field;
    public:
        Researcher(string name,string field):name(name),field(field){}
        virtual void display();
};
class Professor:public Teacher,public Researcher{
    protected:
        string name;
        int salary;
    public:
        Professor(const string &name,int salary,string dept,string field,vector<string> subjects):name(name),salary(salary),Researcher(name,field),Teacher(name,dept,subjects){}
        void display() override;
};

int main(){
    Professor obj("vinoth",50000,"CSE","OS",{"","",""});
    obj.display();
    return 0;
}

void Teacher::display(){
    cout<<"Teacher  name : "<<name<<endl;
    cout<<"Teacher  Dept : "<<dept<<endl;
    cout<<"Subject taken : ";
    for(int i=0;i<3;i++){
        cout<<subjects[i]<<" ";
    }
    cout<<endl;
}
void Researcher::display(){
    cout<<"Researcher name : "<<name<<endl;
    cout<<"Research field : "<<field<<endl;
}

void Professor::display(){
    cout<<"Professor name : "<<name<<endl;
    cout<<"Professor salary : "<<salary<<endl;
}