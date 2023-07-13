#include <stdio.h>

/*
    The continue statement:

        The continue statement is used to immediately move to the next
        iteration of the loop.

        The control is token to the next iteration thus skipping everything
        below "continue" inside the loop for that iteration.

*/

int main()
{

    int skip = 5;
    int i = 0;

    for (i; i < 20; i++)
    {
        if (i == skip)
        {
            continue;
        }
        else
        {
            printf("The value of i : %d\n", i);
        }
    }
    // OUTPUT: The value of i : 5

    return 0;
}
