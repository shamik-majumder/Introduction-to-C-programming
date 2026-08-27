#include <stdio.h>

// Passing 2D array to function using pointer

// Funtion that takes 2d array as parameter
void print2DArray(int (*arr)[3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            printf("%d ", *(*(arr + i) + j)); // Accessing element at i th row and j th column
        printf("\n");
    }
}

int main()
{
    int arr[3][3];
    printf("Enter elements for a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]); // Taking input for element at i th row and j th column
        }
    }
    print2DArray(arr, 3, 3); // Passing 2D array to function using pointer

    return 0;
}