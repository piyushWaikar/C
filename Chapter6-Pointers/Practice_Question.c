
// Will the address output be same .

#include<stdio.h>

void printAddress(int n); // Print by value
//void _printAddress(int *n); // Print by Reference / Address .

int main() {
    int n = 4;

    printf("%p\n", &n); // Output : Different
    printAddress(n);  // Output : Different 


    // printf("%p\n", &n); 
    // _printAddress(&n);

    return 0;
}

void printAddress(int n) {
    printf("%p\n", &n);
}

// void printAddress(int *n) {
//     printf("%p\n", n);
// }

// Ans : Due to call by value both output we be different .