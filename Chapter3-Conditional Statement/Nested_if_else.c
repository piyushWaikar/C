// Nested if/else condition .


#include<stdio.h>
int main() {
    int number;
    printf("Enter number : ");
    scanf("%d",&number);

    if (number >= 0) {
        printf("Positive\n");
        if(number % 2 == 0) {
            printf("Even number");
        }  else {
            printf("Odd number");
        }
    }  else{
        prinf("Negative");
    }
    


    
    return 0 ;
}