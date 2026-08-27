// Print Table from 1 to 5 Using For Loop

#include <stdio.h>

int main()
{

    // Outer for loop to print a multiplication
    // table for all numbers upto 5
    for (int i = 1; i <= 5; i++)
    {

        // Inner loop to print each value in table
        for (int j = 1; j <= 5; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }
    return 0;
}