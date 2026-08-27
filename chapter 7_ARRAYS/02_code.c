#include <stdio.h>
// Array Traversal
// reverse order printing of array elements

int main()
{
    int arr[5] = {2, 4, 8, 12, 16};

    // Printing array elements in normal order
    printf("Printing Array Elements\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Printing array element in reverse order
    printf("Printing Array Elements in Reverse\n");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}