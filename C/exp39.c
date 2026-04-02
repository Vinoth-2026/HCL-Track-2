//Program that sorts numbers using the QuickSort method.
#include<stdio.h>

void sort(int[],int,int);
int partition(int[],int,int);

int main(){
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    if(n<=0)
        return 0;
    
    int arr[n];
    printf("Enter array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,0,n-1);
    printf("After sorting:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
int partition(int arr[],int l,int r){
    int p=l;
    int i=l;
    int j=r;
    while(i<=j){
        while(arr[i]<=arr[p]&&i<=r)
        i++;
        while(arr[j]>arr[p]&&l<=j)
        j--;
        if(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[p];
    arr[p]=arr[j];
    arr[j]=temp;
    return j;
}
void sort(int arr[],int l,int r){
    if(l<r){
        int s=partition(arr,l,r);
        sort(arr,l,s-1);
        sort(arr,s+1,r);
    }
}