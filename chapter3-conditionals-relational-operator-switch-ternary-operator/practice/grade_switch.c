#include <stdio.h>

/*
    Write a program to find grade of a student give his
    mark based on below:

    -> 80 - 100 = A +
    -> 70 - 79  = A
    -> 60 - 69  = A-
    -> 50 - 59  = B
    -> 40 - 49  = C
    -> 33 - 39  = D
    -> < 33    = F

*/

int main()
{

    int marks;
    printf("Enter your mark: ");
    scanf("%d", &marks);

    int grade = marks / 10;

    // Here is a bug
    switch (grade)
    {
    case 10:
    case 9:
    case 8:
        printf("Grade: A+\n");
        break;
    case 7:
        printf("Grade: A\n");
        break;
    case 6:
        printf("Grade: A-\n");
        break;
    case 5:
        printf("Grade: B\n");
        break;
    case 4:
        printf("Grade: C\n");
        break;
    case 3:
        printf("Grade: D\n");
        break;
    default:
        printf("Grade: F\n");
        break;
    }

    // without bug

    if (marks >= 80 && marks <= 100)
    {
        printf("You got A+");
    }
    else if (marks >= 70 && marks <= 79)
    {
        printf("You got A");
    }
    else if (marks >= 60 && marks <= 69)
    {
        printf("You got A-");
    }
    else if (marks >= 50 && marks <= 59)
    {
        printf("You got B");
    }
    else if (marks >= 40 && marks <= 49)
    {
        printf("You got C");
    }
    else if (marks >= 33 && marks <= 39)
    {
        printf("You got D");
    }
    else
    {
        printf("You got F or You are fail");
    }

    return 0;
}
