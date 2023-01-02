#include <stdio.h>

void main(){
    /*
    to read everything inside a file we need to read it character by character
    until it hits end of file character, every file has end of file character at the end
    this character is same as '\n' which cannot be seen but it applys while we press enter
    inside a text editor

    so to read each character from a file we use fgetc function, it asks file pointer as argument
    */
   FILE *fptr = fopen("data", "r");
   /*
   fgetc gets first character from a file when we use it for the first time,
   as we keep using it, it moves it's pointer from first position to next character and it gets 
   next character as we keep calling it 
   
   here we called the fgetc for the first time so it get first character and move its position to second character
   */
    char gotData = fgetc(fptr);

    // now because its postion is moved it will get second character and so on
    gotData = fgetc(fptr);
    printf("%c", gotData);
    fclose(fptr);


    /*
        so to write each character to a file we use fputc function, it asks character as first argument
        and file pointer as second argument

        fputc writes character to a file at firs position when we use it for the first time,
        as we keep using it, it moves it's pointer from first position to next character and it puts 
        next character as we keep calling it 


    */

    FILE *fptr2 = fopen("data2", "w");
    // here we called the fputc for the first time so it puts first character and move its position to second character
    
    fputc('h', fptr);
    // now because its postion is moved it will put second character in second position  and so on
    fputc('e', fptr);
    fputc('l', fptr);
    fputc('l', fptr);
    fputc('o', fptr);
    fclose(fptr2);
    // so all this will write hello in a file named data2

}