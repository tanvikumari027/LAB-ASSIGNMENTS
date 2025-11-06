#include <stdio.h>
int main()
{
    int n, first_term = 0, second_term = 1, next_term;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            next_term = i;
        }
        else
        {
            next_term = first_term + second_term;
            first_term = second_term;
            second_term = next_term;
        }
        printf("%d ", next_term);
    }
    printf("\n");
    return 0;
}