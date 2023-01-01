#include <stdio.h>
#include <string.h>
void main()
{
    int matrix1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    int matrix2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1},
    };
    int matrix3[3][3];

    for (int k = 0; k < 3; k++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix3[k][j] = 0;
            for (int i = 0; i < 3; i++)
            {
                matrix3[k][j] += matrix1[k][i] * matrix2[i][j];
            }
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }
}