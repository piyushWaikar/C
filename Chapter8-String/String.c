// sring is sequence of character enclosed in double qoutes "" , and ends with '\0' in memory .
// string format specifier = "%s" .
// eg- char name[] = {'P', 'I', 'Y', 'U', 'S', 'H', '\0'}; . OUTPUT - PIYUSH 
//     char name[] = "PIYUSH" ; OUTPUT - PIYUSH .  == \0 come by default in this argument .
// IMP point - scan() cannot input multi-words strings with spaces .

#include<stdio.h>

void printstring(char arr[]);

int main() {

    char name[50];

    printf("Write your name : ");
    scanf("%s", name);

    printf("Your name is : %s", name);

    return 0;

}

void printstring(char arr[]) {
    for(int i=0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
}