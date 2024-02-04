/*
 * chapter 8, exercise 1, program 8.15
 * Type in and run the 16 programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

// Program to illustrate static and automatic variables
#include <stdio.h>

void auto_static(void)
{
    int autoVar = 1;
    static int staticVar = 1;
    printf("automatic = %i, static = %i\n", autoVar, staticVar);
    ++autoVar;
    ++staticVar;
}
int main(void)
{
    int i;
    void auto_static(void);
    for (i = 0; i < 5; ++i)
    {
        auto_static();
    }
    return 0;
}
