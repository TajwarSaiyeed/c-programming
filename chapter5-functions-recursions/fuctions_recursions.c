#include <stdio.h>

/*
    Functions & Recursions

        Sometimes our program gets bigger in
        size and its not possible for a programmer
        to track which piece of code doing what.

        Function is a way to break our code into
        chunks so that it is possible for a programmer
        to reuse them.

    What is function?

        A function is a block of code which performs a
        a particular task.

        A function can be reused by the programmer in a
        given program any number of times.

    Example and syntax of a function

*/

void display(); // function prototype

/*
    Function Prototype
        Function prototype is a way to tell the compiler about
        the function we are going to define in the program

        void display();

        here "void" indicates that the functions returns nothing.

*/

int main()
{
    int a;
    // function call
    display();
    display();

    /*
        Function Call
            Function call is a way to tell the compiler to execute the function body at the time the call is made.

            NOTE THAT: the program execution starts from the main
            function in the sequence the instructions are written.

    */
    return 0;
}

// function definition
void display()
{
    printf("Hi, display\n");
}

/*
    Function definition
        This part contains the exact set of instructions which are executed during the function call.
        when a function is called from main().
        The main function falls asleep and get temporary suspended.
        During this time the control goes to the function being called.
        When the function body is done executing "main()" resumes.




*/
