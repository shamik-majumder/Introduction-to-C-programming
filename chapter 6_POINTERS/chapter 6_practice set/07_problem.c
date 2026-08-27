#include <stdio.h>

//  Write a program to change the value of a variable to ten times of its current value
//  using call by value and verify that it does not change the value of the said variable.

int ten_times(int);

int ten_times(int a)
{
    printf(" ten times the value of i is %d\n", a * 10);
    return a;
}

int main()
{
    int i = 10;
    printf(" the current value of i is %d\n", i);
    ten_times(i);
    return 0;
}