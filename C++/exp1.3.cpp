//3.Given an array of integers, find and print all duplicate elements.
#include<iostream>
using namespace std;

class Integer{
    public:
        void sort(int[],int);
        void findDuplicate(int[],int);
};
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    Integer obj;
    obj.sort(arr,n);   
    obj.findDuplicate(arr,n);
    return 0;
}
void Integer::sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
void Integer::findDuplicate(int arr[],int n){
    cout<<"Duplicate elements : ";
    int flag=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            if(i==1||arr[i]!=arr[i-2]){
                cout<<arr[i]<<" ";
                flag=0;
            }
        }
    }
    if(flag) cout<<"None";
}