/**
 * Taking string input from the user
 *
 * We can use %s with scanf to take string input from the user
 *
 */

/**
 * NOTE:
 * The string should be short enough to fit into the memory.
 * Scanf cannot be used to input multi-word strings with spaces.
 */

#include <stdio.h>
int main()
{
    char str[50]; // max limit here 50 characters including null ('\0') character.
    scanf("%s", str);
    // scanf() automatically add the null character when the enter key is pressed.
    printf("Your name is %s", str);

    return 0;
}
