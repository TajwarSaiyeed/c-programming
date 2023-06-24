#include<stdio.h>
/*
    Write a program to calculate the sum of
    the numbers occurring in the mulitiplication
    table of 8

*/

int main() {
    int sum = 0;
    for (int i = 1; i<=10; i++) {
        printf("The value %d X %d = %d\n", 8, i, 8*i);
        sum += (i * 8);
    }

    printf("\nThe value of sum is: %d", sum);


    return 0;
}
