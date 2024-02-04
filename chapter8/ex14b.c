/*
 * chapter 8, exercise 14 program 2
 * Rewrite the functions developed in the last four exercises to use global variables
 * instead of arguments. For example, the preceding exercise should now sort a globally
 * defined array.
 */

// TransposeMatrix
#include <stdio.h>

int transposeMatrix();
int M[4][5] =
{
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 10},
    {11, 12, 13, 14, 15},
    {16, 17, 18, 19, 20}
};
int N[5][4];

int main(int argc, char *argv[])
{
    transposeMatrix();
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

// Function transposeMatrix
int transposeMatrix()
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
