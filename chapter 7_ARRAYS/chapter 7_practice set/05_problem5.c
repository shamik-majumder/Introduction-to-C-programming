#include <stdio.h>

// Write a program containing a function which reverses the array passed to it.

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// swaping of two numbers with temp variable
// temp = a;
// a = b;
// b = temp;

//{1,2,3,4,5,6} => {6,5,4,3,2,1}
// n = 6
//{   1    ,   2     ,   3     ,   4     ,   5     ,   6   }
// index 0 , index 1 , index 2 , index 3 , index 4 , index 5
//(index 0 , index 5) => {6,2,3,4,5,1}
//(index 1 , index 4) => {6,5,3,4,2,1}
//(index 2 , index 3) => {6,5,4,3,2,1} stop!
// i from 0 to n/2
// arr[i] = arr[n-i-1]
// arr[i] = arr[n - 1 - i]
// arr[0] = arr[5 - 1 - 0] = arr[4],
// arr[1] = arr[5 - 1 - 1] = arr[3],
// arr[2] = arr[5 - 1 - 2] = arr[2],
// arr[3] = arr[5 - 1 - 3] = arr[1],
// arr[4] = arr[5 - 1 - 4] = arr[0] ....

void reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++) // i from 0 to n/2
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    printArray(arr, 6);
    reverse(arr, 6);
    printArray(arr, 6);
    return 0;
}