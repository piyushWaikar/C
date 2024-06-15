
// Write the Factorial of n .  formula >> fact(n) = fact(n-1) * n .

#include<stdio.h>

int fact(int n);

int main() {
    printf("Factorial is : %d", fact(4)); // factorial of 4 .
    return 0;
}

int fact(int n) {
    if(n == 0) {
        return 1;
    }
    int factNm1 = fact(n-1);
    int factN = factNm1 * n;
    return factN;
}