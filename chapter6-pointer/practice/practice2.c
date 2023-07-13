#include <stdio.h>
/*
    Write a program having a variable i.Print the address of i.Pass the variable
    to a function and print its address. Are these addresses same? why?
*/

void printAddress(int *);

int main()
{
    int i = 5;
    printf("The address of i is: %u\n", &i);
    printAddress(&i);
    return 0;
}

void printAddress(int *a)
{
    printf("The address of a is: %u", a);
}
