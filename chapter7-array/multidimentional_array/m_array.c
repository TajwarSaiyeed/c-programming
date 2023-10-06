/*
    Mulitidimentional Array
    An array can be of 2 dimentional / 3 dimentational / n dimentionals
*/

#include <stdio.h>

int main()
{

    /*
        A 2 dimentional array can be defind as:
    */
    int arr[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}};

    /*
        We can access the elements of this array as

        arr[0][0], arr[0][1] & so on...
        => 1      , => 2
    */

    int marks[2][5] = {
        {45, 67, 81, 98, 59},
        {67, 81, 98, 45}};

    for (int i = 0; i < 2; i++) // 2 is the number of rows
    {
        for (int j = 0; j < 5; j++) // 4 is the number of columns
        {
            printf("[%d][%d] => %d\n", i, j, marks[i][j]); // i is the row number & j is the column number
        }
        printf("\n");
    }

    return 0;
}

/*
    2D Array in Memory

    A 2D array like a 1D array is stored in contiguous memory blocks like this:

    arr[0][0] arr[0][1] ...
    [1]       [2]       ...
    87224     87228     ...
    [3]       [4]       ...
    87232     87236     ...
    [5]       [6]       ...
    87240     87244     ...
*/