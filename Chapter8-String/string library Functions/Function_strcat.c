
// In this Function both the string joins(concatenates) .

#include<stdio.h>
#include<string.h>

int main() {
    char firstStr[100] = "hello";
    char secStr[] = "World";
    strcat(firstStr, secStr);
    puts(firstStr);

return 0;

}