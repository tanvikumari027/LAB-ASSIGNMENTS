#include <stdio.h>
int main() {
    
    int firstNum, secondNum, thirdNum;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &firstNum, &secondNum, &thirdNum);
    
    if (firstNum > secondNum){
        if (firstNum > thirdNum)
        {
            printf("The greatest number is: %d\n", firstNum);
        }
    }
        
    else if (secondNum > firstNum) {
        if (secondNum > thirdNum)
        {
            printf("The greatest number is: %d\n", secondNum);
        }    
    }
        
    else if (thirdNum > firstNum){
        if (thirdNum > secondNum)
        {
            printf("The greatest number is: %d\n", thirdNum);
        }       
    }
        
    else{
        printf("All are equal");
    }
    
}

