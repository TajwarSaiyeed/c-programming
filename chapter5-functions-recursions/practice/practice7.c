#include <stdio.h>
/*
    Write a program using functions to print the
    following pattern (first n line)

    *
    ***
    *****

*/
void star(int);

int main()
{
    star(4);
    return 0;
}

void star(int n)
{
    for (int i = 0; i < n; i++)
    {
        // printf("%d", i);
        // print 2i + 1 stars
        // 2i+1 will yield 1,3,5,7 for i = 0, 1, 2
        for (int j = 0; j < (2 * i + 1); j++)
        {
            // printf("%d",j);
            printf("*");
        }
        printf("\n");
    }
}
