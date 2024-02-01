/*
 * chapter 5, exercise 9, program 5.3
 * Rewrite Programs 5.2 through 5.5, replacing all uses of the for statement by
 * equivalent while statements. Run each program to verify that both versions are
 * identical.
 */

#include <stdio.h>

int main(void)
{
    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf(" n  Sum from 1 to n\n");
    printf("---  --------------\n");
    int n = 1;
    int triangularNumber = 0;
    while (n <= 10)
    {
        triangularNumber += n;
        printf(" %2i            %i\n", n, triangularNumber);
        ++n;
    }
    return 0;
}
