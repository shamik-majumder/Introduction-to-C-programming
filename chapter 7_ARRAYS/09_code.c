#include <stdio.h>

//2D array input from user

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
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]); // Accessing element at i th row and j th column
        }
        printf("\n");
    }

    return 0;
}