#include <stdio.h>
#include <stdlib.h>

// Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to 
// make it store 15 number (from 7 x 1 to 7 x 15)

int main()
{
    int *ptr;
    int n = 10;
    ptr = (int *)malloc(n * sizeof(int));

    printf("The multiplication table of 7 upto 10:\n");
    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7 * (i + 1);
        printf("7 x %d = %d\n", i + 1, ptr[i]);
    }

    int new_size = 15;
    ptr = (int *)realloc(ptr, new_size * sizeof(int));
    printf("\nThe multiplication table of 7 upto 15:\n");
    for (int i = n; i < new_size; i++)
    {
        ptr[i] = 7 * (i + 1);
        printf("7 x %d = %d\n", i + 1, ptr[i]);
    }

    return 0;
}