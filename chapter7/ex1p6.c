/*
 * chapter 7, exercise 1, program 7.6
 * Type in and run the eight programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

#include <stdio.h>

int main(void)
{
    char word[] = { 'H', 'e', 'l', 'l', 'o', '!' };
    int i;
    for (i = 0; i < 6; ++i)
    {
        printf("%c", word[i]);
    }
    printf("\n");
    return 0;
}
