
// Syntax :

// int **pptr;
// char **pptr;
// float **pptr;


#include<stdio.h>

int main() {
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("&d", **pptr);  // Prints the value 5 .

    return 0;
}