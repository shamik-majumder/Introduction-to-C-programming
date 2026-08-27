#include <stdio.h>

// Create an array of size 3 x 10 containing multiplication tables
//  for a custom input given by the user of 3 numbers.

int main()
{
    int n1, n2, n3;
    printf("Enter three numbers to generate their multiplication tables:\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    int arr[3][10];
    int num[] = {n1, n2, n3};
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