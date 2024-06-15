
// In this Function , function does not count '\0' value .

#include<stdio.h>
#include<string.h>

int main() {
    char name[] = "shradha" ;
    printf("Length is : %d", strlen(name));
    return 0;
}