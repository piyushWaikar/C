#include<stdio.h>  // Switch only work for int & char .
int main(){
    // for int
    int day; // 1-Monday, 2-Tuesday
  printf("Enter the day(1-7");
  scanf("%d",&day);

  switch(day) {
     case 1 : printf("Monday\n");
    break;
     case 2 : printf("Tuesday\n");
    break;
     case 3 : printf("Wednesday\n");
    break;
     case 4 : printf("Thursday\n");
    break;
     case 5 : printf("Friday\n");
    break;
     case 6 : printf("Saturday\n");
    break;
     case 7 : printf("Sunday\n");
    break;
    default : printf("Not a valid day");

    
  }
  // for char
 char day; // M-Monday, T-Tuesday
  printf("Enter the day(1-7");
  scanf("%s",&day);

  switch(day) {
     case 'M' : printf("Monday\n");
    break;
     case 'T' : printf("Tuesday\n");
    break;
     case 'W' : printf("Wednesday\n");
    break;
     case 'TH' : printf("Thursday\n");
    break;
     case 'F' : printf("Friday\n");
    break;
     case 'S' : printf("Saturday\n");
    break;
     case 'SU' : printf("Sunday\n");
    break;
    default : printf("Not a valid day");

    
  }

  return 0;


}
