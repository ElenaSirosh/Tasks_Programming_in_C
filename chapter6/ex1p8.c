/*
 * chapter 6, exercise 1, program 6.8
 * Type in and run the 10 programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.Try experimenting with each program by keying in values other than those
 * shown.
 */

#include <stdio.h>

int main(void)
{
    float value1, value2;
    char operator;
    printf("Type in your expression.\n");
    scanf("%f %c %f", &value1, &operator, &value2);
    if (operator == '+')
    {
        printf("%.2f\n", value1 + value2);
    }
    else if (operator == '-')
    {
        printf("%.2f\n", value1 - value2);
    }
    else if (operator == '*')
    {
        printf("%.2f\n", value1 * value2);
    }
    else if (operator == '/')
    {
        printf("%.2f\n", value1 / value2);
    }
    return 0;
}
