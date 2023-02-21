#include <stdio.h>

void main(){
    int matrix1[3][3] = {{2,2,1}, {1,5,0}, {0,0,1}};
    int matrix2[3][3] = {{5,7,1}, {0,3,0}, {1,0,8}};

    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
            int c= matrix1[i][j] + matrix2[i][j];
            printf("%d ", c);
        }
        printf("\n");
    }
    

    // int c= matrix1[0][0] + matrix2[0][0];
    // c= matrix1[0][1] + matrix2[0][1];
    // c= matrix1[0][2] + matrix2[0][2];

    // c= matrix1[1][0] + matrix2[1][0];
    // c= matrix1[1][1] + matrix2[1][1];
    // c= matrix1[1][2] + matrix2[1][2];


    // c= matrix1[2][0] + matrix2[2][0];
    // c= matrix1[2][1] + matrix2[2][1];
    // c= matrix1[2][2] + matrix2[2][2];

    // printf("%d", c);

}