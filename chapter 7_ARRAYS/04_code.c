#include <stdio.h>

// Find Size of Array using Pointer Arithmetic

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    // Calculate size using pointer arithmetic
    int n = *(&arr + 1) - arr; // Points to the end of the array and subtracts the start address

    printf("%d", n);
    return 0;
}