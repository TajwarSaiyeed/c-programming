#include<stdio.h>

/*
    What will be the output of the problem
*/

int main() {

    int a = 10;

    // wrong code
    if(a=11) {
        printf("a is 11");
    } else {
        printf("a is 10");
    }




    // Right code
    if(a==11) {
        printf("a is 11");
    } else {
        printf("a is 10");
    }


    return 0;
}
