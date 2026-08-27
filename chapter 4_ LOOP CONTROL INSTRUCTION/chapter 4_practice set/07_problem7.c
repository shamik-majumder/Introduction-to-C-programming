#include <stdio.h>

// Write a program to calculate the sum of the numbers occurring in the 
// multiplication table of 5. (consider 5 x 1 to 5 x 10).

int main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum = sum + (5 * i);
    }
    printf("the sum of the numbers occuring in the multiplication table of 5 is %d\n", sum);

    return 0;
}