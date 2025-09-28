/*swaps values of two variables using a third variable.
#include<stdio.h>
int main(){
    int firstNum,secondNum,a;
    printf("Enter the first number= ");
    scanf("%d",&firstNum);
    printf("Enter the second number= ");
    scanf("%d",&secondNum);
    a=firstNum;
    firstNum=secondNum;
    secondNum=a;
    printf("the number after swapping=  firstNum = %d, secondNum = %d\n", firstNum, secondNum);
}*/
#include <stdio.h>
int main() {
    int firstNum, secondNum, a;

    printf("Enter the first number= ");
    scanf("%d", &firstNum);

    printf("Enter the second number= ");
    scanf("%d", &secondNum);

    // Swapping
    a = firstNum;
    firstNum = secondNum;
    secondNum = a;

    printf("The numbers after swapping= %d  %d\n", firstNum, secondNum);
}
