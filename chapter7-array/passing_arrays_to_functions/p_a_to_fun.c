/*
    Passing arrays to functions

    Arrays can be passed to the functions like this

    printArray(arr, n);  // function call

    void printArray(int arr[], int n) // function prototype
    {
        ...
    }

    ====> or <====

    printArray(&arr[0], n);  // function call

    void printArray(int *arr, int n) // function prototype
    {
        ...
    }

*/

#include <stdio.h>

void func(int *);

int main()
{
    int marks[3] = {98, 75, 88};

    func(marks);

    for (int i = 0; i < 3; i++)
    {
        printf("The Value of marks[%d] is %d\n", i, marks[i]);
    }

    return 0;
}

void func(int *ptr)
{
    for (int i = 0; i < 3; i++)
    {
        *ptr = 56;
        ptr++;
        printf("The Value of marks[%d] is %d\n", i, *(ptr++));
    }
}