/*
 * chapter 5, exercise 9, program 5.2
 * Rewrite Programs 5.2 through 5.5, replacing all uses of the for statement by
 * equivalent while statements. Run each program to verify that both versions are
 * identical.
 */

#include <stdio.h>

int main(void)
{
    int n = 1;
    int triangularNumber = 0;
    while (n <= 200)
    {
        triangularNumber = triangularNumber + n;
        ++n;
    }
    printf("The 200th triangular number is %i\n", triangularNumber);

    return 0;
}
