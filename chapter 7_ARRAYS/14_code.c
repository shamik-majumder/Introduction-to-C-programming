#include <stdio.h>

// Function to calculate sum of array elements

int getSum(int arr[], int n)
{

    int sum = 0; // Initialize sum to 0
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i]; // Add each element to sum
    }
    return sum;
}

//using recursion
/*
int getSum(int arr[], int n) // Recursive function to calculate sum of array elements
{

    // Base case: No elements left
    if (n == 0)
        return 0;

    // Add current element and move to the rest of the array
    return arr[n - 1] + getSum(arr, n - 1); // Recursive call
}
*/

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    //int result = getSum(arr, n);

    printf(" the sum of the array elements is: %d", getSum(arr, n));
    return 0;
}