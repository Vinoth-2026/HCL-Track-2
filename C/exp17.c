//Write a function that returns the index of the first occurrence of a substring (naïve).
#include<stdio.h>
#include<string.h>
#define MAXLEN 100
int main(){
    char string[MAXLEN],substring[MAXLEN];
    printf("Enter string value :");
    scanf("%s",&string);
    printf("Enter substring value :");
    scanf("%s",&substring);
    int stringlen=strlen(string),substringlen=strlen(substring);
    if(stringlen<substringlen){
        printf("Substring longer than string.");
        return 0;
    }
    int flag;
    for(int i=0;i<stringlen-substringlen;i++){
        flag=1;
        for(int j=0;j<substringlen;j++){
            if(string[i+j]!=substring[j]){
                flag=0;
                break;
            }
        }
        if(flag){
            printf("First occurrence of a substring found at index %d",i);
            break;
        }
    }
    if(!flag)
    printf("Substring not found.");
    return 0;
}