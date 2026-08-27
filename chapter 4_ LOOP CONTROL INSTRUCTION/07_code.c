// Hybrid Nested Loops

#include <stdio.h>

int main()
{
    int i = 1;
    while (i <= 2)
    {
        // Outer while loop
        for (int j = 1; j <= 2; j++)
        {
            // Inner for loop
            printf("i = %d, j = %d\n", i, j);
        }
        i++;
    }
    return 0;
}