#include<stdio.h>
/*
    Recursion:
        A function defined in C can call itself.
        This is called recursion.

        A function calling itself is also called 'recursive' function.

        Example of recursion
            A very good example of recursion is factorial

            factorial(n) = 1 X 2 X 3 .....X n;

            factorial(n) = 1 X 2 X 3 .....X n - 1 X n

            factorial(n) = factorial(n-1) X n


            since we can write factorial of a number in terms of itself,
            we can program it using recursion.

            factorial(5) = 5*4*3*2*1
            factorial(n) = n * n-1 * n-2 * n-3 * ...... * 1
            factorial(n) = n * (n-1 * n-2 * n-3 * ...... * 1)
            factorial(n) = n * factorial(n-1)
*/


int factorial(int n); // prototype

int main() {
    int num = 4;
    int fac = factorial(num);
    printf("The factorial of %d is : %d",num, fac);
    return 0;
}

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n-1);

    /*
        Dry run of the factorial 4
        =factorial(4)
        =4*factorial(3)
        =4*3*factorial(2)
        =4*3*2*factorial(1)
        =4*3*2*1
        =24

    */

}


