#include<stdio.h>
/*
    Chapter 7 - Array

    An array is a collection of similar elements.

    one variable => capable of storing multiple values.

*/

int main () {
    /*
        Syntax

        The syntax of declaring an array looks like this:
    */

    int marks[6]; // integer array
    char name[20]; // character array or string
    float pecentic[90]; // float array

    // The values can now be assigned to marks array like this:

    marks[0] = 33;
    marks[1] = 12;
    marks[2] = 19;
    marks[3] = 1244;
    marks[4] = 1252;
    marks[5] = 15;

    /*
    NOTE: It is very important to note that the array *index starts with 0;
    */
    // marks: [7,6,5,7,9,12,110,55,10]
    // index: [0,1,2,3,4, 5,  6, 7, 8]


    //for (int i = 0; i < marks; i++) {
      //  printf("marks: %d is %d\n", i, marks[0]);
    //}


    printf("marks: 0 is %d\n", marks[0]);
    printf("marks: 1 is %d\n", marks[1]);
    printf("marks: 2 is %d\n", marks[2]);
    printf("marks: 3 is %d\n", marks[3]);
    printf("marks: 4 is %d\n", marks[4]);
    printf("marks: 5 is %d\n", marks[5]);

    /*
        Output:
        marks: 0 is 33
        marks: 1 is 12
        marks: 2 is 19
        marks: 3 is 1244
        marks: 4 is 1252
        marks: 5 is 15

    */

    return 0;

}
