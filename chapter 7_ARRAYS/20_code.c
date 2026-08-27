#include <stdio.h>

// replace Element at Specific Position in an Array

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void replace(int arr[], int n, int pos, int val)
{
    if (pos < 0 || pos >= n)
    {
        printf("Invalid position!\n");
        return;
    }
    arr[pos] = val;
}

int main()
{
    int arr[] = {10, 20, 30, 60, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pos, value;
    printf("The array is:\n");
    printArray(arr, n);

    printf("Enter the position (1 to %d) where you want to replace: ", n + 1);
    scanf("%d", &pos);
    // Convert 1-based to 0-based
    pos--;

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    replace(arr, n, pos, value);

    printf("The array after replacement:\n");
    printArray(arr, n);

    return 0;
}