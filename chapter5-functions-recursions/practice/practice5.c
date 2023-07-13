#include <stdio.h>

/*
    What will the following line produce in a c program:
    printf("%d %d %d\n",a, ++a, a++);

*/

int main()
{
    int a = 10;
    printf(" a = %d\n ++a = %d\n a++ = %d\n", a, ++a, a++);
    return 0;
}
