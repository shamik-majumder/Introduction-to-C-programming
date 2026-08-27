#include <stdio.h>

// Reverse Array Elements Using Temporary Array

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverseArray(int arr[], int n)
{
    int temp[n];

    // Store elements into temp in reverse order
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[n - 1 - i];
    }
    // temp[i] = arr[n - 1 - i]
    // temp[0] = arr[5 - 1 - 0] = arr[4],
    // temp[1] = arr[5 - 1 - 1] = arr[3],
    // temp[2] = arr[5 - 1 - 2] = arr[2],
    // temp[3] = arr[5 - 1 - 3] = arr[1],
    // temp[4] = arr[5 - 1 - 4] = arr[0] ....

    // Copy reversed array back to original array
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Print the array as same as arr[]
    printf("Original array: ");
    printArray(arr, n);

    // Reverse the array arr[]
    printf("Reversed array: ");
    reverseArray(arr, n);

    return 0;
}