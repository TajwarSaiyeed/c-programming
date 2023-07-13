#include <stdio.h>

int main()
{

    /*
        do-while loop
            the syntax of do-while loop looks like this

        do{
            ...code
        } while (condition)


        do-while loop works very similar to while loop.
        while -> checks the condition & then execute the loop
        do-while -> executes the code & then checks the condition


        NOTE:
            do-while loop = while loop which executes at least once. !important
    */

    int i = 7;

    do
    {
        printf("I = %d\n", i);
        i++;
    } while (i < 5);

    /*
        first do and than check the while (condition). if condition false it will stop the program
        output:
            I = 7

    */

    return 0;
}
