//Remove all occurrences of a given character from a string in-place.
#include<stdio.h>
#include<string.h>
#define MAXLEN 100
int main(){
    char string[MAXLEN];
    printf("Enter a string value : ");
    scanf("%[^\n]s",string);

    char remove;
    printf("Enter Character to remove :");
    scanf(" %c",&remove);
    int len=strlen(string);
    int ind=0;
    for(int i=0;i<len;i++){
        if(string[i]!=remove)
        string[ind++]=string[i];
    }
    string[ind]='\0';
    printf("String after removing the character = %s",string);
    return 0;
}