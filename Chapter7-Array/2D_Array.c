
// int arr[2][4] = {{1,2},{3,4}};   It means 2 sets of array and 4 element in it .
// We number Elements by matrix method .. 1-0,0 , 2-0,1 , 3-1,0 , 4-1,1 .

//Question - We have to store marks of 2 childerns of 3 subjects .

#include<stdio.h>

int main() {
    
    //Marks of 1st student .

    int marks[2][3];
    marks[0][1] = 90;
    marks[0][1] = 86;
    marks[0][2] = 99;


    // Marks of 2nd student .

    marks[1][0] = 91;
    marks[1][1] = 93;
    marks[1][2] = 96;

    printf("Student 1st 1st subject Marks : %d\n", marks[0][1]);
    printf("Student 2nd 1st subject Marks : %d\n", marks[1][1]);
    printf("Student 1st 2nd subject Marks : %d\n", marks[0][2]);
    printf("Student 2st 2nd subject Marks : %d\n", marks[1][2]);

    return 0;

}