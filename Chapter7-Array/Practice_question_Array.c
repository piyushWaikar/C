
// Traverse an Array . Array is an Pointer itself .

#include<stdio.h>

int main() {
    int aadhar[5];

    //Input
    int *ptr = &aadhar[0];
    for(int i=0; i<5; i++) {
        printf("%d index : ", i);
        scanf("%d", &aadhar[i]);  // instead of &aadhar[i]  we can also write (ptr+i) .
    }

    // Output 
    for(int i=0; i<5; i++) {
        printf("%d index = %d\n", i, aadhar[i]); // instead of aadhar[i]  we can also write *(ptr+i) .
    }
    return 0;

}