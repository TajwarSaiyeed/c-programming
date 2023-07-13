#include <stdio.h>

/*
    Write a program using function to convert
    Celsius temperature into Fahrenheit.
*/

float c2f(float);

int main()
{
    float celsius = 37;
    float fahrenheit = c2f(celsius);
    //(0C X 9/5)+32 = 32F

    printf("The value of %.3f degree Celsius in Fahrenheit is %f", celsius, fahrenheit);

    return 0;
}

float c2f(float c)
{
    float f = (c * 9 / 5.0) + 32;
    return f;
}
