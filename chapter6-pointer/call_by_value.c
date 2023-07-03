#include<stdio.h>

int sum(int, int);

int main() {
    int x=10, y = 20;
    printf("The value of a + b is %d",sum(x,y));


    return 0;
}

int sum(int x, int y) {
    return x+y;
}
