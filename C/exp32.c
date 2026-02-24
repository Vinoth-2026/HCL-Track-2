//Use typedef or using to create an alias for a structure and demonstrate usage.
#include<stdio.h>

typedef struct Student{
    int rollno;
    int marks;
    char name[12];
}student;

int main(){
    student s1;
    printf("Enter rollno:");
    scanf("%d",&s1.rollno);
    printf("Enter name:");
    scanf("%s",&s1.name);
    printf("Enter mark:");
    scanf("%d",&s1.marks);
    printf("Student rollno=%d Student name=%s Student marks=%d",s1.rollno,s1.name,s1.marks);
    return 0;
}