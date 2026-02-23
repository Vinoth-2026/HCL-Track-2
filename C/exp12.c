//Read a string (with spaces) safely and print its length without using strlen.
#include<stdio.h>
#include<string.h>
#define MAXLEN 100

int main(){
    char string[MAXLEN];
    printf("Enter a string value : ");
    scanf("%[^\n]s",string);
    int len=0;
    while(string[len]!='\0')
    len++;
    printf("Length of string is %d.",len);
    return 0;
}