
#include<stdio.h>

int main(){

     int x;
     int *ptr;

     ptr=&x;
     *ptr=0;  // int x = 0 .  >> '*' means value at pointer . 

     printf("x = %d\n", x);  // Output : 0
     printf(" *ptr = %d\n", *ptr);  // Output : 0

     *ptr += 5;  // *ptr=*ptr+5 . i.e - x=5 ,
     printf("x = %d\n", x); // Output : 5
     printf(" *ptr = %d\n", *ptr); // Output : 5

     (*ptr)++;
      printf("x = %d\n", x); // Output : 6
      printf(" *ptr = %d\n", *ptr); // Output : 6
     



    return 0;
}