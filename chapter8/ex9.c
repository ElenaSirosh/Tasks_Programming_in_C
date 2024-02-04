/*
 * chapter 8, exercise 9
 * The least common multiple (l cm) of two positive integers u and v is the smallest
 * positive integer that is evenly divisible by both u and v.Thus, the lcm of 15 and 10,
 * written l cm (15, 10), is 30 because 30 is the smallest integer divisible by both 15
 * and 10.Write a function lcm that takes two integer arguments and returns their
 * l cm.The l cm function should calculate the least common multiple by calling the
 * gcd function from Program 8.6 in accordance with the following identity:
 * l cm (u, v) = uv / gcd (u, v) u, v >= 0
 */

#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int gcd(int u, int v);
int lcm(int u, int v);

int main(int argv, char *argc[])
{
    int u = atoi(argc[1]);
    int v = atoi(argc[2]);
    int result = lcm(u, v);
    printf("The lcm of %i and %i is %i\n", u, v, result);

    return 0;
}

int gcd(int u, int v)
{
    while (v != 0)
    {
        int temp = u % v;
        u = v;
        v = temp;
    }
    return u;
}

int lcm(int u, int v)
{
    int result;
    if (u == 0 || v == 0)
    {
        result = 0;
    }
    else
    {
        result = (u * v) / gcd(u, v);
    }
    return result;
}
