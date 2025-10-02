#include <stdio.h>
int main() {
    int math, english, science, hindi, sst, totalMarks;
    float percentage;

    printf("ENTER MARKS FOR MATHS: ");
    scanf("%d", &math);

    printf("ENTER MARKS FOR ENGLISH: ");
    scanf("%d", &english);

    printf("ENTER MARKS FOR SCIENCE: ");
    scanf("%d", &science);

    printf("ENTER MARKS FOR HINDI: ");
    scanf("%d", &hindi);

    printf("ENTER MARKS FOR S.S.T.: ");
    scanf("%d", &sst);

    totalMarks = math + english + science + hindi + sst;
    percentage = totalMarks / 5.0;
    
    printf("Percentage = %.2f\n", percentage);
    
    if(percentage >= 90)
    {
        printf("Grade A\n");
    }
    else if(percentage >= 80 && percentage < 90)
    {
        printf("Grade B\n");
    }
    else if(percentage >= 60 && percentage < 80)
    {
        printf("Grade C\n");
    }
    else if(percentage < 60)
    {
        printf("Grade D\n");
    }

}

