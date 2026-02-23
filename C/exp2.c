//Read two integers and print their sum, difference, product, and integer quotient.
#include<stdio.h>

int main(){
    int inum1,inum2;
    printf("Enter value for integer 1 :");
    scanf("%d",&inum1);    
    printf("Enter value for integer 2 :");
    scanf("%d",&inum2);
    printf("\nSum of the two integer is %d\n",inum1+inum2);
    printf("Difference of the two integer is %d\n",inum1-inum2);
    printf("Product of the two integer is %d\n",inum1*inum2);
    printf("Integer quotient of the two integer is %d\n",inum1/inum2);
    return 0;
}