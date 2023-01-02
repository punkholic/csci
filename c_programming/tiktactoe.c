#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){
    char values[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    int winningConditions[8][3] = {
        {0,1,2},
        {3,4,5},
        {6,7,8},
        {0,3,6},
        {1,4,7},
        {2,5,8},
        {0,4,8},
        {2,4,6}
    };
    
    int playerCounter = 1;
    while(1){
/*

*/
        int counter = 0;
        char printData[] = "  t  |  t   | t   \n  ---------------   \n  t  |  t   | t   \n  ----------------   \n  t  |  t   | t   \n";
        int length = strlen(values);
        for(int i=0; i< length; i++){
            if(printData[i] == 't'){
                printData[i] = values[counter++];
            }
        }
        printf("%s", printData);

        int position;
        printf("enter a position:");
        scanf("%d", &position);
        system("clear");
        if(values[position] == ' '){
            values[position] = playerCounter % 2 ? 'x' : 'o';
            playerCounter++;
        }
        for(int i=0;i<8;i++){
            int xWon = 0;
            int oWon = 0;

            for(int j=0;j<3;j++){
                if(values[winningConditions[i][j]] != 'o'){
                    oWon = 1;
                }
                if(values[winningConditions[i][j]] != 'x'){
                    xWon = 1;
                }
            }
            if(xWon == 0){
                printf("X Won");
                exit(1);
            }
            if(oWon == 0){
                printf("O Won");
            }
            printf("\n");
        }
    }
}