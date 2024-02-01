/*
 * chapter 7, exercise 5
 * What output do you expect from the following program?
 * #include <stdio.h>
 * int main (void)
 * {
 *      int numbers[10] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
 *      int i, j;
 *      for (j = 0; j < 10; ++j)
 *          for (i = 0; i < j; ++i)
 *              numbers[j] += numbers[i];
 *          for (j = 0; j < 10; ++j)
 *              printf ("%i ", numbers[j]);
 *          printf ("\n");
 *          return 0;
 * }
 */

#include <stdio.h>

int main(void)
{
    int numbers[10] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    int i, j;
    for (j = 0; j < 10; ++j)
        for (i = 0; i < j; ++i)
        {
            numbers[j] += numbers[i];
        }
    for (j = 0; j < 10; ++j)
    {
        printf("%i ", numbers[j]);
    }
    printf("\n");
    return 0;
}
