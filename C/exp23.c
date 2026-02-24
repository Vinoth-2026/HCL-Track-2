//Count word frequencies in a paragraph using a fixed-size array of unique words.
#include<stdio.h>
#include<string.h>
int main(){
    int count[26]={0};
    char para[500];
    printf("Enter paragraphy:");
    scanf("%[^\n]s",&para);
    int l=strlen(para);
    for(int i=0;i<l;i++){
        para[i]=para[i]|32;
        count[para[i]-'a']++;
    }
    printf("Character count for the paragraphy\n");
    for(int i=0;i<26;i++){
        printf("%c = %d\n",i+'a',count[i]);
    }
    return 0;
}