
// IN this function , we compare both the strings are indenticall or not , if they are identicall the output is '0' and if both 
// the strings are not identicall then it prints the number diference by it alphabets ASCII value .

#include<stdio.h>
#include<string.h>

int main() {
    char firststr[] = "Apple";
    char secstr[] = "Banana";
    printf("%d\n", strcmp(firststr,secstr));

    char _firststr[] = "Apple";
    char _secstr[] = "Apple";
    printf("%d\n", strcmp(_firststr, _secstr));


    return 0;

}

// The out put is -ve means first string is small then second string .