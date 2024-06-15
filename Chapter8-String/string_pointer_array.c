
// string is an pointer as well as array .
// so, string can be writter as array & pointer . eg- char *str , char str[] .

#include<stdio.h>

//void printString(char arr[]);

int main() {
char *canChange = "hello World" ;
puts(canChange) ;
canChange = "Hello";
puts(canChange);

return 0;
}


// void printstring(char arr[]) {
//     for(int i=0; arr[i] != '\0'; i++) {
//         printf("%c", arr[i]); 
//     }
// }