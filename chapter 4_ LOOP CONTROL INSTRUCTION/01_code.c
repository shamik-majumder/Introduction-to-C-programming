// Multiplication Table from 1 to 5

#include <stdio.h>

int main()
{

    // Initialize outer loop counter
    int i = 1;

    // Outer while loop to print a multiplication
    // table for all numbers up to 5
    while (i <= 5)
    {

        // Initialize inner loop counter for each row
        int j = 1;

        // Inner while loop to print each value in table
        while (j <= 5)
        {
            printf("%d ", i * j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}