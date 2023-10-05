#include <stdio.h>
/*
    Accessing Arrays Using Pointers
    Consider the following program:

    array = [7, 9, 2, 8, 0]
    index =  0  1  2  3  4

    If ptr points to the index 0, ptr++ will point to index 1, ptr + 2 will point to index 2, and so on.
*/

int main()
{

    /*
        This way we can have an interger pointer pointing to first element of the array like this:
    */
    int myArray[] = {7, 9, 2, 8, 0};
    int *ptr = &myArray[0]; // or int *ptr = myArray;
    ptr++;                  // ptr points to index 1

    printf("The value of the second element of the array is %d\n", *ptr);

    return 0;
}