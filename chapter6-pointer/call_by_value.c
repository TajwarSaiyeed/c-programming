#include<stdio.h>

int sum(int, int);

int main() {
    int x=10, y = 20;
    printf("The value of x + y is %d\n",sum(x,y));
    printf("The value of x and y is %d and %d",x, y);


    return 0;
}

int sum(int x, int y) {
    x=26;
    return x+y;
}
