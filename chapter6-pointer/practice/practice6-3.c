#include<stdio.h>
/*
    Problem 3: Write a program to change the value of a variable to ten times of its current value.
    write a function and pass the value by reference.

    void change(int*);

    int main(){
        int i = 1000;
        printf("The value of i before change function run is: %d\n", i);
        change(&i);
        printf("The value of i after change function run is: %d\n", i);
        return 0;
    }

    void change(int *a) {
        *a = *(a) * 10;
    }

*/

/*
    Problem 6: Try problem 3 using call by value and verify that it doesn't change
    the value of the said variable.
*/


    void change(int);

    int main(){
        int i = 10;
        printf("The value of i before change function run is: %d\n", i);
        change(i);
        printf("The value of i after change function run is: %d\n", i);
        return 0;
    }

    void change(int a) {
        a = a * 10;
    }

