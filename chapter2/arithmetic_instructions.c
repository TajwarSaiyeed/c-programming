#include<stdio.h>

int main () {
    /*
        arithmetic instructions
        int i = (3 * 2) + 5
        operator +, -, *, /, %
        operands 3,2,5
    */

    int b =2, c =3;
    int z; z = b*c; // legal
    // int z; b * c =z; // Illegal (Not allowed)

    /*
        % -> Modular division operator
        % -> Returns the reminder
        % -> Cannot be applied on float
        % -> Sign is some as of numerator (-5%2 =1)
        5%2 = 1; -5%2 = -1
    */

    /*
        NOTE:
            No operator is assumed to be present;
            int i = ab; invalid
            int i = a * b; valid
    */

    /*
        There is no operator to perform exponentiation in c
        however we can use pow(x, y) from<math.h>
    */


}
