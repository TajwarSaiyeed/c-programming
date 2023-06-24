#include<stdio.h>

int main() {

    /*
        What data type will 3.0/8-2 return ?

        ANS: DOUBLE
    */

    int a2 = 3.0/8-2;
    float a3 = 3.0/8-2;

    printf("%d\n", a2); //-1
    printf("%f", a3); // -1.625000



    return 0;
}
