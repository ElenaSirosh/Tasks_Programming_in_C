/*
 * chapter 6, exercise 1, program 6.6
 * Type in and run the 10 programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.Try experimenting with each program by keying in values other than those
 * shown.
 */

#include <stdio.h>

int main(void)
{
    int number, sign;
    printf("Please type in a number: ");
    scanf("%i", &number);
    if (number < 0)
    {
        sign = -1;
    }
    else if (number == 0)
    {
        sign = 0;
    }
    else // Must be positive
    {
        sign = 1;
    }
    printf("Sign = %i\n", sign);
    return 0;
}
