#include <stdio.h>

int main()
{

    int i = 8;
    int *j; // int pointer
    j = &i; // address of i in j

    printf("Add i = %u\n", &i);      // address of i
    printf("Add i = %u\n", j);       // address of i
    printf("Add j = %u\n", &j);      // address of j
    printf("Value i = %d\n", i);     // 8
    printf("Value i = %d\n", *(&i)); // 8
    printf("Value i = %d\n", *j);    // 8

    /*
        This program sums it all.
        If you understand it, you have got the idea of pointers.
    */

    return 0;
}
