//Read integers from a file and write sorted results to another file (text mode).
#include<stdio.h>
void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main(){
    // FILE *writer=fopen("file.txt","w");
    // int num[]={5,6,2,9,7,10,3,1,4,8};
    // for(int i=0;i<10;i++){
    //     fprintf(writer,"%d ",num[i]);
    // }
    FILE *reader=fopen("file.txt","r");
    FILE *writer=fopen("sortedFile.txt","w");
    if(reader==NULL||writer==NULL){
        printf("File cannot be opened.");
        return 0;
    }
    int buffer[100];
    int index=0;
    while(fscanf(reader,"%d",&buffer[index])==1){
        index++;
    }
    sort(buffer,index);
    printf("Sorted array:");
    for(int i=0;i<index;i++){
        printf("%d ",buffer[i]);
        fprintf(writer,"%d ",buffer[i]);
    }
    fclose(reader);
    fclose(writer);
    return 0;
}