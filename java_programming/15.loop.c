#include <stdio.h>
void main(){
    /*
        types of loop:
        1. for loop
            this is used when we know the exact number of iteration
            
            syntax:
            for(initialization; condition; counter/(increament or decrement)){
                //code
            }

        2. while loop
            this is used when we dont know the exact number of iteration

            syntax:
            // initialization
            while(condition){
                //code
                //counter
            }
        3. do while loop
            this is used when we dont know the exact number of iteration and also we need to 
            run the code inside do while block at least once
            
            syntax:
            //initialization
            do{
                //code
                //counter
            }while(condiiton);
    */

    // incremeant part can also be written as:  for(int i = 0; i< 5; i = i + 1)

   for(int i = 0; i < 5; i++){
    printf("for loop i = %d\n", i);
   }


    int i = 0;
    while(i < 5){
        printf("while loop i = %d\n", i);
        i++;
    }

    i = 0;
    do{
        printf("do while loop i = %d\n", i);
        i++;
    }while(i < 5);
}