#include <stdio.h>

// Write a program using function to find average of three numbers.

float calculate_average(int, int, int);

float calculate_average(int a, int b, int c)
{
    return (a + b + c) / 3;
}

int main()
{
    printf("Average of 3, 4, and 5 is: %f\n", calculate_average(3, 4, 5));
    return 0;
}