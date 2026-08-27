#include <stdio.h>

// Write a program using recursion to calculate n th element of Fibonacci series.

// Fibonacci series = 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
// fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)

int fibonacci(int);

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1 || n == 2)
        return n - 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n = 5;
    printf("%d th element of Fibonacci series is  %d\n ", n, fibonacci(n));

    return 0;
}