#include<stdio.h>

/*
    Write a program to determine whether a
    character entered by user is lowercase or not.
*/


int main() {

    char ch;
    printf("Enter your character: ");
    scanf("%c", &ch);
    if (ch >= 97 && ch <= 122){
        printf("YES, This is a lowercase character");
    } else {
        printf("NO, This is not a lowercase character");
    }
    return 0;
}
