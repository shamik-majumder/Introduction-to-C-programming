#include <stdio.h>
// Demonstrates 2D arrays from user input and printing them in matrix form
int main()
{
    int arr[3][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("enter value for arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("the value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
    //     }
    // }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}