#include <stdio.h>
int main()
{
    /**
     * Declaring a string using pointers
     * We can declare strings using pointers
     */

    char *strPtr = "Abid";

    /*
        This tells the compiler to store the string in memory
        and assigned address is stored in a char pointer
    */

    /**
     * NOTE:
     * Once a string defined using char str[] = "Abid",
     * it cannot be reinitialized to something else.
     *
     * A string defined using pointers can be reinitialized
     * strPtr="Tajwar"
     *
     */

    return 0;
}