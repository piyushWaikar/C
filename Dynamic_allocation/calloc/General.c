// calloc = continous memory allocation .
// The memory is alloated by calloc function stores the default value of 0.00 in memory boxes which is NULL .

#include <stdio.h>
#include <stdlib.h> // This headerfile should be include to use calloc functions .

int main()
{
    int *ptr;
    ptr = (int *)calloc(5 , sizeof(int)); // syntax .

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}