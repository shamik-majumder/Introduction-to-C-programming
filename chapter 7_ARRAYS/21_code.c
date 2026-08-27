#include <stdio.h>

// Delete the Given Element from an Array

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void delete(int arr[], int *n, int key)
{

    // Find the element
    int i = 0;
    while (arr[i] != key)
        i++;

    // Shifting the right side elements one
    // position towards left
    for (int j = i; j < *n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }

    // Decrease the size
    (*n)--;
}

int main()
{
    int arr[] = {10, 20, 30, 35, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("The array is:\n");
    printArray(arr, n);

    printf("Enter the element which you want to delete: ");
    scanf("%d", &key);

    // Delete the key from array
    delete(arr, &n, key);

    printf("The array after insertion:\n");
    printArray(arr, n);

    return 0;
}