//Implement strcpy safely (bounded copy) and discuss buffer overflow risks.
#include<stdio.h>
#include<string.h>
#define MAXLEN 100
#define BUFFERLEN 20


int safe_strcpy(char*,char*);
int main(){
    char src[MAXLEN];
    char *srcptr=src;
    printf("Enter string value : ");
    scanf("%[^\n]s",srcptr);
    char dst[BUFFERLEN];
    char* dstptr=dst;
    int len=safe_strcpy(srcptr,dstptr);
    if(len>BUFFERLEN){
        printf("source string len greater than buffer.String trucated.");
    }else{
        printf("Copy successful.");
    }
    return 0;
}

int safe_strcpy(char* src,char* dst){
    int i;
    for(i=0;i<BUFFERLEN-1&&src[i]!='\0';i++){
        dst[i]=src[i];
    }
    dst[i]='\0';
    return strlen(src);
}