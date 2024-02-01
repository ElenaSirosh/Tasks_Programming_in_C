/*
 * chapter 6, exercise 1, program 6.2
 * Type in and run the 10 programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.Try experimenting with each program by keying in values other than those
 * shown.
 */

#include <stdio.h>

int main(void)
{
    int numberOfGrades, i, grade;
    int gradeTotal = 0;
    int failureCount = 0;
    float average;
    printf("How many grades will you be entering? ");
    scanf("%i", &numberOfGrades);
    for (i = 1; i <= numberOfGrades; ++i)
    {
        printf("Enter grade #%i: ", i);
        scanf("%i", &grade);
        gradeTotal = gradeTotal + grade;
        if (grade < 65)
        {
            ++failureCount;
        }
    }
    average = (float) gradeTotal / numberOfGrades;
    printf("\nGrade average = %.2f\n", average);
    printf("Number of failures = %i\n", failureCount);
    return 0;
}
