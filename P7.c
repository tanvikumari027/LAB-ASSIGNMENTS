#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b){
        if (a > c)
        {
            printf("The greatest number is: %d\n", a);
        }
    }
    else if (b > a) {
        if (b > c)
        {
            printf("The greatest number is: %d\n", b);
        }    
    }
    else if (c > a){
        if (c > b)
        {
            printf("The greatest number is: %d\n", c);
        }       
    }
    else{
        printf("All are equal");
    }
}
