#include <stdio.h>

int binarySearch(int arr[], int a, int key)
{

    int low, mid, high;
    low = 0;
    high = a - 1; // -1 Due to zero based indexing .

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] < key)
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
    int a;
    printf("Enter the number of elements to be enters : ", a);
    scanf("%d", &a);

    int arr[a];
    printf("Enter the elements :\n");

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter the key : ", key);
    scanf("%d", &key);

    int binary = binarySearch(arr, a, key);
    printf("The element %d was found at index %d ", key, binary);

    return 0;
}