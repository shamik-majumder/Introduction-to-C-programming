#include <stdio.h>

// create a metrix of 3*3*3 using 3d array

int main()
{
    int arr[3][3][3];
    printf(" Enter 27 values for the 3x3x3 matrix:\n");

    // Input values into the 3D array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
    // Output the values from the 3D array
    printf(" The 3x3x3 matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}