#include<stdio.h>
/*
    Write a program to sum first ten natural
    numbers using (do while loop);
*/


int main() {

    int sum = 0, i=1;

    do{
        sum +=i;
        i++;
    }while(i<=10);

    printf("The sum of first ten natural numbers is : %d", sum);

    return 0;
}

