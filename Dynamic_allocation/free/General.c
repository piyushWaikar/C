// free = free fuction is used to free the dynamically alloated memory in run time .

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));

    ptr[0] = 1;
    ptr[1] = 5;
    ptr[2] = 10;
    ptr[3] = 15;
    ptr[4] = 20;

    for (int i = 0; i < 5; i++)
    {
        printf("By malloc function : %d\n", ptr[i]);
    }

    printf("\n");

    free(ptr); // Due to this function now the memory is free for ptr .

    ptr = (int *)calloc(5, sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("By calloc function : %d\n", ptr[i]);
    }

    // we alloated same ptr twice due to use of free function .

    return 0;
}