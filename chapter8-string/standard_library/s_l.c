#include <stdio.h>
#include <string.h>
int main()
{
    /**
     * Standard library functions for strings
     *
     * C provides a set of standard library functions for string manipulation
     *
     * Some of the most commonly used string functions are:
     * ======> strlen()
     *
     * This function is used to count the number of characters
     * in the string excluding the null("\0") character.
     */

    char st[] = {'a', 'b', 'c', 'd'};
    int len = strlen(st);
    printf("The length of the string: %d", len);

    /**
     * These functions are declared under <string.h> header file
     */

    return 0;
}