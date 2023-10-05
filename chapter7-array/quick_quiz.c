#include <stdio.h>
/*
    Write a program to accept marks of five students in an array
    and print them to the screen
*/

int main()
{
    int marks[6];
    for (int i = 0; i < sizeof(marks) / sizeof(int); i++)
    {
        printf("Enter the marks for %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < sizeof(marks) / sizeof(int); i++)
    {
        printf("Marks %d is: %d\n", i + 1, marks[i]);
    }

    return 0;
}
