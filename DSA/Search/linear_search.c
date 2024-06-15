#include <stdio.h>

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 6, 56, 87, 34, 54, 899, 456, 2356, 3456};

    int size = sizeof(arr) / sizeof(int);    // Size of array .

    int element = 54;

    int searchIndex = linearSearch(arr, size, element);

    printf("The element %d was found at %d place \n", element, searchIndex);

    return 0;
}