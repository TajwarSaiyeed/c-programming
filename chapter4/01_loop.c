#include<stdio.h>

int main() {
    /*
        while loop
            while(condition is true) {
                ...run the code
            }

            This block keeps executing as long as
            the condition is true.

            The loop counter need not be int, it can be float as well
    */

    int i = 1;

    while(i<=10) {
        printf("The value of i is: %d\n", i);
        i++;

        /*
            OUTPUT:
            The value of i is: 1
            The value of i is: 2
            The value of i is: 3
            The value of i is: 4
            The value of i is: 5
            The value of i is: 6
            The value of i is: 7
            The value of i is: 8
            The value of i is: 9
            The value of i is: 10

        */

        /**
            NOTE: IF the condition never becomes false,
            the while loop keeps getting executed. Such a loop
            is known as an infinite loop
        **/
    }


    return 0;
}
