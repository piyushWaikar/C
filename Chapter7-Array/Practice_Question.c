
//Write a program to enter price of 3 items & print thier final cost with gst .

#include<stdio.h>

float main() {
    float price[3];

    printf("Enter 3 Prices : ");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("Total prices 1 : %f\n", price[0]+(0.18*price[0]));
    printf("Total prices 2 : %f\n", price[1]+(0.18*price[1]));
    printf("Total prices 3 : %f\n", price[2]+(0.18*price[2]));

    
    return 0;
}