#include <stdio.h>
/*
    write a program to print n natural numbers in reverse order;
*/

int main()
{

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    for (int j = number; j >= 1; j--)
    {
        printf("n = %d\n", j);
    }

    return 0;
}
