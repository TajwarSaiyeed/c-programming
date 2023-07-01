#include<stdio.h>
/*
    A pointer is a variable which stores the address of another variable

    example:

     i = 72                     j = 87994
     address => 87994           address => 87998


     j is a pointer
     j points to i

     The "address of" (&) operator
     The address of operator is used to obtain the address of a given variable

     if you refer to the diagrams above

        &i => 87994
        &j => 87998

    Format specifier for printing pointer address is "%u"

    The value of address operator (*)
    The value at address of * operator is used to obtain the value
    of present at a given memory address. It is denoted by *

    *(&i) = 72
    *(&j) = 87994



    8 bit = 1 byte
    1024 byte = 1 mb
    1024 mb = 1 gb
*/

int main() {
    int i = 72; // 4 bytes
    int j = 45;
    // & operator or address of operator
    printf("The address of i is %u, value at &i %d\n", &i, *(&i));
    printf("The address of j is %u, value at &j %d\n", &j, *(&j));
    return 0;
}













