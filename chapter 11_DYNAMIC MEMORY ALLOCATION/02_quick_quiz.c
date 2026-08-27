#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n = 5;
    float *ptr;
    // printf("Enter total number of elements: "); // array size
    // scanf("%f", &n);
    // int arr[n]; // VLA (Variable Length Array) - Not allowed in C

    ptr = (float *)malloc(n * sizeof(float)); // Dynamic memory allocation by malloc function

    ptr[0] = 61.1532;
    ptr[1] = 25.2;
    ptr[2] = 93.5643;
    ptr[3] = 74.4;
    ptr[4] = 5.535; // Initializing array elements

    // printf("Enter elements: \n");
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%f", &ptr[i]); // Taking input
    // }
    // printf("You entered: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f \n", ptr[i]); // Printing output
    }

    return 0;
}