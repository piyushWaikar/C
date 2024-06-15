#include <stdio.h>

void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubblesort(int *arr, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[6] = {12, 56, 9, 6, 10, 55};

    int n = 6;

    printarray(arr, n); // To print the unsorted number .
    bubblesort(arr, n); // To sort the numbers .
    printarray(arr, n); // Recalling the function , to print sorted array .

    return 0;
}