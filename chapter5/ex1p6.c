/*
 * chapter 5, exercise, program 5.6
 *Type in and run the nine programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

#include <stdio.h>

int main(void)
{
    int count = 1;
    while (count <= 5)
    {
        printf("%i\n", count);
        ++count;
    }
    return 0;
}
