#include <stdio.h>

int main()
{
    int r, t;
    float A, p;

    printf("Enter the initial princpal balance: ");
    scanf("%f", &p);
    printf("For how many year: ");
    scanf("%d", &t);
    printf("Enter the annual interest rate (eg: 4, 5): ");
    scanf("%d", &r);

    A = (p * r * t) / 100;

    printf("The Final ammount is : %.2f", A);

    return 0;
}
