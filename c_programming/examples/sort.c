#include <stdio.h>

void main(){
    int newArray[] = {99,75,1,6,84,7,8};
    
    for(int j=0;j<7; j++){
        for(int i=0;i<6; i++){
            if(newArray[i] > newArray[i+1]){
                int temp = newArray[i];
                newArray[i] = newArray[i+1];
                newArray[i+1] = temp;
            }
        }
    
    }
    for(int i=0;i<7; i++){
        printf("%d, ", newArray[i]);
    }
    

}