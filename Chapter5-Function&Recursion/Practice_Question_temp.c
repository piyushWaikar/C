// convert the temperature in dergree celsius to fahrrenheit . Formula >> 'fahrrenheit = celsius * 9/5 + 32' . 

#include<stdio.h>

float convertTemp(float celsius);

int main() {
    float far = covertTemp(37);  // 37 degree celsius .
    printf("far : %f", far);
    return 0;
}

float convertTemp(float celsius) {
    float far = celsius * (9.0/5.0) + 32;
    return far;
}