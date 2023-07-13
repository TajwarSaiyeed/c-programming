/*
    Real World Examples:
        1. Sometimes we want to watch comedy video
        on Youtube (if) the is Friday.

        2. You might want to buy an umbrella (if) its
        raining and you have the money.


    # All these are decisions #
    # which depends on a execute being met #

    Conditional Instructions:
        In C language too, we must be able to execute
        instructions on a condition being met.

    * Decision Making instructions in C
        - if-else statement
        - switch statement

    if-else statement
        The syntax of an if-else statement is C look this

    if (conditions to be checked) {
        statements - if - conditions - true
    } else {
        statement - if - conditions - false
    }
*/

#include <stdio.h>

int main()
{

    int a = 5;

    if (a > 4)
    {
        printf("a is greater than 4");
    }
    else
    {
        printf("a is not greater that 4");
    }

    // NOTE: That else block is not necessary but optional

    return 0;
}
