//WAP that accepts the marks of 5 subjects and finds the sum and percentage marks obtained by the student
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
    
    printf("Total Marks=  %d\n", totalMarks);
    printf("Percentage=  %.2f\n", percentage);
}



