/*
 * chapter 5, exercise 2
 *Write a program to generate and display a table of n and n2, for integer values of n
 * ranging from 1 to 10. Be certain to print appropriate column headings.
 */

#include <stdio.h>

int main(void)
{
    printf("TABLE OF NUMBERS\n\n");
    printf(" n  Sum from 1 to n\n");
    printf("---  --------------\n");
    for (int n = 1; n <= 10; ++n)
    {
        printf("%i            %i\n", n, n * n);
    }
    return 0;
}
