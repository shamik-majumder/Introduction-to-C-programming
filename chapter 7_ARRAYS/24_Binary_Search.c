// implementation of Binary Search

#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int binary_search(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[MAX] = {2, 3, 6, 9, 56, 64, 74, 82, 86, 95};
    int element;
    printf("enter the element to be searched :\n");
    scanf("%d", &element);
    int result = binary_search(arr, MAX, element);
    if (result == -1)
    {
        printf(" the element is not found in the arrray");
    }
    else
    {
        printf("the element %d is found in %d index of the array", element, result);
    }
    return 0;
}