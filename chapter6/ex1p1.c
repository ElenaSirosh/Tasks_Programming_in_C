/*
 * chapter 6, exercise 1, program 6.1
 * Type in and run the 10 programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.Try experimenting with each program by keying in values other than those
 * shown.
 */
#include <stdio.h>

int main(void)
{
    int number;
    printf("Type in your number: ");
    scanf("%i", &number);
    if (number < 0)
    {
        number = -number;
    }
    printf("The absolute value is %i\n", number);
    return 0;
}
