/*
 * chapter 8, exercise 1, program 8.11
 * Type in and run the 16 programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

#include <stdio.h>

void multiplyBy2(float array[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
    {
        array[i] *= 2;
    }
}
int main(void)
{
    float floatVals[4] = {1.2f, -3.7f, 6.2f, 8.55f};
    int i;
    void multiplyBy2(float array[], int n);
    multiplyBy2(floatVals, 4);
    for (i = 0; i < 4; ++i)
    {
        printf("%.2f  ", floatVals[i]);
    }
    printf("\n");
    return 0;
}
