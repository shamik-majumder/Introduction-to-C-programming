#include <stdio.h>

// Accessing Array Elements using Pointers

int main()
{

    // Declare an array
    int arr[3] = {5, 10, 15};

    // Access first element using index
    printf("%d\n", arr[0]);

    // Access first element using pointer
    printf("%d\n", *arr);

    return 0;
}