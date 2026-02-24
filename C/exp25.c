//Write a function that swaps two pointers using a pointer-to-pointer. Demonstrate with two dynamically allocated strings.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swap(char **string1,char **string2){
    char*temp=*string1;
    *string1=*string2;
    *string2=temp;
}
int main(){
    char *string1=(char*)malloc(100*sizeof(char));
    char *string2=(char*)malloc(100*sizeof(char));

    if(string1==NULL||string2==NULL)
    return 0;

    printf("Enter string 1 value : ");
    scanf(" %[^\n]s",string1);
    printf("Enter string 2 value : ");
    scanf(" %[^\n]s",string2);

    swap(&string1,&string2);
    printf("After swapping\n");
    printf("String 1 = %s\nString 2 = %s",string1,string2);
    return 0;
}