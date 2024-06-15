 
// Print an Factorial number .
// Factoial >> 5 = 5*4*3*2*1

#include<stdio.h>
int main() {
    int n;
    printf("Enter the value : ");
    scanf("%d",&n);

int fact = 1 ;
    for(int i=1; i<=n; i++){
        fact = fact*i ;
    }

    printf("Factorial value is : %d\n", fact);

    return 0 ;
}