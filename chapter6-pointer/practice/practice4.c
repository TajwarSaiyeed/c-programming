#include<stdio.h>
/*
    Write a program using a function which calculate the sum and average of two numbers.
    use pointers and print the values of sum and average in main
*/

void sumAndAverage(float, float, float*, float*);

int main(){
    float a= 25, b=2,sum ,avg;

    printf("sum before, %f, sum %f\n", a+b, sum);
    printf("Avg before, %f, avg %f\n", (a+b)/2, avg);

    sumAndAverage(a, b, &sum, &avg);

    printf("sum after, %f\n", sum);
    printf("Avg after, %f\n", avg);

    return 0;
}

void sumAndAverage(float a, float b, float *sum, float *avg) {
    *sum = a + b;
    *avg = (a + b) / 2;
}
