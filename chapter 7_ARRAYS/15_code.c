#include <stdio.h>

// Reverse Array Elements by swap the elements

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
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
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    printArray(arr, n);
    printf("Reversed array: ");
    reverse(arr, n);
    printArray(arr, n);
    return 0;
}