
// Pointer can be incremented & decrememted .

#include<stdio.h>

// int main() {
//     int age = 22;
//     int *ptr = &age;  
//     ptr++;  // In this case, ptr++ means another interger pointer in create memory location .
// }


int main() {
    int age = 22;
    int *ptr = &age;
    printf("ptr = %u\n", ptr); // In this Output , 4 bytes would be less , bcz 1 integer 4 bytes in memory location .

    ptr++;
    printf("Ptr = %u\n", ptr); // In this Output , 4 bytes would be more , bcz 1 integer 4 bytes in memory location .

    ptr--;
    printf("Ptr = %u\n", ptr);  // In this Output , 4 bytes would be less , bcz 1 integer 4 bytes in memory location .


    // char takes 1 bytes in this laptop archecture .

    char star = '*';
    char *_ptr = &star;
    
     printf("ptr = %u\n", _ptr); // In this Output , 1 bytes would be less , bcz 1 char 1 bytes in memory location .

    ptr++;
    printf("Ptr = %u\n", _ptr); // In this Output , 1 bytes would be more , bcz 1 char 1 bytes in memory location .

    ptr--;
    printf("Ptr = %u\n", _ptr);  // In this Output , 1 bytes would be less , bcz 1 char 1 bytes in memory location . 

    return 0;
}