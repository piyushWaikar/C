
// Write a Function that prints Namaste if user is Indian & Bonjour if the user is French .

#include<stdio.h>

void namaste ();
void Bonjour();

int main(){
    printf("Enter f for french & i for indian : ");
    char ch;
    scanf("%c",&ch);

    if(ch=='f'){
        printf("Bonjour");
    } else if(ch=='i'){
        printf("Namaste");
    } else{
        printf("Wrong value");
    }

    return 0;
}

void namaste() {
    printf("namaste");
}

void bonjour() {
    printf("bonjour");
}
