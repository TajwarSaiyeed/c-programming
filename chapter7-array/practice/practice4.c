/*
    Repeat problem 3 for a general input provided
    by the user using input
*/

#include <stdio.h>

int main()
{

    int n;
    int arr[10];

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i + 1);
        printf("The value of %d X %d is %d\n", n, (i + 1), arr[i]);
    }

    return 0;
}