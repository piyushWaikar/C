// Write a program to allocate memort to store 5 prices .

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number of prices to be entered : ");
    scanf("%d", &n);

    float *ptr;
    ptr = (float *)malloc(n * sizeof(float));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the amount : ");
        scanf("%f", &ptr[i]);
    }

    float sum = 0;

    for (int i = 0; i < n; i++)
    {
        printf("%f\n", ptr[i]);
        sum += ptr[i];
    }

    printf("The sum of total prices is : %f", sum);

    return 0;
}