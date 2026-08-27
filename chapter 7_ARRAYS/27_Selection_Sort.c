#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n%d", A[i]);
    }
    printf("\n");
}
void selectionSort(int *A, int n)
{
    int indexOfMin, temp;
    printf("Running Selection Sort....\n");
    for (int i = 0; i < n - 1; i++)
    {
        indexOfMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        temp = A[i]; // swap A[i] and A[indexOfMin]
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
    }
}
int main()
{
    int A[] = {3, 5, 2, 13, 12};
    int n = 5;
    printArray(A, n);    // print array before sorting
    selectionSort(A, n); // function to sort the array
    printArray(A, n);    // print array after sorting
    return 0;
}