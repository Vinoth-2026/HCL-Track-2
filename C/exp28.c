//Maintain an array of struct Employee for 10 employees. Calculate total salary payout and find the employee with the highest salary.
#include<stdio.h>
#define MAX 10
struct Employee{
    int empid;
    char name[12];
    int salary;
};

int main(){
    struct Employee dev[MAX];
    int ind=0,top=0,payout=0;
    for(int i=0;i<MAX;i++){
        printf("Enter Employee %d Emp id. :",i+1);
        scanf(" %d",&dev[i].empid);
        printf("Enter Employee %d name :",i+1);
        scanf(" %[^\n]",&dev[i].name);
        printf("Enter Employee %d salary :",i+1);
        scanf(" %d",&dev[i].salary);
        payout+=dev[i].salary;
        if(dev[i].salary>top){
            top=dev[i].salary;
            ind=i;
        }
    }
    printf("Total payout : %d\n",payout);
    printf("Employee with highest salary Detail\n");
    
    printf("Employee empid : %d \t Employee Name : %s\t Employee salary : %d",dev[ind].empid,dev[ind].name,dev[ind].salary);
    return 0;
}