#include <stdio.h>

void main(){
    FILE *fptr1 = fopen("data", "r");
    FILE *fptr2 = fopen("data2", "w");
    
    char firstCharacter = fgetc(fptr1);
    while(firstCharacter != EOF){
        fputc(firstCharacter, fptr2);
        firstCharacter = fgetc(fptr1);
    }
    fclose(fptr1);
    fclose(fptr2);

}
