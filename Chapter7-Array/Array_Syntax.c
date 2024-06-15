
// 1] Syntax :

// int marks[3];  // In ' [] ' are the size of loacation we need .

// char name[10];

// float price[2]; 


// 2] Input & Output :

// scanf('%d,'&marks[0]); // In ' [] ' is the position of data stored in memory .

// printf("%d", marks[0]);

#include<stdio.h>

int main() {

    int marks[3];

    printf("enter Phy Marks : ");
    scanf("%d", &marks[0]);

    printf("Enter chem Marks : ");
    scanf("%d", &marks[1]);

    printf("Enter maths Marks : ");
    scanf("%d", &marks[2]);

    Printf(" Phy=%d, chem=%d, maths=%d", marks[0],marks[1],marks[2]);

    return 0;
}