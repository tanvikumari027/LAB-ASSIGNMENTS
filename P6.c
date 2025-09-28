//checks whether the two numbers entered by the user are equal or not
#include<stdio.h>
int main(){

    int firstNum,secondNum;
    printf("Enter the first num= ");
    scanf("%d",&firstNum);

    printf("Enter the second number= ");
    scanf("%d",&secondNum);

    if (firstNum==secondNum)
    {
        printf("BOTH NUMBERS ARE EQUAL");
    }
    
    else
    {
        printf("BOTH NUMBERS ARE NOT EQUAL");
    }
    
}