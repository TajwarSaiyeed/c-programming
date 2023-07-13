#include <stdio.h>

int main()
{

    /*
        Calculate income tax paid by
        an employee to the government
        as per the slabs mentioned below

        income slab     Tax
        2.5L - 5.0L      5%
        5.0L - 10.0L    20%
        Above  10.0L    30%

        NOTE: There is no text below 2.5L.
        Take the income amount as an input from the user.

    */

    int income;
    float tax = 0;
    printf("Enter your income: ");
    scanf("%d", &income);

    if (income <= 250000)
    {
        printf("Your income is less than 2.5 Lakhs so no tax for you.");
    }
    else if (income > 250000 && income <= 500000)
    {
        printf("Your income is between 2.5 Lakhs and 5.0 Lakhs\n");
        tax = tax + (income - 250000) * (5.0 / 100);
    }
    else if (income > 500000 && income <= 1000000)
    {
        printf("Your income is between 5 Lakhs and 10.0 Lakhs\n");
        tax = tax + (500000 - 250000) * (5.0 / 100);
        tax = tax + (income - 500000) * (20.0 / 100);
    }
    else
    {
        printf("Your income is more than 10.0 Lakhs.\n");
        tax = tax + (500000 - 250000) * (5.0 / 100);
        tax = tax + (1000000 - 500000) * (20.0 / 100);
        tax = tax + (income - 1000000) * (30.0 / 100);
    }

    printf("Your Tax is %f", tax);

    return 0;
}
