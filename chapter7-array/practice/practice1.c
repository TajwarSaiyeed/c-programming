/*
    Create an array of 10 numbers. Verify using
    pointer arithmetic that (ptr + 2) points to
    the third element where ptr is a pointer pointing
    to the first element of the array
*/

#include <stdio.h>

int main()
{
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *ptr = numbers;                       // same as int *ptr = &numbers[0]
    printf("The Value at ptr is %d\n", *ptr); // 1
    ptr += 2;
    printf("The Value at ptr is %d", *ptr); // 2
}