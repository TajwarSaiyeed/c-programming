#include<stdio.h>

int main () {

    /**
        for loop
            The syntax of for loop looks like this:

        for(initialize; test; increment) {
            ...code
            ...code
        }

        initialize -> setting a loop counter to an initial value
        test -> checking a condition
        increment -> updating the loop counter

    */

    int number = 20;


    for (int i=1; i<=10; i++) {
        printf("%d * %d = %d\n", number, i, number*i);
    }

    for (int j=1; j <= number; j++) {
        printf("n = %d\n", j);
    }


    /**
        OUTPUT:
            3 * 1 = 3
            3 * 2 = 6
            3 * 3 = 9
            3 * 4 = 12
            3 * 5 = 15
            3 * 6 = 18
            3 * 7 = 21
            3 * 8 = 24
            3 * 9 = 27
            3 * 10 = 30
    */

    return 0;
}
