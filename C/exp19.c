//Write a program to merge two sorted arrays into a single sorted output.
#include<stdio.h>

int main(){
    int n,m;
    printf("Enter array 1 size:");
    scanf("%d",&n);
    int array1[n];
    printf("Enter element for array 1 :");
    for(int i=0;i<n;i++)
    scanf("%d",&array1[i]);
    printf("Enter array 2 size:");
    scanf("%d",&m);
    int array2[m];
    printf("Enter element for array 1 :");
    for(int i=0;i<m;i++)
    scanf("%d",&array2[i]);
    int merge[n+m];
    int i=0,j=0,ind=0;
    while(i<n||j<m){
        if(j==m)
        merge[ind++]=array1[i++];
        if(i==n)
        merge[ind++]=array2[j++];
        else{
            if(array1[i]<array2[j]){
                merge[ind++]=array1[i++];
            }else{
                merge[ind++]=array2[j++];
            }
        }
    }
    printf("new merged array :");
    for(int i=0;i<m+n;i++)
    printf("%d ",merge[i]);
    return 0;
}