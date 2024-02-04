/*
 * chapter 8, exercise 1, program 8.6
 * Type in and run the 16 programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

/* Function to find the greatest common divisor of two
nonnegative integer values and to return the result */
#include <stdio.h>

int gcd(int u, int v)
{
    int temp;
    while (v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;
    }
    return u;
}
int main(void)
{
    int result;
    result = gcd(150, 35);
    printf("The gcd of 150 and 35 is %i\n", result);
    result = gcd(1026, 405);
    printf("The gcd of 1026 and 405 is %i\n", result);
    printf("The gcd of 83 and 240 is %i\n", gcd(83, 240));
    return 0;
}
