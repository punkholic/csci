#include <stdio.h>
void main(){
   int a = 12;
   int b = 14;
   int c = 43;
   int d = 43;
    // following code has two condition one is a == b and c == d so || checks if one of the condition is true
   printf(" a == b || c == d = %d\n", a == b || c == d);

    // following code has two condition one is a == b and c == d so && checks if both condition is true
   printf(" a == b && c == d = %d\n", a == b && c == d);

    /* 
    ! inverts the value of conditions so if the value inside () is true it will change it to true 
    and if the condition inside () is false it inverts it as true 
    */
   
   printf("!(a == b || c == d) = %d\n", !(a == b || c == d));

   /*
         &&  	Logical and 	
        ||  	Logical or 	   
        ! 	    Logical not
   */
}