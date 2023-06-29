#include<stdio.h>

/*
    Write a program to calculate force of attraction on a body of mass m exerted by the earth(g=9.8 ms^-2)
*/

float force_of_attraction(float);

int main() {
    float m = 6.9;
    printf("The force of attraction for %.3f is : %.3f", m, force_of_attraction(m));

    return 0;
}


float force_of_attraction(float m) {
    float g = 9.8;
    return m * g;

}
