//Use a pointer to a struct Student to update marks and print updated details. Demonstrate why passing by pointer is efficient compared to passing by value.
#include<stdio.h>
struct Student{
    int rollno;
    char name[12];
    int mark;
};

void updateMark(struct Student* s,int newMark){
    s->mark=newMark;
}
void display(struct Student* s){    
    printf("Student Rollno : %d \t Student Name : %s\t Student mark : %d\n",s->rollno,s->name,s->mark);
}
int main(){
    struct Student s1={1,"vinoth",80};
    display(&s1);
    updateMark(&s1,85);
    printf("After updating mark\n");
    display(&s1);    
    return 0;
}