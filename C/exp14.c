//Check if a string is a palindrome (ignore case and non-alphanumeric).
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAXLEN 100

int main(){
    char string[MAXLEN];
    printf("Enter a string : ");
    scanf("%[^\n]s",string);
    int i=0,j=strlen(string)-1;
    int flag=1;
    while(i<=j){
        if(!isalpha(string[i])){
            i++;
            continue;
        }
        if(!isalpha(string[j])){
            j--;
            continue;
        }
        if(tolower(string[i])!=tolower(string[j])){
           flag=0;
            break;
        }
        i++;
        j--;
    }
    if(flag){
        printf("It is a palindrome.");
    }else{
        printf("It is not a palindrome.");
    }
    return 0;
}