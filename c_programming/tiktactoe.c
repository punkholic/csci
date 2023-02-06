#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    int isExit = 0;
    int winningCondition[8][3] = { {0,1,2}, {3,4,5}, {6,7,8}, {0,3,6}, {1,4,7}, {2,5,8}, {2,4,6}, {0,4,8}};
    
    char gameInput[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    int i;
    
        
        // return;
    int playerIndex = 1;
    int playingIndex;

    while(1){
        int isDraw = 1;
        
        char gamePrintData[] = "    t |   t   | t  \n   ---------------   \n    t |   t   | t  \n   ---------------   \n    t |   t   | t  \n";
        int counter = 0;
        
        for(i=0; i<9;i++){
            if(gameInput[i] == ' '){
                isDraw = 0;
            }
        }
        for(i=0;i<strlen(gamePrintData); i++){
            if(gamePrintData[i] == 't'){
                gamePrintData[i] = gameInput[counter];
                counter = counter + 1;
            }
        }
        
        system("clear");
        // system("cls");
        printf("%s\n", gamePrintData);

     

        if(isExit != 0 || isDraw != 0){
            if(isExit == 1){
                printf("X Won");
            }else if(isExit == 2){
                printf("O Won");
            }else{  
                printf("Draw");
            }
            return;
        }

        printf("enter a position to play:");
        scanf("%d", &playingIndex);

        if(gameInput[playingIndex] == ' ' && playingIndex <= 8 && playerIndex >=0 ){
            gameInput[playingIndex]= playerIndex % 2 == 0 ? 'x' : 'o';
            playerIndex = playerIndex + 1;
        }

        
        for(i=0;i<8;i++){
            int xWon = 1;
            int oWon = 1;
            for(int j=0;j<3;j++){
                if(gameInput[winningCondition[i][j]] != 'x'){
                    xWon = 0;
                }
                if(gameInput[winningCondition[i][j]] != 'o'){
                    oWon = 0;
                }
            }
          
            if(xWon == 1){
                isExit = 1;
            }
            if(oWon == 1){
                isExit = 2;
            }
        }
            // printf("exit = %d\n", isExit);

    }
    

}