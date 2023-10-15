/*
    Create an array of size 3 X 10 containing multiplication table
    of the numbers 2, 7 and 9 respectively.

    By user input
*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int mulTable[n][10];
    int num[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        for (int j = 1; j <= 10; j++)
        {
            mulTable[i][j] = num[i] * j;
        }
    }

    for (int i = 0; i < n; i++) // 2 is the number of rows
    {
        for (int j = 1; j <= 10; j++) // 9 is the number of columns
        {
            printf("%d * %d = %d\n", num[i], j, mulTable[i][j]); // i is the row number & j is the column number
        }
        printf("\n");
    }

    return 0;
}