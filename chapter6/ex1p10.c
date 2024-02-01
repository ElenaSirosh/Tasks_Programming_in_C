/*
 * chapter 6, exercise 1, program 6.10
 * Type in and run the 10 programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.Try experimenting with each program by keying in values other than those
 * shown.
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int p, d;
    bool isPrime;
    // инициализация счетчика
    //int s = 0;
    for (p = 2; p <= 50; ++p)
    {
        isPrime = 1;
        for (d = 2; d < p; ++d)
        {
            //printf("вложенный цикл: d = %i, p = %i\n", d, p);
            if (p % d == 0)
            {
                isPrime = 0;
            }
            // инкрементация счетчика
            //s++;
        }
        if (isPrime)
        {
            printf("%i \n", p);
        }
    }
    // вывести на экран счетчик
    //printf("%i\n ", s);
    return 0;
}
