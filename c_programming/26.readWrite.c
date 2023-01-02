#include <stdio.h>

void writeFile();
void readFile();

void main(){
    writeFile();
    readFile();
}
void readFile(){
    FILE *fptr = fopen("data", "r");
    int a; 
    /*
        to read from a file we can use fscanf,
        just like scanf intputs given arguments from console fscanf gets input from a file
        fscanf asks first argument as a file pointer and other arguments are same as printf
    */
    fscanf(fptr, "%d", &a);
    printf("Read data from the file = %d", a);
    fclose(fptr);
}

void writeFile(){
    FILE *fptr = fopen("data", "w");
    int a = 12; 
    /*
        to write inside a file we can use fprintf,
        just like printf outputs given arguments to console fprintf gives output to a file
        fprintf asks first argument as a file pointer and other arguments are same as printf
    */
    fprintf(fptr, "%d", a);
    fclose(fptr);

}