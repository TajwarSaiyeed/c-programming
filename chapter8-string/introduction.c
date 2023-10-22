/**
 * Chapter 8 - string
 *
 * A string is a 1D character array terminated by a null('\0')
 * ('\0') This is null character
 *
 *
 * null character is  used to denote string termination
 * characters are stored in contiguous memory location.
 */

#include <stdio.h>
int main()
{
    /**
     * intialiging strings
     * Since string an array of characters, it can be
     * initialiged as follows:
     */
    char s1[] = {'a', 'b', 'c', 'd', '\0'};
    printf("%s", s1);

    // There are another shortcut for initialiging strings in c language:
    char s2[] = "efgh"; // In this case (c) adds a null character automatically.

    /**
     * (' ') single quote : Marking a character
     * (" ") double quote : Marking a string
     */

    /**
     * string in memory:
     * A string is stored like an array in the memory
     * as shown below
     *
     * char s[] = {'a', 'b', 'c', 'd', '\0'};
     * memory       881  882  883  884  885
     * Contiguous blocks in memory
     *
     */

    /**
     * Printing strings
     * A string can be printed character by character using printf and %c
     * But there is another convenient way to print string in c
     */

    char str2[] = "Tajwar";
    printf("%s", str2); // prints the entire string

    return 0;
}