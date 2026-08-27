#include <stdio.h>

// Traverse Array using Pointer to First Element

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array

    // Defining the pointer to first element of array
    int *ptr = &arr[0]; // or simply int *ptr = arr;

    // Traversing array using pointer arithmetic
    for (int i = 0; i < n; i++) // or i < 5
        printf("%d ", ptr[i]);
    return 0;
}