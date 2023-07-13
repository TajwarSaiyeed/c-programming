#include <stdio.h>

int main()
{

    float length, breadth;
    printf("length of Rectangle: ");
    scanf("%f", &length);
    printf("breadth of Rectangle: ");
    scanf("%f", &breadth);

    printf("Area of Rectangle: %.3f", length * breadth);

    getch();
}
