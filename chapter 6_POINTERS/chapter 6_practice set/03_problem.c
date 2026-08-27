#include <stdio.h>

// Write a program to change the value of a variable to ten times of its current value. 

int ten_times(int *);

int ten_times(int *a) 
{
    * a = (*a) * 10;
    printf(" ten times the value of i is %d\n", *a);
    return *a;
}

int main()
{
    int i = 10;
    printf(" the current value of i is %d\n", i);
    ten_times(&i); 
    return 0;
}