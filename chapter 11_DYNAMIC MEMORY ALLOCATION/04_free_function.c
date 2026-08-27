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
    free(ptr); // Freeing the allocated memory

    return 0;
}
