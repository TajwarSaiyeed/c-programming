#include<stdio.h>
/*
    Write a program to sum first ten natural
    numbers using (for loop);
*/


int main() {

    int sum = 0;

    for(int i = 1; i <= 10; i++) {
        sum +=i;
    }

    printf("The sum of first ten natural numbers is : %d", sum);

    return 0;
}
