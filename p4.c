//accepts the temperature in Centigrade and converts into Fahrenheit 
#include<stdio.h>
int main(){
    
    float tempCentigrade,tempFahrenheit;
    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &tempCentigrade);
    
    tempFahrenheit = (tempCentigrade * 9.0 / 5.0) + 32;
    
    printf("Temperature in Fahrenheit =  %.2f\n", tempFahrenheit);

}
