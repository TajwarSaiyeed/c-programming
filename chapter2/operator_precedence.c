#include<stdio.h>

int main() {


    /*
     3 * x - 8 * y is (3x)-(8y) or 3(x-8y) = ????

     In C language simple mathematical rules like
     BODMAS, no longer applies.

     The answer to the above question is provided
     by operator precedence & associativity;

    */

    /*

     Operator precedence

     The following table lists the operator priority in c

     Priority Operators
     1st        * / %
     2nd        + -
     3rd        =

     Operators of the highest priority are evaluated first
     in the absence of parenthesis (), {}, []

     */


     int a = 3+9*5-2;

     printf("value of a is %d", a); //46

     /*
        =3+9*5-2
        =3+45-2 // *
        =48-2   // +
        =46     // -
     */


     /*
        Operator Associativity

        When operators of equal priority are present in
        an expression, the tic is taken care of by associativity;

        x * y / z => (x*y)/z;
        x / y * z => (x/y)*z;

        NOTE: *, / follows left to right associativity;

     */

     int b = 9/3*2-5;

     printf("%d", b); // 1

     /*
        =9/3*2-5
        =3*2-5
        =6-5
        =1
     */





    return 0;
}
