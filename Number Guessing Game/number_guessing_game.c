#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
    Project 1: Number Guessing Game

    Write a program that generates a random number and asks the player to
    guess it. If the player's guess is higher than the actual number. The
    program displays "Lower number please". Similarly if the user's guess is
    too low, the program prints "Higher Number please"

    When the user guess the correct number, the program displays the number
    of guesses the player used to arrive at the number.

    Hint:
        Use loops
        Use a random number generator.

*/

int main() {

    int number, guess, nGuesses=1;
    srand(time(0)); // get the system time time(0) as an integer
    number = rand()%100+1; // 1 - 100 random number

    do
    {
        printf("\nGuess the number between 1 to 100: ");
        scanf("%d", &guess);
        if(guess > number) {
            printf("\nLower number please");
        } else if (guess < number) {
            printf("\nGreater number please");
        } else {
            printf("\nYayy you got it!\nYou took %d attempts.", nGuesses);
        }
        nGuesses++;

    } while (guess!=number);

    return 0;
}
