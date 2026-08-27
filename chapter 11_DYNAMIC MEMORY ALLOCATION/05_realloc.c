#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    printf("Enter total number of elements: "); // array size
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int)); // Dynamic memory allocation by malloc function
    // ptr = (int *)calloc(n, sizeof(int)); // Dynamic memory allocation by calloc function

    printf("Enter elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]); // Taking input
    }
    printf("You entered: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]); // Printing output
    }
    ptr = (int *)realloc(ptr, 2 * n * sizeof(int)); // Reallocating memory to double the size
    printf("\nEnter %d more elements: \n", n);
    for (int i = n; i < 2 * n; i++)
    {
        scanf("%d", &ptr[i]); // Taking additional input
    }
    printf("You entered: \n");
    for (int i = 0; i < 2 * n; i++)
    {
        printf("%d ", ptr[i]); // Printing all output
    }
    return 0;
}
