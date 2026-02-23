//insertion sort
#include<stdio.h>

void insertionSort(int n,int arr[]){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j>0;j--){
            if (arr[j]<arr[j-1]){
                arr[j]=arr[j]+arr[j-1];
                arr[j-1]=arr[j]-arr[j-1];
                arr[j]=arr[j]-arr[j-1];
            }
            else{
                break;
            }            
        }
    }
}
int main(){
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    insertionSort(n,arr);
    printf("After sorting:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}