//  Write a program to check if a number is divisible by 2 or not .
//  Write a program to check if a number is odd or even .

#include<stdio.h>
#include<math.h>

int main() {
    int x;
    printf("Enter the Value : ");
    scanf("%d",&x);
    printf("%d", x % 2 == 0);

    return 0;
}