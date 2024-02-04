/*
 * chapter 8, exercise 3
 * Modify Program 8.8 so that the value of epsilon is passed as an argument to the
 * function.Try experimenting with different values of epsilon to see the effect that
 * it has on the value of the square root.
 */

// Function to calculate the absolute value of a number
#include <stdio.h>
#include <stdlib.h>

float absoluteValue(float x);
float squareRoot(float x, float epsilon);

const float STD_EPS = .00001;

int main(int argv, char *argc[])
{
    // get epsilon
    float epsilon;
    if (argv >= 3)
    {
        //take epsilon from args
        epsilon = atof(argc[2]);
    }
    else
    {
        // take standart epsilon
        epsilon = STD_EPS;
    }
    // check that number provided
    if (argv >= 2)
    {
        //get number from comand line arguments
        float x = atof(argc[1]);
        float r = squareRoot(x, epsilon);
        printf("square root of '%f' is '%f' with epsilon = %f\n", x, r, epsilon);

        return 0;
    }
    else
    {
        //program termination
        printf("Number not povided!\n");
        printf("Usage: ex3 5.0\n");

        return 1;
    }
}
float absolutValue(float x)
{
    if (x < 0)
    {
        x = -x;
    }
    return x;
}
//Function to comute the square root of a number
float squareRoot(float x, float epsilon)
{
    float guess = 1.0;
    while (absolutValue(guess * guess - x) >= epsilon)
    {
        guess = (x / guess + guess) / 2.0;
    }
    return guess;
}
