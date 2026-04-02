//Bubble sort
#include<iostream>
using namespace std;

void sortBubble(int[],int);

int main(){
    int arr[]={5,3,9,8,6,7,2,4,1};
    sortBubble(arr,9);
    return 0;
}

void sortBubble(int arr[],int n){
    cout<<"Input Array : ";
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
        cout<<endl;
        cout<<"Setting "<<n-i<<" Position : ";
        for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";
        }
    }
}
