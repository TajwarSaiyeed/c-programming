#include <stdio.h>

/*
    Write a program to find whether a year entered
    by the user is a leap year or not.

    Take year as an input from the user;
*/

int main()
{

    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 != 0)
    {
        printf("This is a common year");
    }
    else if (year % 100 != 0)
    {
        printf("This is a leap year");
    }
    else if (year % 400 != 0)
    {
        printf("This is a common year");
    }
    else
    {
        printf("This is a leap year");
    }

    return 0;
}
