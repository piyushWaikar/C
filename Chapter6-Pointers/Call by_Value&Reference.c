
#include<stdio.h>

void square(int n);   // Call by Value 
void _square(int *n);  // Call by Reference (Address) 

int main() {
    int number = 4;
    square(number);
    printf("number = %d\n", number);

    _square(&number);
    printf("number = %d\n", number);

    return 0;
}

// Call by Value 

void square(int n) {
    n = n * n ;
    printf("Square is : %d\n", n);
}


// Call by Reference (Address) 

void _square(int *n) {
    *n = (*n) * (*n) ;    // it call the number = 4 . '*n' means number = 4 .
    printf("Square is : %d\n", *n);
}