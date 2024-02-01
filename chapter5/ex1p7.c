/*
 * chapter 5, exercise, program 5.7
 *Type in and run the nine programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

#include <stdio.h>

int main(void)
{
    int u, v, temp;
    printf("Please type in two nonnegative integers.\n");
    scanf("%i%i", &u, &v);
    while (v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;
    }
    printf("Their greatest common divisor is %i\n", u);
    return 0;
}
