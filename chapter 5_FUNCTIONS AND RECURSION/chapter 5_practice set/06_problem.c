#include <stdio.h>

// Write a recursive function to calculate the sum of first ‘n’ natural numbers.

// sum of n th natural numbers = 1 + 2 + 3 + 4 + 5 .... + n-1 + n
// sum(n) = sum(n-1) + n

float sum_natural(float);

float sum_natural(float n)
{
    if (n == 1)
        return 1;
    else
        return sum_natural(n - 1) + n;
}

int main()
{
    int n = 5;
    printf("the sum_natural of the first %d natural numbers is %.2f\n", n, sum_natural(n));
    return 0;
}