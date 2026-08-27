#include <stdio.h>

// Delete the Last Element from an Array

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void deleteLast(int arr[], int *n)
{

    // Decrease the size
    (*n)--;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The array is:\n");
    printArray(arr, n);

    // Delete the last element
    deleteLast(arr, &n);

    printf("The array after insertion:\n");
    printArray(arr, n);

    return 0;
}