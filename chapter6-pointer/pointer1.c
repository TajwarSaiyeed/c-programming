#include <stdio.h>
/*
    How to declare a pointer?

    A pointer is declared using the following syntax

    int *j; declare a variable j of type int-pointer
    j = &i; store address of i in j

    Just like pointer of type integer, we also have pointers
    to char, float etc.

    int *ch-ptr; pointer to integer
    char *ch-ptr; pointer to character
    float *ch-ptr; pointer to float

    Although its a good practice to use meaningful variable names,
    we should be very careful while reading & working on programs
    from fellow programmers.
*/

// creating pointer

int main()
{
    int i = 72;
    int *int_ptr = 5;
    int *j = &i;
    printf("The value of i is %d\n", *j);
    printf("The address of i is %u\n", j);
    printf("The value of i is %d\n", i);
    printf("The address of i is %u\n", &i);
    printf("The address of i is %u\n", &int_ptr);

    return 0;
}
