#include <stdio.h>
void main(){
    /*
    to declare 2 dimension array we need to provide 2 index size
    first index size refers to the amount of array inside the outer array
    second index size refers to the amount of value inside specific array
    */
   int array2D[2][3] = {
    {1,2,3}, {4,5,6}
    };
   /*
   above array2D[2][3]
   2 means the amount of array provided to 2d array 
   which are:
   {1,2,3} and {4,5,6}
   and 3 means the amount of values provided to each arrays

    to print the specific values inside 2D array we need to give 2 index
    first index refers to the array in which the the value is
    and 2nd index refers to the value where the value is inside the given array

    example array2D[0][1] here, first index is the array index where the value is
    if we need to print 2 the 0 index array has the value 2 so we passed 0 as first index
    and inside that array index 1 has the value 2 so, we passed 1 in second index

   */
  printf("%d", array2D[0][1]);


}