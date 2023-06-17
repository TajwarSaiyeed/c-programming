#include<stdio.h>

/*
    Relational Operators in C

    Relational operators are used to evaluate
    conditions (true or false) inside the if statement.

    Some examples of relational operators are :
     ___________________________________
    |    == equals                      |
    |    >= greater than or equal to    |
    |    <= less than or equal to       |
    |    >  greater then                |
    |    <  less than                   |
    |    != not equal to                |
    |___________________________________|

    IMPORTANT NOTE:
    "=" is used for assignment where as
    "==" is used for equality check.


    The condition can be any valid expression.
    In c a non-zero value is considered to be true.

    LOGICAL OPERATOR
    &&, || and ! are three logical operators in C
    These are read as "AND", "OR" and "NOT"
    They are used to provide logic to our C Programs.

*/



int main() {

    // Non-zero value

    if (23) {
        printf("Any non zero value is evaluated to true.\n");
    }


    int a = 34, b=5;

    // Usage of logical operators.


    /*
        && "AND" -> is true when both the conditions are true.

        true  &&  true  = true  -> 1 && 1 = true
        false &&  true  = false -> 0 && 1 = false
        true  &&  false = false -> 1 && 0 = false
        false &&  false = false -> 0 && 0 = false
    */

    if (a>7 && b<4) { // check both of this conditions true
        printf("Yes true\n");
    } else {
        printf("No true\n");
    }


    /*
        || "OR" -> is true when at least one of the conditions is true.

        true  || true  = true  -> 1 || 1 = true
        false || true  = true  -> 0 || 1 = true
        true  || false = true  -> 1 || 0 = true
        false || false = false -> 0 || 0 = false
    */


    if (a>7 || b<4) { // check both and check if one condition true
        printf("One is true\n");
    } else {
        printf("Both are false\n");
    }

    /*
        ! => returns true if given false and false if given true
        !false = true  -> !0 = true
        !true  = false -> !1 = false

    */

    if (!(3==3)) {
        printf("false\n");
    }

    if (!(3>30)) {
        printf("true\n");
    }

    /*
        NOTE:
            As the number of conditions increases, the level
            of indentation increases. This reduces readability
            Logical Operators come to rescue in such cases.


        ***
            multiple if statements

            if (condition) {
                ...code
            }

            if (condition) {
                ...code
            }

            if (condition) {
                ...code
            }

        Instead of using multiple if statements, we can also
        use else if along with if thus forming an
        if - else if - else


        NOTE: else if clause is better then multiple if statement

            if(condition) {
                ...code
            } else if (conditions) {
                ...code
            } else if (conditions) {
                ...code
            } else {
                ...code
            }

    */

    int age = 16;

    if (age > 18) {
        printf("You are eligible to drive");
    } else if (age > 15) {
        printf("You are not eligible to drive. but we will check for a toy vehicle for you!");
    } else{
        printf("You can not drive.");
    }


    return 0;
}
