#include <stdio.h>

/*
    Write a "recursive" function
    to calculate the sum of first n natural number;
*/

int sum(int);

int main()
{

    printf("Sum of first of 5 natural numbers is %d", sum(5));
    // 1 2 3 4 5
    // 15

    return 0;
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return sum(n - 1) + n;

    // sum(n) = 1+2+....+(n-1)+n;
    // sum(n) = sum(n-1) + n;
}
