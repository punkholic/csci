#include <stdio.h>
void main(){
    /*
    because c doesnt have a string datatype it provides different type of 
    structure to use char array as string
    to define char array we write as follows:
    */
    
    char name[] = {'r', 'a', 'm'};

    char name2[] = "ram";

    char name3[3];
    name3[0] = 'r';
    name3[1] = 'a';
    name3[2] = 'm';
    /*
    just like other arrays we can define char array, in addition to that
    we can also define char array as name2 is defined
    int name2[] = "ram";
    to print other array we need to print all index one by one
    but to print char array we can use %s as specifier and print the whole array indexes
    example:
    */
   printf("value inside name2 = %s\n", name2);
   


    
}