#include <stdio.h>

int main()
{
    /*
        # Initialization of an Array
        There are many other ways in which an array can be initialized.
    */

    // Arrays can be initialized while declare

    int cgpa[3] = {9, 8, 8};
    float marks[4] = {3.3, 4.0, 99, 20};

    /*
        # Arrays in memory

        Consider this array:
    */

    int arr[3] = {1, 2, 3};
    // 1 integer = 4 bytes
    // 1 bytes = 8 bits

    /*
        This will reserve 4x3=12 bytes in memory 4 bytes for each integer.

       _________________________________________
      |    1,     2,     3                      |
      |  62302, 62306, 62310 <= array in memory |
       -----------------------------------------
    */

    for (int i = 0; i < 4; i++)
    {
        printf("The marks scored by student %d is %.2f\n", i + 1, marks[i]);
    }

    return 0;
}
