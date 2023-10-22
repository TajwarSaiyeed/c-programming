#include <stdio.h>
int main()
{
    /**
     * gets() and puts()
     * gets() is a function which can be used to receive a mulit-word string
     */
    char strGet[30];
    gets(strGet); // The entered string is stored in strGet!
    printf("Your typed: %s\n", strGet);
    // Multiple gets() calls will be needed for multiple strings

    // Likewise, puts can be used to output a string.
    puts(strGet); // Prints the string places the cursor on the next line

    return 0;
}