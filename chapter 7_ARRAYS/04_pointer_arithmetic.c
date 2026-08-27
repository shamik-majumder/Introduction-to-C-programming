#include <stdio.h>

// Demonstrates pointer arithmetic 

int main()
{
    // int a = 5;
    // int *ptr = &a;
    // printf("the address of a is %u\n", &a);
    // printf("the address of a is %u\n", ptr);
    // ptr++; // incrementing the pointer by 4 bytes (cause int is 4 bytes)
    // printf("the address of a after incrementing pointer is %u\n", ptr);
    // return 0;

    // char a = 'B';
    // char *ptr = &a;
    // printf("the address of a is %u\n", &a);
    // printf("the address of a is %u\n", ptr);
    // ptr++; // incrementing the pointer by 1 byte (cause char is 1 byte)
    // printf("the address of a after incrementing pointer is %u\n", ptr);
    // return 0;

    int arr[5] = {10, 20, 30, 40, 50};
    int *p1 = arr;     // Points to arr[0]
    int *p2 = &arr[3]; // Points to arr[3] 

    printf("Initial pointer p1 points to value: %d\n", *p1);
    printf("Initial pointer p2 points to value: %d\n\n", *p2);

    // 1. Addition of a number to a pointer
    p1 = p1 + 2;
    printf("After p1 = p1 + 2, p1 points to: %d\n", *p1);

    // 2. Subtraction of a number from a pointer
    p1 = p1 - 1;
    printf("After p1 = p1 - 1, p1 points to: %d\n", *p1);

    // 3. Subtraction of one pointer from another
    int diff = p2 - p1;
    printf("Difference between p2 and p1: %d elements\n", diff);

    // 4. Comparison of two pointers
    if (p1 < p2)
    {
        printf("p1 is pointing to an earlier element in the array than p2\n");
    }
    else if (p1 > p2)
    {
        printf("p1 is pointing to a later element in the array than p2\n");
    }
    else
    {
        printf("p1 and p2 point to the same element\n");
    }
    return 0;
}