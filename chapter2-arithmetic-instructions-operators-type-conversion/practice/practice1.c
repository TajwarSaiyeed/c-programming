#include <stdio.h>

int main()
{

    /*
        There are major data types in C

        1. int   - for storing integers
        2. float - single precision floating point number
        3. char  - storing characters (enclosed in '')

            "A" is invalid
            'A' is valid

        4. double - double precision floating point number
    */

    /*
    PRACTICS

    Which of the following is invalid in C?

        1. int a; b=a;
        2. int v = 3 ^ 3;
        3. char dt = '13 jun 2023'

    */

    int a = 2, b;
    b = a; // valid

    int v = 3 ^ 3; // valid
    // printf("b = %d\nv = %d",b, v);

    char dt = '13 jun 2023'; // invalid
    // printf("%c", dt);

    return 0;
}
