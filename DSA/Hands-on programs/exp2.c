//program to rotate an array k times in left or right rotation 
#include<stdio.h>

void left(int k,int n,int arr[]){
    for(int i=0;i<k;i++){
        int temp=arr[0];
        for(int j=0;j<n-1;j++){
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }
}
void right(int k,int n,int arr[]){
    for(int i=0;i<k;i++){
        int temp=arr[n-1];
        for(int j=n-1;j>0;j--){
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
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

    int k;
    char r;
    printf("enter no of rotation:");
    scanf("%d",&k);
    printf("enter orientation(l/r):");
    scanf(" %c",&r);

    if(r=='l'){
        left(k%n,n,arr);        
    } 
    else if(r=='r'){
        right(k%n,n,arr);
    } 
    else{printf("invalid orientation.");}
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}