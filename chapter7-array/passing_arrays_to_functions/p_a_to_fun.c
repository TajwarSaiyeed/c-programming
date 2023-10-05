/*
    Passing arrays to functions

    Arrays can be passed to the functions like this

    printArray(arr, n);  // function call

    void printArray(int arr[], int n) // function prototype
    {
        ...
    }

    ====> or <====

    printArray(&arr[0], n);  // function call

    void printArray(int *arr, int n) // function prototype
    {
        ...
    }

*/