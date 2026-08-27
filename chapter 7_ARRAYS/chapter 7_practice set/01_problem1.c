#include <stdio.h>

// Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points 
// to the third element where ptr is a pointer pointing to the first element of the array. 

int main()
{
    int arr[10] = {0 , 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int * ptr = arr;
    printf("The address at index 3 is %u\n", (ptr + 2));
    printf("The value at index 3 is %d\n", *(ptr + 2));
    
    return 0;
}