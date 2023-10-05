#include <stdio.h>

/*
    Pointer Arithmetic

    A pointer can be incremented to point to the next memory location of that type.

    Consider the following example:
*/

int main()
{

    int i = 32;
    int *a = &i; // a points to i // a = 8192 (assuming 8192 is the address of i)
    a++;         // a now points to the next memory location of type int  // a = 8196

    char j = 'A';
    char *b = &j; // b points to a // b = 8192 (assuming 8192 is the address of a)
    b++;          // b now points to the next memory location of type char // b = 8193

    float c = 3.14;
    float *d = &c; // b points to a // b = 8192 (assuming 8192 is the address of a)
    d++;           // b now points to the next memory location of type float // b = 8196

    return 0;
}

/*
    Following operations can be performed on a pointer:

    1. Addition of a number to a pointer
    2. Subtraction of a number from a pointer
    3. Subtraction of one pointer from another
    4. Comparision of two pointer variables
*/