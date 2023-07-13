#include <stdio.h>

/*
    @switch case central instruction

    switch-case is used when we have to make
    a choice between number of alternatives
    for a given variable.

    switch(integer-expression) {
        case C1:          ______________________________
            ...code      |                              |
        case C2:         |  C1, C2, C3 => constants     |
            ...code      |  ...code => any valid C code |
        case C3:         |______________________________|
            ...code
        default:
            ...code
    }

    The value of integer-expression is matched against C1, C2, C3, ....
    if it matches any of these cases, that case along with all subsequent
        "case" and "default" statement are executed.

    break keyword use for stop the code.

    IMPORTANT NOTE:
        SWITCH Statement:
            1. We can use switch statement even by
               writing codes in any order of our choice (not necessarily ascending).

            2. Char values are allowed as they can be easily
               evaluated to an integer.

            3. A switch can occur within another but in practice this is rarely done.
*/

int main()
{
    int age = 26;
    switch (age)
    {
    case 24:
        printf("You are 24\n");
        break;
    case 25:
        printf("You are 25\n");
        break;
    default:
        printf("You are %d\n", age);
    }

    return 0;
}
