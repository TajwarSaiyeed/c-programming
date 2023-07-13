#include <stdio.h>
/*
    write a program using recursion to calculate n^th element of Fibonacci series;
*/
int fib(int n);

int main()
{
    int n = 7;
    printf("The %dth element of Fibonacci series is: %d", n, fib(n));

    return 0;
}

// recursion

int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}
