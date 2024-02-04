/*
 * chapter 8, exercise 12
 * A matrix M with i rows, j columns can be transposed into a matrix N having j rows
 * and i columns by simply setting the value of Na,b equal to the value of Mb,a for all
 * relevant values of a and b.
 * a. Write a function transposeMatrix that takes as an argument a 4 x 5 matrix
 * and a 5 x 4 matrix. Have the function transpose the 4 x 5 matrix and store
 * the results in the 5 x 4 matrix. Also write a main routine to test the function.
 * b. Using variable-length arrays, rewrite the transposeMatrix function developed
 * in exercise 12a to take the number of rows and columns as arguments,
 * and to transpose the matrix of the specified dimensions.
 */

#include <stdio.h>

int transposeMatrix(int M[4][5], int N[5][4]);

int main(int argc, char *argv[])
{
    // Matrix М
    int N[5][4];
    int M[4][5] =
    {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };
    transposeMatrix(M, N);
    printf("M:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    // Matrix N
    printf("N:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", N[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// function transposeMatrix
int transposeMatrix(int M[4][5], int N[5][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            N[j][i] = M[i][j];
        }
    }
    return 0;
}
