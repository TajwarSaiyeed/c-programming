#include <stdio.h>
#include <string.h>
int main()
{
    /**
     * strcpy()
     * This function is used to copy the content of second string
     * into first string passed to it.
     */

    char source[] = "Abid";
    char target[50];
    scanf("%s", target);
    strcpy(target, source); // target now contains "Abid";
    // Target string should have enough capacity to store the source string
    printf("%s %s", target, source);
    return 0;
}