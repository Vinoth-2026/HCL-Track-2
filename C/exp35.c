//Create a union Data that can store either an integer, float, or string. Demonstrate how memory usage differs from a structure.
#include<stdio.h>
union uPackage{
    int id;
    int pincode;
    char addr[50];
};
struct sPackage{
    int id;
    int pincode;
    char addr[50];
};
int main(){
    union uPackage up;
    struct sPackage sp;
    printf("Union size %d\n",sizeof(up));
    printf("Struct size %d",sizeof(sp));
    return 0;
}