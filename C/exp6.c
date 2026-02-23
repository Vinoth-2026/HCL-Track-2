//Swap two integers without using a temporary variable.
#include<stdio.h>

int main(){
    int inum1,inum2;
    printf("Enter interger value for Num1 :");
    scanf("%d",&inum1);
    printf("Enter interger value for Num2 :");
    scanf("%d",&inum2);
    printf("Before swap.\n num1=%d num2=%d\n",inum1,inum2);
    inum1=inum1+inum2;
    inum2=inum1-inum2;
    inum1=inum1-inum2;
    printf("After swap.\n num1=%d num2=%d\n",inum1,inum2);
}