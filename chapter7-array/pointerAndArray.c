#include <stdio.h>

int main()
{
    int marks[3] = {90, 80, 70};
    // &marks[0] => marks --------> [Important]
    // int *ptr = &marks[0];

    int *ptr = marks;
    *ptr = 78;
    ptr++; // ptr = ptr + 1;
    *ptr = 97;
    ptr++; // ptr = ptr + 1;
    *ptr = 86;

    printf("%d\n", marks[0]);
    printf("%d\n", marks[1]);
    printf("%d", marks[2]);

    return 0;
}