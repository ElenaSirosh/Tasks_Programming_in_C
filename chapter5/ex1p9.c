/*
 * chapter 5, exercise, program 5.9
 *Type in and run the nine programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

#include <stdio.h>

int main()
{
    int number, right_digit;
    printf("Enter your number.\n");
    scanf("%i", &number);
    do
    {
        right_digit = number % 10;
        printf("%i", right_digit);
        number = number / 10;
    }
    while (number != 0);
    printf("\n");
    return 0;
}
