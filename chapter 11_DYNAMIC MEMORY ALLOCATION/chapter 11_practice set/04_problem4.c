#include <stdio.h>
#include <stdlib.h>

// Create an array dynamically capable of storing 5 integers. Now use realloc so
// that it can now store 10 integers.

int main()
{
    int *ptr;
    int n = 5;
    ptr = (int *)malloc(n * sizeof(int));

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("The integers you entered are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    int new_size = 10;
    ptr = (int *)realloc(ptr, new_size * sizeof(int));
    printf("\nEnter %d more integers:\n", new_size - n);
    for (int i = n; i < new_size; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("The updated list of integers is:\n");
    for (int i = 0; i < new_size; i++)
    {
        printf("%d ", ptr[i]);
    }

    return 0;
}