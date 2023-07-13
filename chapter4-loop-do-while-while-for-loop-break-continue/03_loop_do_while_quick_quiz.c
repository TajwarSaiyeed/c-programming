#include <stdio.h>

int main()
{

    // QUICK QUIZ: Write a program to print first n natural numbers using do-while loop.

    /*
        input: 4
        output: 1
                2
                3
                4

    */

    int n;
    int i = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    do
    {
        printf("I = %d\n", i);
        i++;
    } while (i <= n);

    return 0;
}
