#include<stdio.h>
int main(){
    float operand1,operand2,result;
    char operator;
    printf("enter the operator(+,-,*,/)= ");
    scanf("%c", &operator);
    printf("Enter the first operand= ");
    scanf("%f",&operand1);
    printf("Enter the second operand= ");
    scanf("%f",&operand2);
    
    switch (operator)
    {
    case '+':
        result=operand1+operand2;
        printf("%.2f",result);
        break;
    case '-':
        result=operand1-operand2;
        printf("%.2f",result);
        break;
    case '*':
        result=operand1*operand2;
        printf("%.2f",result);
        break;
    case '/':
        result=operand1/operand2;
        printf("%.2f",result);
        break;
    default:
        printf("wrong operator");
        break;
    }
}