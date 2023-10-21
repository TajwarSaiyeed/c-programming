/*
    Snake water gun || rock paper seissors

    Snake water gun or rock paper seissors is a game
    most of us have played during school time.


    Write a c program capable of playing this game with you.

    Your program should be able to print the result after you
    choose snake/water or gun.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakeWaterGun(char you, char comp)
{
    if (you == comp)
        return 0;
    else if ((you == 's' && comp == 'w') || (you == 'w' && comp == 'g') || (you == 'g' && comp == 's'))
        return 1;
    else
        return -1;
}

int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 100 + 1;

    if (number < 33)
        comp = 's';
    else if (number > 33 && number < 66)
        comp = 'w';
    else
        comp = 'g';

    printf("Select 's' for snake, 'w' for water and 'g' for gun\n");

    scanf("%c", &you);

    int result = snakeWaterGun(you, comp);

    if (result == 0)
        printf("Game Drawn\n");
    else if (result == 1)
        printf("You win\n");
    else
        printf("You lose\n");

    printf("You choose %c and the computer choose %c", you, comp);

    return 0;
}