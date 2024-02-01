/*
 * chapter 6, exercise 7
 * Program 6.10 has several inefficiencies. One inefficiency results from checking
 * even numbers. Because it is obvious that any even number greater than 2 cannot
 * be prime, the program could simply skip all even numbers as possible primes and
 * as possible divisors.The inner for loop is also inefficient because the value of p is
 * always divided by all values of d from 2 through p–1.This inefficiency could be
 * avoided by adding a test for the value of isPrime in the conditions of the for
 * loop. In this manner, the for loop could be set up to continue as long as no divisor
 * was found and the value of d was less than p. Modify Program 6.10 to incorporate
 * these two changes.Then run the program to verify its operation. (Note: In
 * Chapter 7, you discover even more efficient ways of generating prime numbers.)
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    //объявить массив р[n], n = 150 размер входных данных
    int n = 500;
    bool p[n];
    // инициализация счетчика
    //int s = 0;
    // установить p[i] на true, 2 <= i <= n
    // инициализация массива
    for (int i = 2; i < n; ++i)
    {
        p[i] = true;
    }
    for (int i = 2; i < n; ++i)
    {
        if (p[i])
        {
            for (int j = 2; i * j < n; ++j)
            {
                p[i * j] = false;
                //инкрементация счетчика
                //s = s + 2;
            }
        }
    }
    for (int i = 2; i < n; ++i)
    {
        if (p[i] == true)
        {
            printf("%i\n", i);
        }
    }

    // вывести на экран счетчик
    //printf("%i\n ", s);
    return 0;
}
