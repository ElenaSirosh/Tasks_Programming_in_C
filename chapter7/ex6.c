/*
 * chapter 7, exercise 6
 * You don’t need to use an array to generate Fibonacci numbers.You can simply use
 * three variables: two to store the previous two Fibonacci numbers and one to store
 * the current one. Rewrite Program 7.3 so that arrays are not used. Because you’re
 * no longer using an array, you need to display each Fibonacci number as you generate
 * it.
 */

// Program to generate the first 15 Fibonacci numbers
#include <stdio.h>
int main(void)
{
    int fa = 0, fb = 1, fi;
    printf("%i\n", fa);
    printf("%i\n", fb);

    for (int i = 2; i < 15; ++i)
    {
        fi = fa + fb;
        fa = fb;
        fb = fi;
        printf("%i\n", fi);
    }

    return 0;
}
