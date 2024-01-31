/*
 * chapter 4, exercise 1, program 4.1
 * Type in and run the five programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

#include <stdio.h>

int main(void)
{
    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';
    _Bool boolVar = 0;

    printf("integerVar = %i\n", integerVar);
    printf("floatingVar = %f\n", floatingVar);
    printf("doubleVar = %e\n", doubleVar);
    printf("doubleVar = %g\n", doubleVar);
    printf("charVar = %c\n", charVar);
    printf("boolVar = %i\n", boolVar);

    return 0;
}
