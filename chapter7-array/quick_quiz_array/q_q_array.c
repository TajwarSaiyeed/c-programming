#include <stdio.h>
/**
 * Quick Quiz: Array
 * create a 2D array of size 2*3 and print its elements along with taking input from the user.
 * Write a function name display which takes a 2D array as a parameter and prints it.
 */

void display(int arr[2][3]); // 2 is the number of rows & 3 is the number of columns

int main()
{

    // input a 2d array from the user
    int arr[2][3];

    for (int i = 0; i < 2; i++) // 2 is the number of rows
    {
        for (int j = 0; j < 3; j++) // 3 is the number of columns
        {
            printf("Enter the value of arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    display(arr);

    return 0;
}

void display(int arr[2][3]) // 2 is the number of rows & 3 is the number of columns
{
    for (int i = 0; i < 2; i++) // 2 is the number of rows
    {
        for (int j = 0; j < 3; j++) // 3 is the number of columns
        {
            printf("The value of arr[%d][%d] is: %d\n", i, j, arr[i][j]);
        }
        printf("\n");
    }
}