/*Create Counter supporting both ++c and c++.
Return references/temporaries properly. Demonstrate differences in expression contexts (e.g., int x = c++ vs. int y = ++c).*/
#include<iostream>
using namespace std;

class Counter{
    private:
        int count;
    public:
        Counter(int c):count(c){}
        //prefix increment
        int operator++(){
            count++;
            return this->count;
        }
        //postfix increment
        int operator++(int){
            Counter temp=*this;
            count++;
            return temp.count;
        }
};
int main(){
    Counter c1(5),c2(5);
    int x=c1++;
    cout<<x<<endl;
    int y=++c2;
    cout<<y<<endl;
    return 0;
}