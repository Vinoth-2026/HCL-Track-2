//linear search
#include<stdio.h>

int linearSearch(int n,int arr[],int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k)
        return i;
    }
    return -1;
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
    int k;
    printf("Enter element to search:");
    scanf("%d",&k);
    if(linearSearch(n,arr,k)!=-1){
        printf("Element found.");
    }else{
        printf("Element not found.");
    }    
    return 0;
}