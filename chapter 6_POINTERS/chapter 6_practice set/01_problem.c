#include <stdio.h>

// Write a program to print the address of a variable. Use this address to get the 
// value of the variable.

int main()
{
    int i = 2;
    int *ptr = &i;
    printf(" the value of i is %d\n", i);
    printf(" the address of i is %u\n", &i);
    printf(" the value of i using pointer is %d\n", *ptr);
    printf(" the address stored in pointer is %u\n", ptr);
    return 0;
}