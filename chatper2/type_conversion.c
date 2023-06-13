#include<stdio.h>

int main() {

    /*
        Type Conversion

        An Arithmetic Operation Between

        int and int = int;
        int and float = float;
        float and float = float;

        5/2 => 2;
        5.0/2 => 2.5; // important
        2/5 =0;
        2.0/5 => 0.4; // important
    */

    // NOTE

    int a = 3.5;
    /*
        In this case 3.5 (float) will be
        demoted to 3 (int) because a is
        not able to store float.

    */
    printf("%d \n", a); // 3

    float b = 8; // a will store 8.0; 8 => 8.0 (promotion to float)

    int x = 3.0/9;

    printf("%d \n", x); // x = 0

    float x2 = 3.0/9;

    printf("%f \n", x2); // x2 = 0.33333

    return 0;
}
