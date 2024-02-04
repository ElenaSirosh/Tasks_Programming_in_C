/*
 * chapter 8, exercise 5
 * The criteria used for termination of the loop in the squareRoot function of
 * Program 8.8 is not suitable for use when computing the square root of very large
 * or very small numbers. Rather than comparing the difference between the value of
 * x and the value of guess2, the program should compare the ratio of the two values
 * to 1.The closer this ratio gets to 1, the more accurate the approximation of the
 * square root.
 * Modify Program 8.8 so this new termination criteria is used.
 */

// Function to calculate the absolute value of a number
#include <stdio.h>
#include <stdlib.h>

const float STD_EPS = 0.00001;
float absoluteValue(float x);
float squareRoot(float x, float epsilon);
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
        // take standard epsilon
        epsilon = STD_EPS;
    }
    // check that number provided
    if (argv >= 2)
    {
        //get number from command line arguments
        float x = atof(argc[1]);
        float r = squareRoot(x, epsilon);
        printf("square root of '%f' is '%f' with epsilon = %f\n", x, r, epsilon);

        return 0;
    }
    else
    {
        //program termination
        printf("Number not provided!\n");
        printf("Usage: ex3 5.0\n");

        return 1;
    }
}
float absoluteValue(float x)
{
    if (x < 0)
    {
        x = -x;
    }
    return x;
}
//Function to compute the square root of a number
float squareRoot(float x, float epsilon)
{
    float guess = 1.0;
    do
    {
        guess = (x / guess + guess) / 2.0;
    }
    while (absoluteValue(guess * guess - x) >= epsilon);

    return guess;
}
