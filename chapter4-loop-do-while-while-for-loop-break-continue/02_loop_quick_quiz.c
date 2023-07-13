#include <stdio.h>

int main()
{
    int i = 0;
    /*
        Quick Quiz:
        Write a program to print natural numbers from 10 to 20
        when initial loop counter is initialed to 0.
    */

    while (i <= 20)
    {
        if (i >= 10)
        {
            printf("The value of i is: %d\n", i);

            /*
                OUTPUT:
                The value of i is: 10
                The value of i is: 11
                The value of i is: 12
                The value of i is: 13
                The value of i is: 14
                The value of i is: 15
                The value of i is: 16
                The value of i is: 17
                The value of i is: 18
                The value of i is: 19
                The value of i is: 20
            */
        }
        i++;
    }

    return 0;
}
