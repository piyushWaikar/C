
#include<stdio.h>
#include<math.h>

float squareArea(float side);


int main(){

    float side = 5;

    printf("Area is : %f", squareArea(side));
    return 0;
}

float squareArea(float side){
    return side * side ;
}