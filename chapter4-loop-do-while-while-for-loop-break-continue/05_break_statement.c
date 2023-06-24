#include <stdio.h>

/*
    The break statement in C:
        The break statement is used to exit the loop irrespective
        of whether the condition is true or false.

        Whenever a "break" is encountered inside the loop
        the control is sent outside the loop.

    Let us see this with the help of an example

*/

int main()
{
    int i = 1;

    while (i <= 100)
    {
        if (i == 20)
        {
            break;
        }
        printf("The value of i: %d\n", i);
        i++;
    }

    printf("We are outside of the loop");

    return 0;
}
