#include <stdio.h>
#include <string.h>
void main()
{
    char inputs[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}; 
    int playerIndex = 0;
    while(1){
        playerIndex++;
      
        char game[] = " t |  t  |  t   \n-------------\n t |  t  |  t   \n-------------\n t |  t  |  t   \n";
        int counter = 0;
        for(int i=0; i< strlen(game);i++){
            if(game[i] == 't'){
                game[i] = inputs[counter];
                counter++;
            }
        }
        printf("%s", game);

        int position;
        printf("enter where you want to play:");
        scanf("%d", &position);
        if(playerIndex % 2 == 0){
            inputs[position] = 'x';
        }else{
            inputs[position] = 'o';
        }

    }
}
