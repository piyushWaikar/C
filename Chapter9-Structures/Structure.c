
// structure is a user define date type . customize by user .
// To call strucutre we use command 'struct' .

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

    return 0;  
}

