//4.Check if a given string is a palindrome without using built-in functions.
#include<iostream>
#include<string>
using namespace std;

class String{
    public:
        int palindrome(string);
};
int main(){
    string word;
    cout<<"Enter word:";
    getline(cin,word);
    String obj;
    if(obj.palindrome(word)) cout<<"It is a Palindrome.";
    else cout<<"It is not a Palindrome.";
    return 0;
}
int String::palindrome(string word){
    int len=word.length();
    for(int i=0;i<len/2;i++){
        if(word[i]!=word[len-i-1]){
            return 0;
        }
    }
    return 1;
}