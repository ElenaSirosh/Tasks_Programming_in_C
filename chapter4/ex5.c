/*
 * chapter 4, exercise 5
 * What output would you expect from the following program?
 * #include <stdio.h>
 * int main (void)
 * {
 *      char c, d;
 *      c = 'd';
 *      d = c;
 *      printf ("d = %c\n", d);
 *      return 0;
 * }
 */

#include <stdio.h>

int main(void)
{
    char c, d;
    c = 'd';
    d = c;
    printf("d = %c\n", d);
    return 0;
}
