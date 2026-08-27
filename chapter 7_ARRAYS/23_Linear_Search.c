//  implementation of Linear Search

#include <stdio.h>
#define MAX 10
int linear_Search(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[MAX] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int element;
    printf("Enter the element to be search : \n");
    scanf("%d", &element);
    int result = linear_Search(arr, MAX, element);
    if (result == -1)
    {
        printf("Element not found in the array.\n");
    }
    else
    {
        printf(" The Element %d found at index %d in the array.\n", element, result);
    }
    return 0;
}