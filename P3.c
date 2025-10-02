//area and circumference of circle
#include<stdio.h>
#include<math.h>

int main(){
    
    float radius , area , circumference;

    printf("Enter the radius=  ");
    scanf("%f" , &radius );

    area = 3.14 * pow( radius , 2 );
    circumference = 2 * 3.14 * radius;

    printf("The circumference of circle is=  %.2f\n" , circumference);
    printf("The area of circle is=  %.2f\n" , area);
    
    return 0;


}

