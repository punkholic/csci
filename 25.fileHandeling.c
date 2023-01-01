#include <stdio.h>

void main(){
    /*
    to process a file with c we use file handeling,
    first we need to open a file with a mode

    mode is a instruction given to our program to let it know how we will process the file
    their are many types of modes:

        r - open a file in read mode
        w - opens or create a text file in write mode
        a - opens a file in append mode
        r+ - opens a file in both read and write mode
        a+ - opens a file in both read and append mode
        w+ - opens a file in both read and write mode

    so first we need to open a file in a specific mode to do so 
    
    we use fopen function, it asks two arguments
    first argument is the file name and second arguments is the mode

    the fopen function has a return type of file pointer, so we need to store it in a 
    datatpe of FILE creating it's pointer

    */
    FILE *ptr1 = fopen("data", "w");


    /*
    after opening a file we need to close it so other programs may be wating to process that file
    to do so, we need to use a function named fclose which asks file pointer as it's arguments
    */
   fclose(ptr1);
}
