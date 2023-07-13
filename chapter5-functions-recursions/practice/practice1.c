#include <stdio.h>
/*
    Write a program using functions to find average of three numbers.
*/

double average(float, float, float);

int main()
{

    float num1 = 4.2, num2 = 9, num3 = 5.6;

    printf("The average of %.2f, %.2f, %.2f, %lf", num1, num2, num3, average(num1, num2, num3));
    // output: The average of 4.20, 9.00, 5.60, 6.266667

    return 0;
}

double average(float a, float b, float c)
{
    return (a + b + c) / 3;
}
