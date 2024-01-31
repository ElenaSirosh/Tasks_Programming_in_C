/*
 * chapter 4, exercise 1, program 4.4
 * Type in and run the five programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

// The modulus operator
#include <stdio.h>

int main(void)
{
    int a = 25, b = 5, c = 10, d = 7;

    printf("a %% b = %i\n", a % b);
    printf("a %% c = %i\n", a % c);
    printf("a %% d = %i\n", a % d);
    printf("a / d * d + a %% d = %i\n", a / d * d + a % d);

    return 0;
}
