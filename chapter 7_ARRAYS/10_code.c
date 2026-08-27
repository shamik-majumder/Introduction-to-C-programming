#include <stdio.h>

//passing 2D array by function

void print2DArray(int arr[3][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]); // Accessing element at i th row and j th column
        }
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
    printf("The entered 2D array is:\n");
    print2DArray(arr, 3, 3);
    return 0;
}