//Insertion sort
#include<iostream>
using namespace std;

void sortInsertion(int[],int);

int main(){
    int arr[]={5,3,9,8,6,7,2,4,1};
    sortInsertion(arr,9);
    return 0;
}

void sortInsertion(int arr[],int  n){
    cout<<"Input Array : ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j>=0;j--){
            if(arr[j]<arr[j-1]){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }else{
                break;
            }
        }
        cout<<"Inserting "<<i+1<<" element :";
        for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";
        }cout<<endl;
    }
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
