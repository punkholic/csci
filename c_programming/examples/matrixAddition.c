#include <stdio.h>
void main(){
    int matrix1[3][3] = {
        {1,3,4},
        {2,4,3},
        {3,4,5},
    };
    int matrix2[3][3] = {
        {1,3,4},
        {2,4,3},
        {1,2,4},
    };
    int sum;    
    for(int i=0;i<3;i++){
        for(int j=0; j<3;j++){
            sum = matrix1[i][j] + matrix2[i][j];
            printf("%d ", sum);
        }
        printf("\n");
    }
}