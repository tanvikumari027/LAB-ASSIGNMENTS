#include<stdio.h>
int main()
{
  
    int number, i;
    unsigned long long factorial = 1;
    i=1;
  
    printf("enter the number= ");
    scanf("%d",&number);
  
    if (number==0)
    {
        printf("factorial of 0 is 1");
    }
      
    else
    {
        while (i<=number)
    {
        factorial=factorial*i;
        i++;  
    }
    
    printf("factorial of %d is= %llu",number,factorial);
    }
    
        
}
