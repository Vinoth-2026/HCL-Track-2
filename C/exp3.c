//Given a temperature in Celsius, convert and print in Fahrenheit with one decimal.
#include<stdio.h>

int main(){
    float iCelsius;
    printf("Enter temperature in Celsius :");
    scanf("%f",&iCelsius);
    float fFahrenheit=0;
    fFahrenheit=(iCelsius*1.8)+32;
    printf("Temperature in Fahrenheit is %.1f",fFahrenheit);
    return 0;
}