//Selection sort
#include<iostream>
using namespace std;

void sortSelection(int[],int);

int main(){

    return 0;
}

void sortSelection(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=0;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}
