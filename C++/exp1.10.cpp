//10.Implement a dynamic array that doubles its size when capacity is exceeded.
#include<iostream>
using namespace std;

class DynamicArray{
    private:
        int* arr;
        int  index;
        int size;
    public:
        DynamicArray(int size){
            this->size=size;
            arr=new int[size];
            index=0;
        }
        ~DynamicArray(){
            delete[] arr;
        }
        void grow();
        void add(int);
        void remove(int);
        void display();
};

int main(){
    DynamicArray arr(3);
    arr.add(1);
    arr.add(2);
    arr.add(3);
    arr.display();
    arr.add(4);
    arr.display();
    return 0;
}

void DynamicArray::add(int  data){
    if(index==size){
        grow();
    }
    arr[index++]=data;
}
void DynamicArray::remove(int i){
    for(i;i<index-1;i++){
        arr[i]=arr[i+1];
    }
    index--;
}
void DynamicArray::display(){
    cout<<"Array elements : ";
    for(int i=0;i<index;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
void DynamicArray::grow(){
    size*=2;
    int* temp=new int[size];
    for(int i=0;i<index;i++)
        temp[i]=arr[i];
    delete[] arr;
    arr=temp;
}