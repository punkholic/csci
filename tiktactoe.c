#include <stdio.h>
#include <string.h>

void checkWon(char inputs[])
{
    for (int i = 0; i <= 6; i += 3)
    {
        int oWon = 1;
        int xWon = 1;
        for (int j = 0; j < 3; j++){
            if (inputs[j + i] != 'o'){
                oWon = 0;
            }
            if (inputs[j + i] != 'x'){
                xWon = 0;
            }
        }
        if (oWon){
            printf("o won");
        }
        if (xWon){
            printf("x won");
        }
    }
}
void main()
{

    // for(int i=0; i<3;i++){
    //     for(int j=0;j<=i+6;j+=3){
    //         printf("%d, ", j+i);
    //     }
    //     printf("\n");
    // }

    // for(int i=0;i<=8;i+=4){
    //     printf("%d, ", i);
    // }
    // for(int i=2;i<=6;i+=2){
    //     printf("%d, ", i);
    // }
    /*
    0,1,2
    3,4,5
    6,7,8

    0,3,6
    1,4,7
    2,5,8

    0,4,8
    2,4,6

    */
    char inputs[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    int playerIndex = 0;
    while (1)
    {

        char game[] = " t |  t  |  t   \n-------------\n t |  t  |  t   \n-------------\n t |  t  |  t   \n";
        int counter = 0;
        for (int i = 0; i < strlen(game); i++)
        {
            if (game[i] == 't')
            {
                game[i] = inputs[counter];
                counter++;
            }
        }
        // system("clear");
        printf("%s", game);

        int position;
        printf("enter where you want to play:");
        scanf("%d", &position);
        if (inputs[position] == ' ')
        {
            playerIndex++;
            inputs[position] = playerIndex % 2 == 0 ? 'x' : 'o';
            checkWon(inputs);
        }
    }
}
