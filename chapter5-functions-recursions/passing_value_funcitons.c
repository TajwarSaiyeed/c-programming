#include<stdio.h>

/*
    Passing values to functions

        We can pass values to a functions and can
        get a value in return from the functions

*/

int sum(int a, int b), change(int f); // function prototype
/*
    The above prototype means that sum is a functions
    which takes values a (of type int) and b(of type int)
    and return a value of type int.
*/


int main () {

    int c=20, d=30;

    // values
    int answer = sum(100, 6);

    // variable placeholders
    int answer2 = sum(c, d);
                    // here c & d are arguments

     /*
        Note:
            1. Parameters are the values or variable placeholders in the function. Ex a & b;

            2. Arguments are the actual values passed to the function to make a call. Ex 2 & 3;

            3. A functions can return only one value at a time.

            4. If the passed variable is changed inside the function,
                the functions call does not  change the value in the calling functions
     */





    printf("The value of sum (answer) : %d\n", answer);
    // OUTPUT: The value of sum : 106

    printf("The value of sum (answer2) : %d\n", answer2);

    int f = 75;

    change(d);

    printf("\nThe value of f is: %d", f); // 75

    return 0;
}



// function definition of sum can be:

int sum(int a, int b) {
    // a & b are parameters
    int sum;
    sum = a + b;
    return sum;
}

int change(int f) {

    f = 77;

    printf("\nchange f: %d", f); // change f: 77

        /* 4. If the passed variable is changed inside the function,
                the functions call does not  change the value in the calling functions */

    return f;
}
