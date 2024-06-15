
// salting  is used to make our password more safe by companies . 

#include<stdio.h>
#include<string.h>

void salting (char pass[]);

int main() {
    char pass[100];

    printf("Enter your password : ");
    scanf("%s",pass);
    salting(pass);

    return 0;
}

void salting (char pass[]) {
    char salt[] = "123";
    char newpass[200];

    strcpy(newpass,pass);  
    strcat(newpass,salt);
    puts(newpass);

}