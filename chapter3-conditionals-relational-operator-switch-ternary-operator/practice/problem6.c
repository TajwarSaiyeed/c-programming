#include <stdio.h>

/*
    Write a program to find greatest of four numbers entered by the user.
*/

int main()
{
    int a = 2, b = 19, c = 3, d = 9;

    if (a > b && a > c && a > d)
    {
        printf("A is greater");
    }
    else if (b > a && b > c && b > d)
    {
        printf("B is greater");
    }
    else if (c > a && c > b && c > d)
    {
        printf("C is greater");
    }
    else
    {
        printf("D is greater");
    }

    return 0;
}
