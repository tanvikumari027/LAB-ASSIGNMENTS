//area and circumference of circle
#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>
int main(){
    float radius,area,circumference;

    printf("Enter the radius= ");
    scanf("%f",&radius);

    area= M_PI *pow(radius,2);
    circumference=2*M_PI*radius;

    printf("The circumference of circle is= %.2f\n",circumference);
    printf("The area of circle is= %.2f\n",area);
    
    return 0;

}