#include <stdio.h>

int main()
{

    /*
        Write a program to check whether a number
        is divisible by 97 or not.

    */

    int a = 195;          // not divisible
    printf("%d", a % 97); // 1

    int b = 194;          // divisible
    printf("%d", b % 97); // 0

    return 0;
}
