/*
 * chapter 8, exercise 8
 * An equation of the form
 * ax2 + bx + c = 0
 * is known as a quadratic equation.The values of a, b, and c in the preceding example
 * represent constant values. So
 * 4x2 - 17x - 15 = 0
 * represents a quadratic equation where a = 4, b = –17, and c = –15.The values of x
 * that satisfy a particular quadratic equation, known as the roots of the equation, can
 * be calculated by substituting the values of a, b, and c into the following two
 * formulas:
 * If the value of b2–4ac, called the discriminant, is less than zero, the roots of the
 * equation, x1 and x2, are imaginary numbers.
 * Write a program to solve a quadratic equation.The program should allow
 * the user to enter the values for a, b, and c. If the discriminant is less than
 * zero, a message should be displayed that the roots are imaginary; otherwise,
 * the program should then proceed to calculate and display the two roots of
 * the equation. (Note: Be certain to make use of the squareRoot function that
 * you developed in this chapter.)
 */

#include <stdio.h>
#include <math.h>
#include <cs50.h>
#include <stdlib.h>

double squareRoot(double d)
{
    double epsilon = 0.00001;
    double guess = d;
    while ((guess - d / guess) > epsilon)
    {
        guess = (guess + d / guess) / 2;
    }

    return guess;
}

int main(int argv, char *argc[])
{
    double b = atof(argc[2]);
    double c = atof(argc[3]);
    double a = atof(argc[1]);
    printf("Enter the values: a = %.f, b = %.f, and c = %.f ", a, b, c);

    double d = b * b - 4 * a * c;
    printf("discriminant =(%.f)\n", d);
    if (d < 0)
    {
        printf("No real roots!\n");
        return 0;
    }
    if (d == 0)
    {
        double x = (-b / (2 * a));
        printf("x = %.f \n", x);
    }

    else
    {
        double x1 = (-b + squareRoot(d)) / (2 * a);
        double x2 = (-b - squareRoot(d)) / (2 * a);

        printf("x1,x2 =: %.f and %.2f\n", x1, x2);
    }

    return 0;
}
