#include<stdio.h>
#include<string.h>

struct student {
    char name[100];
    int roll_no ;
    float cgpa ;

};



int main () {
  struct student s1 ;

  strcpy(s1.name , "Piyush");
  s1.roll_no = 5172 ;
  s1.cgpa = 9.5 ;

   printf("Name : %s, Roll no : %d, CGPA : %f\n", s1.name, s1.roll_no, s1.cgpa );

// Easy Method 

struct student s2 = {"Shradha", 1667, 8.5};

   printf("Name : %s, Roll no : %d, CGPA : %f", s2.name, s2.roll_no, s2.cgpa );


    return 0;
}



