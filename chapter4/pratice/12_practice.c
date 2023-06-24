

#include<stdio.h>

/*
    Write a program to check whether a given
    number is prime or not using loops

    while loop

    What is a prime answer?

    A prime number is divisible only by 1
    and the number itself.
    For example, 3 is divisible only by 1 and 3.
*/

int main() {

    int n = 9, isPrime=1, i = 2;

    while(i < n) {
        if (n%i == 0) {
            isPrime = 0;
            break;
        }
        i++;
    }
    if(isPrime) {
            printf("%d is a prime number", n);
        } else {
            printf("%d is not prime number", n);
        }



    return 0;
}

