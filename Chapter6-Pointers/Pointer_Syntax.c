
// 1] Syntax 

// Pointers Works on int , float , char .   >> imp >> int *ptr , float *ptr , char *ptr .

#include<stdio.h>

int main(){

int age = 22;
int *ptr = &age;
int _age = *ptr;  // If we print the vakue of '_age' we get value 22 .

printf("%d\n", _age);



// 2] Format Specifiers :

// i] Prints the adress .
// %p >> Prints an hexadecimal values . but for normal number form value we use %u .

printf("%p\n", &age);  // both the values of '&age' and 'ptr' is same .
printf("%p\n", ptr);    
printf("%p\n", &ptr);


// ii] Prints the value at pointer .
// '*' means the value at pointer .

printf("%d\n", age);  // Output of all three command will be same value i.e - 22 .
printf("%d\n", *ptr);
printf("%d\n", *(&age));


return 0;
}