#include <stdio.h>

// Write a program using a function which calculates the sum and average of two 
// numbers. Use pointers and print the values of sum and average in main(). 

int sum(int *, int *);
float average(int *, int *);

int sum(int *x, int *y)
{
    int s = *x + *y;
    printf(" Sum of a and b is %d\n", s);
    return s;
}

float average(int *x, int *y)
{
    float avg = ((*x + *y) / 2.0);
    printf(" Average of a and b is %.2f\n", avg);
    return avg;
}

int main()
{
    int a = 10, b = 20;
    sum(&a, &b);
    average(&a, &b);
    return 0;
}