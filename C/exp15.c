//Convert a lowercase string to uppercase without toupper(ASCII arithmetic).
#include<stdio.h>
#include<string.h>
#define MAXLEN 100

int main(){
    char string[MAXLEN];
    printf("Enter a string : ");
    scanf("%[^\n]s",string);
    int len=strlen(string);
    for(int i=0;i<len;i++){
        if(string[i]>='a'&&string[i]<='z')
        string[i]=string[i]-32;
    }
    printf("After converting to uppercase string : %s",string);
    return 0;
}