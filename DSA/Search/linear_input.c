#include <stdio.h>

int print(int arr[], int key, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("The element %d is found at %d", key, i);
            return 0;
        }
    }
    printf("Element not found");
}
int main()
{
    int key, n;

    printf("Enter the number of elements to be entered : ", n);
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements : \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key : ", key);
    scanf("%d", &key);

    print(arr, key, n);

    return 0;
}