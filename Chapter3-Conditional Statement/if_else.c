#include<stdio.h>
int main(){
    int age;
    printf("Enter the age : ");
    scanf("%d",&age);

    if(age>=18){
        printf("An Adult\n");
        printf("They can drive");
    }  else if(age<=18 && age>=13){
        printf("teenager");
    }  else{
        printf("Child");
    }
  


  return 0;


}
