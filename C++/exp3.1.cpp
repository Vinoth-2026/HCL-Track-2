/*Create a Book class: isbn, title, author. Provide print() and updateTitle(const std::string&). 
Demonstrate creating objects via default constructor and setting fields through setters (or public methods) only.*/
#include<iostream>
#include<string>
using namespace std;

class Book{
    private:
        int isbn;
        string title;
        string author;
    public:
        void setter(int,const string&,const string&);
        void update(const string&);
        void display();
};

int main(){
    Book obj;
    obj.setter(101,"Harry potter","J K Rowling");
    obj.display();
    obj.update("Harry Potter and the Philosopher's Stone");
    obj.display();
    return 0;
}
void Book::setter(int isbn,const string& title,const string& author){
    this->isbn=isbn;
    this->title=title;
    this->author=author;
}
void Book::update(const string& title){
    this->title=title;
}
void Book::display(){
    cout<<"Book ISBN : "<<isbn<<endl;
    cout<<"Book TITLE : "<<title<<endl;
    cout<<"Book AUTJOR : "<<author<<endl;
}