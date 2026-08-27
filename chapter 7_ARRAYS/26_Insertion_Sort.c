#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n%d", A[i]);
    }
    printf("\n");
}

void insertionSort(int *A, int n) // ascending order
{
    int key, j;
    for (int i = 1; i < n; i++) // loop for passes
    {
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}
/*
void insertionSort(int *A, int n)  //desending order
{
    int key, j;
    for (int i = 1; i <= n - 1; i++) // loop for passes
    {
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] < key) // loop for each passes
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}
*/

int main()
{
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printArray(A, n);    // print array before sorting
    insertionSort(A, n); // function to sort the array
    printArray(A, n);    // print array after sorting
    return 0;
}