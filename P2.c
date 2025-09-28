//Calculate the Simple Interest and Compound Interest
#include <stdio.h>
#include <math.h>

int main() {
    int principal, rate, time;
    float simpleInterest, compoundInterest,amount;

    printf("Enter the principal amount= ");
    scanf("%d", &principal);

    printf("Enter the rate= ");
    scanf("%d", &rate);

    printf("Enter the time(in years)= ");
    scanf("%d", &time);

    // Simple Interest
    simpleInterest = (principal * rate * time) / 100.0;

    // Compound Interest
    amount = principal * pow((1 + (rate / 100.0)), time);
    
    compoundInterest = amount - principal;

    printf("Simple Interest= %.2f\n", simpleInterest);
    printf("Compound Interest= %f\n", compoundInterest);

    return 0;
}
