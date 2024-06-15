
// Keep taking numbers as input from user intil users enters an odd number .

// from do while loop 

#include<stdio.h>
int main() {
  
  int n;
  do {
   printf("Enter the number : ");
   scanf("%d", &n);
   printf("%d\n",n);

   if(n % 2 != 0) {
    break;
   }


  } while(1);
  printf("Thank You");


    
    return 0 ;
}