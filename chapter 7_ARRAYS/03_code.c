#include <stdio.h>

// Find Size of Array

int main()
{
    int arr[5] = {2, 4, 8, 12, 16};

    int size = sizeof(arr) / sizeof(arr[0]); // Total size of array divided by size of one element
    printf("%d", size);
    return 0;
}