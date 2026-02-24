//Create a struct Student with fields for roll number, name, and marks. Write a program to input details for 5 students and display the topper’s details.
#include<stdio.h>
#define MAX 5
struct Student{
    int rollno;
    char name[12];
    int mark;
};

int main(){
    struct Student cse[MAX];
    int ind=0,top=0;
    for(int i=0;i<MAX;i++){
        printf("Enter stuent %d Roll no. :",i+1);
        scanf(" %d",&cse[i].rollno);
        printf("Enter stuent %d name :",i+1);
        scanf(" %[^\n]",&cse[i].name);
        printf("Enter stuent %d mark :",i+1);
        scanf(" %d",&cse[i].mark);
        if(cse[i].mark>top){
            top=cse[i].mark;
            ind=i;
        }
    }
    printf("Topper's Detail\n");
    
    printf("Student Rollno : %d \t Student Name : %s\t Student mark : %d",cse[ind].rollno,cse[ind].name,cse[ind].mark);
    return 0;
}