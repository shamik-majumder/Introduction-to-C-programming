#include <stdio.h>

// Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 
// and 9 respectively.

int main()
{
    int arr[3][10];
    int num[] = {2, 7, 9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = num[i] * (j + 1);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Multiplication table of %d is:\n", num[i]);
        for (int j = 0; j < 10; j++)
        {
            printf("%d X %d = %d\n", num[i], j + 1, arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}