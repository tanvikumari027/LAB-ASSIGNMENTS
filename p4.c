//accepts the temperature in Centigrade and converts into Fahrenheit 
#include<stdio.h>
int main(){
    float centigrade,fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &centigrade);
    fahrenheit = (centigrade * 9.0 / 5.0) + 32;
    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);
}