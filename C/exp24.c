//Create an array of char* to store names of cities entered by the user.Implement functions to sort them alphabetically and free allocated memory.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define BUFFER 100

void sort(char* cityname[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(cityname[i],cityname[j])>0){
                char *temp=cityname[i];
                cityname[i]=cityname[j];
                cityname[j]=temp;
            }
        }
    }
}
int main(){
    int n;
    printf("Enter no. of cities:");
    scanf("%d",&n);
    char* cityName[n];
    for(int i=0;i<n;i++){
        char city[BUFFER];
        printf("Enter city %d name:",i+1);
        scanf(" %[^\n]s",city);
        cityName[i]=(char*)malloc((strlen(city)+1)*sizeof(char));
        strcpy(cityName[i],city);
    }
    sort(cityName,n);
    printf("Sorted City names\n");
    for(int i=0;i<n;i++){
        printf("%s\n",cityName[i]);
    }
    return 0;
}