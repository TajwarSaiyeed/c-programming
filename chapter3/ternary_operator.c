#include<stdio.h>

/*
    Conditional operators

    A short hand "if-else" can be written using the
    conditional or ternary operators.

    ternary operator => { ? : }

    condition ? expression if true : expression if false
    if(true) { express if true } else { expression if false}

*/


int main() {

    int b = 8;
    int c = 6;
    // condition true ? assign 3 : assign 7
    int a = (c==b) ? 3 : 7;
    printf("The value of a is : %d", a);
    return 0;
}
