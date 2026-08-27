#include <stdio.h>

void Printarray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n%d", A[i]);
    }
    printf("\n");
}

void Merge(int A[], int low, int mid, int high)
{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k++] = A[i++];
        }
        else
        {
            B[k++] = A[j++];
        }
    }

    while (i <= mid)
    {
        B[k++] = A[i++];
    }

    while (j <= high)
    {
        B[k++] = A[j++];
    }

    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}

void Mergesort(int A[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        Mergesort(A, low, mid);
        Mergesort(A, mid + 1, high);
        Merge(A, low, mid, high);
    }
}

int main()
{
    int A[] = {9, 14, 4, 8, 7, 5, 6};
    int n = 7;

    Printarray(A, n);       // print array before sorting
    Mergesort(A, 0, n - 1); // function to sort the array
    Printarray(A, n);       // print array after sorting

    return 0;
}
