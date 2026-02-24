//Program to find the position of a target value within an array using linear search. 
#include<stdio.h>
int search(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k)
        return i;
    }
    return -1;
}
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

    int k;
    printf("Enter search element:");
    scanf("%d",&k);
    
    int ind=search(arr,n,k);

    if(ind!=-1)
        printf("Element found in position %d.",ind+1);
    else
        printf("Element not found.");
    return 0;
}