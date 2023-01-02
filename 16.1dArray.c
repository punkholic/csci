#include <stdio.h>
void main(){
    /* 
    our normal datatype can only hold a singular value of its own kind
    here it can only hold 12
    so to store many kind of values in same variable name we can use array
    */
    int a = 12;
  
    
    /*
    if we want to create an array first and give its value below it, we need to define the size of array
    below i created an array named intArray[3], where 3 means i can store three values in a single variable name
    because it is an int array i can only store data which int can hold (whole numbers)
    */
    int intArray[3]; // this is array defination
    intArray[0] = 12; // giving value below the defination
    intArray[1] = 44;
    intArray[2] = 23;
    /*
        below i didn't give an value inside intArray2[] the big brackets because we are storing the 
        array values in the same line. because of this c automatically knows the size of array and 
        gives it size cause we gave 3 values so c will know it is size of 3
    */

   int intArray2[] = {1,2,3};
    /*
        while giving size of array we need to count how many values we are storing like in intArray[3],
        3 is the size
        but while using the array of accessing the values we need to count from 0
        this is also know as indexing

        int intArray2[] = {1,2,3};
        here, intArray2 holds 3 values
        1,2 and 3
        so we can say that the value 1 is stored on index 0, value 2 is stored on index 1 and so on.
    */
   
   //we can also change each index values as :
    intArray2[0] =43;
    printf("intArray[0]=%d\n", intArray2[0]);

    /*
    we can create array of every datatypes like:
    */
   float floatArray[] = {13.43, 54.32, 43.5};
   // printing all data of arrays:
   printf("printing int array:\n");
    for(int i =0; i< 3; i++){
        printf("intArray[%d] = %d\n", i, intArray[i]);
   }

   printf("printing float array:\n");
   for(int i =0; i< 3; i++){
    printf("floatArray[%d] = %f\n", i, floatArray[i]);
   }
   

   

}