/*
 * chapter 5, exercise 3
 *A triangular number can also be generated by the formula
 * triangularNumber = n (n + 1) / 2
 * for any integer value of n. For example, the 10th triangular number, 55, can be
 * generated by substituting 10 as the value for n in the preceding formula.Write a
 * program that generates a table of triangular numbers using the preceding formula.
 * Have the program generate every fifth triangular number between 5 and 50 (that
 * is, 5, 10, 15, ..., 50).
 */

#include <stdio.h>

int main(void)
{
    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf(" n  Sum from 1 to n\n");
    printf("---  --------------\n");
    for (int n = 5; n <= 50; n += 5)
    {
        int triangularNumber = n * (n + 1) / 2;
        printf(" %i            %i\n", n, triangularNumber);
    }
    return 0;
}
