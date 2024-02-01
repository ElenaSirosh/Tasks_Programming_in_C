/*
 * chapter 5, exercise, program 5.3
 *Type in and run the nine programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

#include <stdio.h>

int main(void)
{
    int n, triangularNumber;
    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf(" n  Sum from 1 to n\n");
    printf("---  --------------\n");

    triangularNumber = 0;

    for (n = 1; n <= 10; ++n)
    {
        triangularNumber += n;
        printf(" %i            %i\n", n, triangularNumber);
    }
    return 0;
}
