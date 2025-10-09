#include <stdio.h>
int main(){
  
    int number,randomvariable;
    unsigned long long evensum=0 , oddsum=0;
  
    printf("enter the last number= ");
    scanf("%d" , &number);
  
    if (number==0)
    {
        printf("sum=0");
    }
      
    else{
        for ( randomvariable = 1; randomvariable <= number; randomvariable++)
        {
            if (randomvariable % 2 == 0)
            {
                evensum = evensum + randomvariable;
            }
            else
            {
                oddsum = oddsum +randomvariable;
            }
            
        }
    }
    printf("The sum of even numbers from 1 to %d is %llu \n", number , evensum);
    printf("The sum of odd numbers from 1 to %d is %llu \n", number , oddsum);
}
