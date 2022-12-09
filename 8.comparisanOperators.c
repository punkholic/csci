#include <stdio.h>
void main(){
   int a = 12;
   int b = 14;
    // in c there is no datatype like boolean so it uses 0 as false and all other number as true
   printf("a == b = %d\n", a == b);
   printf("a != b = %d\n", a != b);
   printf("a > b = %d\n", a > b);
   printf("a < b = %d\n", a < b);
   printf("a >= b = %d\n", a >= b);
   printf("a <= b = %d\n", a <= b);
   /*
      == 	Equal to 	x == y 	
        != 	Not equal 	x != y 	
        > 	Greater than 	x > y 	
        < 	Less than 	x < y 	
        >= 	Greater than or equal to 	x >= y 	
        <= 	Less than or equal to 	x <= y
   */
}