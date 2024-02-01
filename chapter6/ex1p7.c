/*
 * chapter 6, exercise 1, program 6.7
 * Type in and run the 10 programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.Try experimenting with each program by keying in values other than those
 * shown.
 */

#include <stdio.h>

int main(void)
{
    char c;
    printf("Enter a single character:\n");
    scanf("%c", &c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("It's an alphabetic character.\n");
    }
    else if (c >= '0' && c <= '9')
    {
        printf("It's a digit.\n");
    }
    else
    {
        printf("It's a special character.\n");
    }
    return 0;
}
