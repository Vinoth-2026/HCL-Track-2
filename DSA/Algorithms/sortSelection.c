//selection sort
#include<stdio.h>

void selectionSort(int n,int arr[]){
    for(int i=0;i<n;i++){
        int bigindex=0;
        for(int j=1;j<n-i;j++){
            if(arr[bigindex]<arr[j])
            bigindex=j;
        }
        int last=n-i-1;
        if(bigindex!=last){
            arr[last]=arr[last]+arr[bigindex];
            arr[bigindex]=arr[last]-arr[bigindex];
            arr[last]=arr[last]-arr[bigindex];
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
    selectionSort(n,arr);
    printf("After sorting:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}