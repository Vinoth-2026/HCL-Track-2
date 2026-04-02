//Implement Matrix with rows/cols and initialize elements via std::initializer_list. Show different construction styles and confirm destructor frees memory correctly.
#include<iostream>
#include<algorithm>
#include<initializer_list>

using namespace std;

class Matrix{
    private:
        int row,column;
        int* mat;
    public:
        Matrix(int row,int col):row(row),column(col){
            mat=new int[row*col]{0};
        }
        Matrix(initializer_list<initializer_list<int>> list):Matrix(list.size(),list.begin()->size()){
            row=list.size();
            column=list.begin()->size();
            int i=0;
            for(auto row:list){
                for(auto j:row){
                    mat[i++]=j;
                }
            }
        }
        ~Matrix(){
            delete[] mat;
        }
        void display();
};

int main(){

    Matrix obj1(2,2);
    obj1.display();

    obj1={{1,2},{3,4}};
    obj1.display();
    
    Matrix obj2={{1,2,3},{4,5,6},{7,8,9}};
    obj2.display();
    
    return 0;
}

void Matrix::display(){
    cout<<"Matrix elements"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++)
        cout<<mat[i*column+j]<<" ";
        cout<<endl;
    }
}