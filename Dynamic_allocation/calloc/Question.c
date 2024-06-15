#include <stdio.h>
#include <stdlib.h> // This headerfile should be include to use malloc,calloc functions .

int main()
{
    int *ptr,n;

    printf("Enter the number of elements to be entered : ");
    scanf("%d",&n);

    ptr = (int *)calloc(n , sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}