#include <stdio.h>

// Insert an Element at the End of an Array

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertLast(int arr[], int *n, int val)
{

    // Insert val at last
    arr[*n] = val;

    // Increase the current size
    (*n)++;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int value;
    printf("The array is:\n");
    printArray(arr, n);
    printf("Enter the value to insert at the end of the array: ");
    scanf("%d", &value);

    // Insert the value at the end
    insertLast(arr, &n, value);
    printf("The array after insertion:\n");
    printArray(arr, n);

    return 0;
}