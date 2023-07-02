/*
    Pointer to a pointer

    Just like j is pointer to i or storing the address of i,
    we can have another variable k which can further store
    the address of j, what will be the type of k

    int i; int *j;
    j = &i;
    int **k;
    k = &j;


    i = 72              j = 87994           k = 87998
    add 87994           add 87998           add 88004
    int                 int*                int**

    We can even go further one level and create a variable l of
    type int*** to store the address of k. We mostly use int* &
    int** sometimes in real world programs.

*/
