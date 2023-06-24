/*
Explain step by step calculation of
    3 * x / y - z + k
    where
        x = 2
        y = 3
        z = 3
        k =1
*/

#include<stdio.h>

int main () {

    int x = 2, y =3, z =3, k = 1, result;
    result =3 * x / y - z + k;
    printf("= 3 * %d / %d - %d + %d\n", x, y, z,k);
    printf("= 6 / %d - %d + %d\n", y, z,k);
    printf("= 2 - %d + %d\n",z,k);
    printf("= -1 + %d\n",k);
    printf("= %d", result);

    /*

    problem 5:

    3.0 + 1 will be:
        1. Integer
        2. Floating point Number [Answer]
        3. Character

    */


    return 0;
}
