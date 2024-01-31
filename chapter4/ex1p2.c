/*
 * chapter 4, exercise 1, program 4.2
 * Type in and run the five programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

// Illustrate the use of various arithmetic operators
#include <stdio.h>

int main(void)
{
    int a = 100;
    int b = 2;
    int c = 25;
    int d = 4;
    int result;

    result = a - b; // subtraction
    printf("a - b = %i\n", result);
    result = b * c; // multiplication
    printf("b * c = %i\n", result);
    result = a / c; // division
    printf("a / c = %i\n", result);
    result = a + b * c; // precedence
    printf("a + b * c = %i\n", result);
    printf("a * b + c * d = %i\n", a * b + c * d);
    return 0;
}
