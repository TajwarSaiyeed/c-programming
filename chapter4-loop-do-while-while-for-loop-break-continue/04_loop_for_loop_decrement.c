#include <stdio.h>

int main()
{

    for (int i = 5; i; i--)
    {
        printf("%d\n", i);
        /*
        This for loop will keep on running until i becomes 0;
        The loop runs in following steps:
            1. i is initialized to 5.
            2. The condition "i" (0 or non 0) is tested.
            3. The code is executed.
            4. i is decremented.
            5. Condition i is checked & code is executed if its not 0.
            6 & so on until i is non 0.

            OUTPUT:
            5 i=4
            4 i=3
            3 i=2
            2 i=1
            1 i=0
        */
    }

    return 0;
}
