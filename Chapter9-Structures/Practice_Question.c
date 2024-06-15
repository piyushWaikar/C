
// Write a program to store the data of 3 students .

#include<stdio.h>
#include<string.h>

struct student {
    int roll ;
    float cgpa ;
    char name[100] ;
} ;

int main() {
    struct student s1;
    s1.roll = 6110;
    s1.cgpa = 9.5;
    // s1.name = "piyush";   ==> We cannot use this command , so we use 
    strcpy(s1.name, "piyush");

    printf("Student name = %s\n", s1.name);
    printf("Student roll no = %d\n", s1.roll);
    printf("Student cgpa = %f\n", s1.cgpa);
    printf("\n");

    struct student s2;
    s2.roll = 6220;
    s2.cgpa = 8.5;
    strcpy(s2.name, "shraddha");

    printf("Student name = %s\n", s2.name);
    printf("Student roll no = %d\n", s2.roll);
    printf("Student cgpa = %f\n", s2.cgpa);
    printf("\n");

    struct student s3;
    s3.roll = 6010;
    s3.cgpa = 9.0; 
    strcpy(s3.name, "Aman");

    printf("Student name = %s\n", s3.name);
    printf("Student roll no = %d\n", s3.roll);
    printf("Student cgpa = %f\n", s3.cgpa);


    return 0;  
}

