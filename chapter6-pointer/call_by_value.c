#include <stdio.h>

int sum(int, int);

int main()
{
    int x = 10, y = 20;
    printf("The value of x + y is %d\n", sum(x, y));
    printf("The value of x and y is %d and %d", x, y);
    /*
      Call by value

        Here the value of the arguments are passed to the function consider this example:

        int c = sum(3,4) => assume x=3 and y = 4
                    x, y

        if sum is designed as sum(int x, int y), the values 3 and 4 are copied to a and b.
            now even if we change a and b, nothing happens to the variable x and y

        This is call by value

        NOTE: In C we usually make a call by value.

    */

    return 0;
}

int sum(int x, int y)
{
    x = 26; // the value of x is change here not in the variable x in main function.
    return x + y;
}
