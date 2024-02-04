/*
 * chapter 8, exercise 1, program 8.7
 * Type in and run the 16 programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

// Function to calculate the absolute value
#include <stdio.h>

float absoluteValue(float x)
{
    if (x < 0)
    {
        x = -x;
    }
    return x;
}
int main(void)
{
    float f1 = -15.5, f2 = 20.0, f3 = -5.0;
    int i1 = -716;
    float result;
    result = absoluteValue(f1);
    printf("result = %.2f\n", result);
    printf("f1 = %.2f\n", f1);
    result = absoluteValue(f2) + absoluteValue(f3);
    printf("result = %.2f\n", result);
    result = absoluteValue((float) i1);
    printf("result = %.2f\n", result);
    result = absoluteValue(i1);
    printf("result = %.2f\n", result);
    printf("%.2f\n", absoluteValue(-6.0) / 4);
    return 0;
}
