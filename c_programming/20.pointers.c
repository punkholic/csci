#include <stdio.h>
void main(){
    /*
    here we are storing a value in a which is 12, while the program runs every variable is stored
    in a unique memory address 
    */
    int a = 12;
    // to print memory address we use %p and give & infront of premitive datatype
    printf("the value of a is stored in = %p\n", &a);
    /*
    we can store the address to a variable with same datatype pointer
    to create a pointer we would follow this syntax:
    datatype *variableName;
    a pointer stores the address of the variable, so it points to the address where the value is stored
    in memory address
    because pointer stores a variable memory address location we can directly print the value without 
    using & infront of pointer variable
    */
   int *ptr = &a;
   printf("the memory address stored in ptr = %p\n", ptr);

   /*
   so the pointer points to the variable memory address location, we can access the location value by adding 
   star(*) infront of pointer variable like:
   */
  printf("value inside ptr address = %d\n", *ptr);

  /*
  here we used int pointer, we can create any datatypes pointer like above:
  example
  */
    char b = 'a';
    printf("memory address of b = %p\n", &b);
    char *charPtr = &b;
    printf("value of b = %c\n", *charPtr);
        
    
}