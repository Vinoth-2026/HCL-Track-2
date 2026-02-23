//For a circular array A (the element after the last is the first), compute the Next Greater Element for each index using a stack.
#include<stdio.h>

int main(){
    int n;
    printf("Enter array size:");
    scanf("%d",&n);

    int arr[n],nge[n];

    printf("enter array element:");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    int stack[2*n];
    int top=-1;

    for(int i=2*n-1;i>=0;i--){
        int current=arr[i%n];

        while(top!=-1&&stack[top]<=current){
            top--;
        }
        
        if(i<n){
            if(top!=-1){
                nge[i]=stack[top];
            }else{
                nge[i]=-1;
            }
        }
        stack[++top]=current;
    }

    printf("Next Greater Name:");
    for(int i=0;i<n;i++){
        printf("%d ",nge[i]);
    }
}