#include <stdio.h>
/*
    This function is capable of swapping the values passed to it.
    if a = 3 and b = 7 before a call swap(a,b), a=7 and b =3 after
        calling swap

        Main func: Value of a and b before swap: 3 and 7
        Swap func: Value of a and b before swap: 3 and 7
        Swap func: Value of a and b after swap: 7 and 3
        Main func: Value of a and b after swap: 7 and 3

*/
void swap(int *, int *);

int main()
{
    int a = 3;
    int b = 7;
    printf("Main func: Value of a and b before swap: %d and %d\n", a, b);
    swap(&a, &b);
    printf("Main func: Value of a and b after swap: %d and %d\n", a, b);
    return 0;
}

void swap(int *a, int *b)
{
    printf("Swap func: Value of a and b before swap: %d and %d\n", *a, *b);
    int temp;
    temp = *a; // a = 3, temp = 3, b = 7;
    *a = *b;   // a = 7, temp = 3, b = 7;
    *b = temp; // a = 7, temp = 3, b = 3
    printf("Swap func: Value of a and b after swap: %d and %d\n", *a, *b);
}
