#include <stdio.h>

// Write a program containing functions which counts the number of positive 
// integers in an array. 

int countPositive(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            count++;
        }
    }
    return count;
}

int countEven(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("The number of positive elements in the array is: %d\n", countPositive(arr, 10));
    printf("The number of even elements in the array is: %d\n", countEven(arr, 10));
    return 0;
}