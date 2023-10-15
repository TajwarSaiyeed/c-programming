/*
    Create an array of size 3 X 10 containing multiplication table
    of the numbers 2, 7 and 9 respectively.
*/

#include <stdio.h>
int main()
{
    int mulTable[10][10];
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            mulTable[i][j] = num[i] * j;
        }
    }

    for (int i = 0; i < 10; i++) // 2 is the number of rows
    {
        for (int j = 1; j <= 10; j++) // 9 is the number of columns
        {
            printf("| %d * %d = %d |\n", num[i], j, mulTable[i][j]); // i is the row number & j is the column number
        }
        printf("----------------");
        printf("\n");
    }

    return 0;
}