#include <stdio.h>

int main()
{

    /**
        i++ -> i is increased by 1
        i-- -> i is decreased by 1


        i++ -> value will print first then increment the value
        i-- -> value will print first then decrement the value

    */

    int i = 10, k = 20;
    printf("i++ = %d", i++);
    printf("\ni = %d", i);
    printf("\nk-- = %d", k--);
    printf("\nk = %d", k);

    /*
        OUTPUT:
            i++ = 10
            i = 11
            k-- = 20
            k = 19
    */

    /**
        ++j -> first increment then print the value
        --j -> first decrement then print the value
    */

    int j = 10, l = 20;
    printf("\n++j = %d", ++j);
    printf("\nj = %d", j);
    printf("\n--l = %d", --l);
    printf("\nl = %d", l);

    /*
        OUTPUT:
            ++j = 11
            j = 11
            --l = 19
            l = 19
    */

    /**
        +++ Operator does not exist => [Important]

        += is compound assignment operator
            just like -=, *=, /=, %= => [Important]

    */

    return 0;
}
