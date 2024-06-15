
#include<stdio.h>
#include<string.h>

int main() {
    char oldStr[] = "oldstr";
    char newStr[] = "newstr" ;
    strcpy(newStr, oldStr);
    puts(newStr);

    return 0;

}