#include<stdio.h>
/*
    Write a program to accept marks of five students in an array
    and print them to the screen
*/


int main() {
    int marks[5];
    printf("Enter 5 marks: ");
    scanf("%d %d %d %d %d", &marks[0], &marks[1], &marks[2], &marks[3],&marks[4]);
    printf("Marks one is: %d\nMarks two is: %d\nMarks three is: %d\nMarks four is: %d\nMarks five is: %d", marks[0], marks[1], marks[2], marks[3], marks[4]);
    return 0;
}
