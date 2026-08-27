#include <stdio.h>

void Printarray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n%d", A[i]);
    }
    printf("\n");
}
int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);
    temp = A[low]; // swap A[low] and A[j]
    A[low] = A[j];
    A[j] = temp;
    return j;
}
void Quicksort(int A[], int low, int high)
{
    int partitionIndex; // index of pivot after partition
    if (low < high)
    {
        partitionIndex = partition(A, low, high);
        Quicksort(A, low, partitionIndex - 1);  // to sort left subarray
        Quicksort(A, partitionIndex + 1, high); // to sort right subarray
    }
}
int main()
{
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    Printarray(A, n);       // print array before sorting
    Quicksort(A, 0, n - 1); // function to sort the array
    Printarray(A, n);       // print array after sorting
    return 0;
}