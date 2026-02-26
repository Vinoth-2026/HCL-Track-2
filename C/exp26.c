//Pass a 9x9 integer array to a function that checks if each row and column contains unique numbers from 1 to 9.
#include<stdio.h>
#define SIZE 9

int check(int mat[][SIZE]){
    for(int i=0;i<SIZE;i++){
        int row[9]={0};
        int col[9]={0};
        
        for(int j=0;j<SIZE;j++){
            if(row[mat[i][j]-1]==1) return 0;
            row[mat[i][j]-1]=1;
            
        }for(int j=0;j<SIZE;j++){
            if(col[mat[j][i]-1]==1) return 0;
            col[mat[j][i]-1]=1;
        }
    }
    return 1;
}
int main(){
    int mat[SIZE][SIZE]={
    {1, 2, 3, 4, 5, 6, 7, 8, 9},
    {4, 5, 6, 7, 8, 9, 1, 2, 3},
    {7, 8, 9, 1, 2, 3, 4, 5, 6},
    {2, 3, 4, 5, 6, 7, 8, 9, 1},
    {5, 6, 7, 8, 9, 1, 2, 3, 4},
    {8, 9, 1, 2, 3, 4, 5, 6, 7},
    {3, 4, 5, 6, 7, 8, 9, 1, 2},
    {6, 7, 8, 9, 1, 2, 3, 4, 5},
    {9, 1, 2, 3, 4, 5, 6, 7, 8}};

    if(check(mat)==1){
        printf("9X9 Matrix have unique number in each row and column.");
    }
    else{
        printf("9X9 Matrix does not have unique number in each row and column.");
    }
    return 0;
}