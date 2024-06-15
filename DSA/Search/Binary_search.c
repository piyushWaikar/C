// Binary is most effective for sorted array . so, must sort array first .

#include <stdio.h>

int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;

    low = 0;
    high = size - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == element)
        {
            return mid+1;
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
    int arr[] = {1, 3, 5, 6, 54, 87, 94, 899, 2356, 3456};  // Sorted array .

    int size = sizeof(arr) / sizeof(int); // Size of array .

    int element = 54;

    int searchIndex = binarySearch(arr, size, element);

    printf("The element %d was found at %d place \n", element, searchIndex);

    return 0;
}