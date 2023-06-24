
#include<stdio.h>

/*
    write a program to print multiplication
    table of a given number n

    NOTE: => reverse order

*/

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(int i = 10; i >= 1; i--) {
        printf("%d X %d = %d\n", n, i, n*i);
    }

    /*
        OUTPUT:
            Enter the value of n: 5
                5 X 10 = 50
                5 X 9 = 45
                5 X 8 = 40
                5 X 7 = 35
                5 X 6 = 30
                5 X 5 = 25
                5 X 4 = 20
                5 X 3 = 15
                5 X 2 = 10
                5 X 1 = 5
    */


    return 0;
}
