/*
 * chapter 8, exercise 6
 * Modify Program 8.8 so that the squareRoot function accepts a double precision
 * argument and returns the result as a double precision value. Be certain to change
 * the value of the variable epsilon to reflect the fact that double precision variables
 * are now being used.
 */

// Function to calculate the absolute value of a number
#include <stdio.h>
#include <stdlib.h>

double absoluteValue(double x);
double squareRoot(double x, double epsilon);

const double STD_EPS = .00001;

int main(int argv, char *argc[])
{
    // get epsilon
    double epsilon;
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
        double x = atof(argc[1]);
        double r = squareRoot(x, epsilon);
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
double absolutValue(double x)
{
    if (x < 0)
    {
        x = -x;
    }
    return x;
}
//Function to comute the square root of a number
double squareRoot(double x, double epsilon)
{
    double guess = 1.0;
    while (absolutValue(guess * guess - x) >= epsilon)
    {
        guess = (x / guess + guess) / 2.0;
    }
    return guess;
}
