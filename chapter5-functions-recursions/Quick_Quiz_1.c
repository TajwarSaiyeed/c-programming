#include<stdio.h>

/*
    Quick Quiz:
        Write a program with three functions
        1. Good morning functions which print "Good Morning"
        2. Good afternoon functions which print "Good Afternoon"
        3. Good night functions which print "Good Night"

    main() should call all of these in order 1>2>3

*/


// function prototype
void good_morning(),good_afternoon(),good_night();


int main() {
    // function call
    good_morning();
    good_afternoon();
    good_night();
    return 0;
}

// functions definition
void good_morning(){
    printf("Good Morning\n");
}
void good_afternoon(){
    printf("Good Afternoon\n");
}
void good_night(){
    printf("Good Night\n");
}
