#include <stdio.h>
// program to show how to access array elements using pointers
int main()
{
    int marks[] = {12, 324, 56, 66};

    int *ptr = &marks[0]; // pointer pointing to first element of array
    // int *ptr = marks;     // same as int *ptr = &marks[0];

    /*for (int i = 0; i < 4; i++)
    {
       printf("the value of marks at index %d is %d\n", i, marks[i]);
    }*/
    for (int i = 0; i < 4; i++)
    {
        // dereferencing pointer to get value at that address
        printf("the value of marks at index %d is %d\n", i, *ptr);
        ptr++; // incrementing pointer to point to next element of array
    }

    return 0;
}