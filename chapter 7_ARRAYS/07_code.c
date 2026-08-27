#include <stdio.h>

// Traverse 2D Array using Pointer Notation

int main()
{
    int arr[3][3] = {{1, 2, 3}, {5, 6, 7}, {9, 10, 12}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)

            // *(*(arr + 1) + j) is equivalent to arr[1][j]
            printf("%d ", *(*(arr + i) + j)); // Accessing element at i th row and j th column using pointer notation
        printf("\n");
    }

    return 0;
}