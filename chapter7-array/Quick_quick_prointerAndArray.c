#include <stdio.h>
/*
    Following operations can be performed on a pointer:

    1. Addition of a number to a pointer
    2. Subtraction of a number from a pointer
    3. Subtraction of one pointer from another
    4. Comparision of two pointer variables
*/

/*
    Quick Quiz: Try these operations on another variable by creating pointers in a separate program.

    Demonstrate all the operations mentioned above.

*/

int main()
{
    int i = 5;
    int *ptr = &i;

    printf("The value of i is %d\n", i);
    printf("The address of i is %u\n", &i);
    printf("The value of ptr is %u\n", ptr);

    ptr++;
    printf("The value of ptr is after incremented %u\n", ptr);
    // printf("The address of i is after incremented %u\n", &i);

    // ptr - &i;
    printf("The value of ptr is after *decremented %d\n", ptr - &i);

    // 1 (because ptr is incremented by 1)
    // 1 * 4 = 4 (because ptr is int type)
    // 4 / 4 = 1 (because ptr is int type)

    ptr--;
    printf("The value of ptr is after *decremented %u\n\n\n", ptr);

    // comparision of two pointer variables

    int j = 5;

    int *q = &j;

    printf("The value of j is %d\n", j);
    printf("The address of j is %u\n", &j);
    printf("The value of ptr is %u\n", q);

    q++;

    printf("The value of q is %d\n", q - &j);

    if (q > &j)
    {
        printf("q is greater than &j\n");
    }
    else
    {
        printf("q is less than &j\n");
    }

    return 0;
}