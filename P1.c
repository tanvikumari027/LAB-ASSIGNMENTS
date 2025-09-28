//WAP that accepts the marks of 5 subjects and finds the sum and percentage marks obtained by the student
#include <stdio.h>
int main() {
    int math, eng, sci, hindi, pe, totalMarks;
    float percentage;

    printf("ENTER MARKS FOR MATHS: ");
    scanf("%d", &math);

    printf("ENTER MARKS FOR ENGLISH: ");
    scanf("%d", &eng);

    printf("ENTER MARKS FOR SCIENCE: ");
    scanf("%d", &sci);

    printf("ENTER MARKS FOR HINDI: ");
    scanf("%d", &hindi);

    printf("ENTER MARKS FOR P.E: ");
    scanf("%d", &pe);

    totalMarks = math + eng + sci + hindi + pe;
    percentage = (float)totalMarks / 5.0;
    
    printf("Total Marks = %d\n", totalMarks);
    printf("Percentage = %.2f\n", percentage);
}
