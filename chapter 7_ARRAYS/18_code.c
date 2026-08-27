#include <stdio.h>

// Insert Element at Specific Position

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insert(int arr[], int *n, int pos, int val)
{

    // Shift elements to the right
    for (int i = *n; i > pos; i--)
        arr[i] = arr[i - 1];

    // Insert val at the specified position
    arr[pos] = val;

    // Increase the current size
    (*n)++;
}

int main()
{
    int arr[] = {20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pos, value;
    printf("The array is:\n");
    printArray(arr, n);

    printf("Enter the position (1 to %d) where you want to insert: ", n + 1);
    scanf("%d", &pos);
    // Convert 1-based to 0-based
    pos--;

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    insert(arr, &n, pos, value);

    printf("The array after insertion:\n");
    printArray(arr, n);

    return 0;
}