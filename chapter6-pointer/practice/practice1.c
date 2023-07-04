#include<stdio.h>
/*
    Write a program to print the address of a variable.
    Use this address to get the value of this variable.

*/

int main(){
    int i = 3;
    printf("The address of i is %u\n", &i);
    printf("The value of i is %d\n", *(&i));
    return 0;
}
