#include <stdio.h>

// Traverse 3D Array using Pointer Notation

int main()
{
    int arr[2][3][2] = {{{5, 10}, {6, 11}, {7, 12}},
                        {{20, 30}, {21, 31}, {22, 32}}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)

                // *(*(*(arr + i) + j) + k) is equivalent to arr[i][j][k]
                printf("%d ", *(*(*(arr + i) + j) + k)); // Accessing element at i th depth, j th row and k th column using pointer notation
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}