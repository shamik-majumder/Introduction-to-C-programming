// Nested for loop refers to any type of loop that is defined inside a 'for' loop.

#include <stdio.h>

int main()
{

    // limit for i
    int m = 4;

    // limit for j
    int n = 5;

    // Outer loop
    for (int i = 0; i < m; i++)
    {
        printf("i = %d: ", i);

        // InnerLoop
        for (int j = 0; j < n; j++)
        {
            printf("%d ", i * n + j);
        }
        printf("\n");
    }

    return 0;
}