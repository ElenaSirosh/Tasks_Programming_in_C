/*
 * chapter 5, exercise, program 5.2
 *Type in and run the nine programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

#include <stdio.h>

int main(void)
{
    int n, triangularNumber;
    triangularNumber = 0;
    for (n = 1; n <= 200; ++n)
    {
        triangularNumber = triangularNumber + n;
    }
    printf("The 200th triangular number is %i\n", triangularNumber);
    return 0;
}
