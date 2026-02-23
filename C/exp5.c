//Read a character and report whether it is a vowel, consonant, digit, or special symbol.
#include<stdio.h>

int main(){
    char character;
    printf("Enter Character : ");
    scanf("%c",&character);
    if(character>='0'&&character<='9'){
        printf("Character is digit.");
    }else if((character>='A'&&character<='Z')||(character>='a'&&character<='z')){
        character=character|32;
        if(character=='a'||character=='e'||character=='i'||character=='o'||character=='u')
        printf("Character is vowel.");
        else
        printf("Character is consonant.");
    }else{
        printf("Character is special symbvol.");
    }
}