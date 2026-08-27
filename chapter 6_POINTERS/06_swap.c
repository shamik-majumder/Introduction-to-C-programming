#include <stdio.h>

// Demonstrates swapping two integers using pointers in C

void swap(int *, int *); // function prototype

void swap(int *a, int *b) // swap function definition
{
    int temp;  // temporary variable to hold value during swap
    temp = *a; // store the value at address a in temp
    *a = *b;   // store the value at address b in address a
    *b = temp; // store the value in temp in address b
}

int main()
{
    //&x and &y are the addresses of x and y respectively
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y); // call by reference
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}