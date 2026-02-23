//Compute the average of an array using pointer arithmetic (no indexing).
#include<stdio.h>

int main(){
    int n;
    printf("Enter array size:");
    scanf("%d",&n);

    int array[n];
    printf("Enter Array elements:");
    for(int i=0;i<n;i++)
        scanf("%d",&array[i]);

    int avg=0;
    int*ptr=array;
    for(int i=0;i<n;i++)
        avg+=*ptr++;
    printf("Average=%d",avg/n);
    return 0;
}