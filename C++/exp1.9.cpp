//9.Use typedef or using to create an alias for a structure and demonstrate usage.
#include<iostream>
using namespace std;

typedef struct Student{
    int rollno;
    int marks;
    string name;    
}Student;

class Display{
    public:
        void display(Student*);
};

int main(){
    Display obj;
    Student s1={1,56,"vinoth"};
    obj.display(&s1);
    return 0;
}
void Display::display(Student* s){
    cout<<"Rollno : "<<s->rollno<<endl;
    cout<<"Name : "<<s->name<<endl;
    cout<<"Marks : "<<s->marks<<endl;
}