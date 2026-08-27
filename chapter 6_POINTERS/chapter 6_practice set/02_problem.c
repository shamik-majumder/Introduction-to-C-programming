#include <stdio.h>

// Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to 
// a function and print its address. Are these addresses same? Why? 

int value_of_i(int *);

int value_of_i(int *ptr)
{
    printf(" the address of ptr is %u\n", ptr);
    printf(" the value of i using pointer is %d\n", *ptr);
    return *ptr;
}

int main()
{
    int i = 2;
    int *ptr = &i;
    printf(" the address of i is %u\n", &i);
    value_of_i(ptr);
    return 0;
}