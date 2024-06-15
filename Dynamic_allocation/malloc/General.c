// malloc = memory allocation .

#include <stdio.h>
#include <stdlib.h> // This headerfile should be include to use malloc,calloc functions .

int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int)); // syntax .

    ptr[0] = 1;
    ptr[1] = 5;
    ptr[2] = 10;
    ptr[3] = 15;
    ptr[4] = 20;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}