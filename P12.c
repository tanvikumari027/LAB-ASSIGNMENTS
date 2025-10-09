#include<stdio.h>
int main(){
    
    int lastNum;
    float sum;
    
    printf("Enter the number");
    scanf("%d" , &lastNum);
    
    sum=( lastNum * ( lastNum + 1 ) ) / 2.0;
    
    printf("sum= %.2f", sum );


}

