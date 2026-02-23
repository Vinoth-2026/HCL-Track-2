//program to sort an array with only 0,1 and 2 without using build-in function.
#include<stdio.h>

int main(){
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int l=0,m=0,r=n-1;
    while(m<=r){        
        if(arr[m]==0){
            arr[m]=arr[l];
            arr[l]=0;
            m++;
            l++;
        }
        else if(arr[m]==1){
            m++;
        }
        else{
            arr[m]=arr[r];
            arr[r]=2;
            r--;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}