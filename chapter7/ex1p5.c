/*
 * chapter 7, exercise 1, program 7.5
 * Type in and run the eight programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

#include <stdio.h>

int main(void)
{
    int array_values[10] = { 0, 1, 4, 9, 16 };
    int i;
    for (i = 5; i < 10; ++i)
    {
        array_values[i] = i * i;
    }
    for (i = 0; i < 10; ++i)
    {
        printf("array_values[%i] = %i\n", i, array_values[i]);
    }
    return 0;
}
