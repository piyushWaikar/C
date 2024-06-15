
// Print the numbers from 0 to n, if n is given by user .

#include<stdio.h>
int main() {

// from for loop 
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    for(int i=0 ; i<=n ; i++) {
        printf("%d\n", i);

    }


// from while loop

    int i=0;
    while(i<=n) {
        printf("%d\n", i);
        i++;
    } 

    
    return 0 ;
}