//Create a base class Employee with name and salary. Derive Manager that adds department. Implement a function to display all details.
#include<iostream>
#include<string>
using namespace std;

class Employee{
    protected:
        string name;
        int salary;
    public:
        Employee(string name,int salary):name(name),salary(salary){}
};
class Manager:public Employee{
    protected:
        string dept;
    public:
        Manager(string name,int salary,string dept):Employee(name,salary),dept(dept){}
        void display();
};

int main(){
    Manager obj("vinoth",200,"dev");
    obj.display();  
}
void Manager::display(){
    cout<<"EMployee Name : "<<name<<endl;
    cout<<"EMployee Salary : "<<salary<<endl;
    cout<<"EMployee Department : "<<dept<<endl;
}