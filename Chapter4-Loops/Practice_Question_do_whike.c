
// Keep taking numbers as input from user intil user enters a number which is multiple of 7 .

#include<stdio.h>
int main() {
  
  int n;
  do {
   printf("Enter the number : ");
   scanf("%d", &n);
   printf("%d\n",n);

   if(n % 7 == 0) {   // Multipe of 7 .
    break;
   }


  } while(1);
  printf("Thank You");


    
    return 0 ;
}