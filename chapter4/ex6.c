/*
 * chapter 4, exercise 6
 * Write a program to evaluate the polynomial shown here:
 * 3x3 - 5x2 + 6
 * for x = 2.55.
 */

#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    float x = get_float("x =  ");
    float y = 3 * powf(x, 3) - 5 * powf(x, 2) + 6;

    printf("f(x) = 3x^3 - 5x^2 + 6),when x = %f, f(x) = %f\n", x, y);

    return 0;
}
