/*
 * chapter 5, exercise, program 5.5
 *Type in and run the nine programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

#include <stdio.h>

int main(void)
{
    int n, number, triangularNumber, counter;
    for (counter = 1; counter <= 5; ++counter)
    {
        printf("What triangular number do you want? ");
        scanf("%i", &number);
        triangularNumber = 0;
        for (n = 1; n <= number; ++n)
        {
            triangularNumber += n;
        }
        printf("Triangular number %i is %i\n\n", number, triangularNumber);
    }
    return 0;
}
