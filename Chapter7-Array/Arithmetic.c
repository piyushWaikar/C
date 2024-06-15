
// we can also subtract one pointer from another .
// We can also compare 2 pointers .

#include<stdio.h>

int main() {

    int age = 22;
    int _age = 24;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u\n  %u\n  Difference = %u\n ", ptr , _ptr, ptr - _ptr);  // In Output the Difference shows 1 it means it of 1 integer .


    _ptr = &age;
    printf("Comparision = %u\n", ptr == _ptr); // In OUtput it show 1 means True .

    return 0; 
}