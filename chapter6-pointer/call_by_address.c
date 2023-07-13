#include <stdio.h>

int sum(int *, int *);

int main()
{
    /*
        Call by reference:

            Here the address of the variables
            is passed to the function as arguments

    */
    int a = 10, b = 20;
    printf("The value of x + y is %d\n", sum(&a, &b));
    printf("The value of x and y is %d and %d", a, b);
    /*
        Now since the addresses are passed to the function.
        The function can now modify the value of a variable
        in calling function using * and & operators.
    */
    return 0;
}

int sum(int *x, int *y)
{
    *x = 26; // the value of a and b will change because of address
    *y = 100;
    return *x + *y;
}
