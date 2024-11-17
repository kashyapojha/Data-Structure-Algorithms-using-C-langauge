//Unions allow you to store different types of data in the same memory space, but only one member can hold a value at a time.

#include<stdio.h>

union Data{
    int i;
    float f;       
    char c;

};                  //  size of union is 4 
//the size of the union is 4 bytes (which is the size of an int or float on many systems). All members share this 4-byte memory space.

int main(){
    union Data data;

    data.i=10;
    printf("Data as integer:%d\n", data.i);

    data.f=3.14;
    printf("Data as float: %d\n", data.f);

    data.c= "A";
    printf("Data as char: %c\n", data.c);
    return 0;
}