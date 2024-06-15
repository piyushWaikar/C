
// Print the table of a number , Take input from user .

#include<stdio.h>
int main() {
    
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);

    for(int i=1 ; i<=10 ; i++) {
       printf("%d\n", n*i);
    }


    
    return 0 ;
}