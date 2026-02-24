//Pass a 9x9 integer array to a function that checks if each row and column contains unique numbers from 1 to 9.
#include<stdio.h>
#define SIZE 9

int check(int mat[][SIZE]){
    int count[9]={0};
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            count[mat[i][j]-1]++;
        }
    }
    for(int i=0;i<9;i++){
        if(count[i]!=9)
        return 0;
    }
    return 1;
}
int main(){
    int mat[SIZE][SIZE]={
    {5, 3, 4, 6, 7, 8, 9, 1, 2},
    {6, 7, 2, 1, 9, 5, 3, 4, 8},
    {1, 9, 8, 3, 4, 2, 5, 6, 7},
    {8, 5, 9, 7, 6, 1, 4, 2, 3},
    {4, 2, 6, 8, 5, 3, 7, 9, 1},
    {7, 1, 3, 9, 2, 4, 8, 5, 6},
    {9, 6, 1, 5, 3, 7, 2, 8, 4},
    {2, 8, 7, 4, 1, 9, 6, 3, 5},
    {3, 4, 5, 2, 8, 6, 1, 7, 9}};

    if(check(mat)==1){
        printf("9X9 Matrix have unique number in each row and column.");
    }
    else{
        printf("9X9 Matrix does not have unique number in each row and column.");
    }
    return 0;
}