#include <stdio.h>

/*
    Write a program to calculate the factorial
    of a given number using for loop


    What is factorial?

    n! = 1*2*3*.....*n
    0! = 1
    5! = 1*2*3*4*5

    1! = 1

*/

int main()
{

    int factorial = 1, n = 4;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    printf("The factorial of %d is %d", n, factorial);

    // output is : 24

    return 0;
}
