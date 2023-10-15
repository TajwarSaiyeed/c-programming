/**
 * Write a program contaning functions which counts the number of positive integers in an array
 */

#include <stdio.h>

void count_positive_integers(int *arrPtr, int size, int *count)
{
    for (int i = 0; i < size; i++)
    {
        if (*arrPtr % 2 == 0)
        {
            (*count)++;
        }
        arrPtr++;
    }
}

int main()
{
    int count = 0;
    int arr[] = {1, 2, 4, 5, 7, 9, 8, 12, 15, 14};
    //              1  2           3   4       5

    count_positive_integers(arr, 10, &count);
    printf("%d", count);
    return 0;
}