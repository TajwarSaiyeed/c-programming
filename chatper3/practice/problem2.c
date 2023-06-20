#include<stdio.h>

/*
    Write a program to find out whether a student
    is pass or fail if it requires total 40% and at
    least 33% in each subject to pass. Assume 3 subjects
    and take marks as an input from the user.

*/

int main() {

    int sub1, sub2, sub3;
    printf("Enter marks for subject 1: ");
    scanf("%d", &sub1);
    printf("\nEnter marks for subject 2: ");
    scanf("%d", &sub2);
    printf("\nEnter marks for subject 3: ");
    scanf("%d", &sub3);

    float total = (sub1 + sub2 + sub3)/3;

    if(total >= 40) {
        if (sub1<33 || sub2 <33 || sub3 < 33){
            printf("Sorry you are not passed because your marks in one of the subjects is less than 33");
        } else {
            printf("Congratulation you have passed the exam.");
        }

    } else {
        printf("Sorry you are not passed because your marks are less then then 40%%");
    }



    return 0;
}
