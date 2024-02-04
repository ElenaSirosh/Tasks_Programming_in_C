/*
 * chapter 8, exercise 1, program 8.5
 * Type in and run the 16 programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

/* Function to find the greatest common divisor
of two nonnegative integer values */
#include <stdio.h>

void gcd(int u, int v)
{
    int temp;
    printf("The gcd of %i and %i is ", u, v);
    while (v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;
    }
    printf("%i\n", u);
}
int main(void)
{
    gcd(150, 35);
    gcd(1026, 405);
    gcd(83, 240);
    return 0;
}
