#include <stdio.h>
void main(){
    int a = 12;
    int b = 14;
    /*
    syntax:
    if(condition){
        // if the given condition is true, this block will get executed
    }else{
        // if the given condition is false, this block will get executed
    }
    */
   // if you have only two conditions like below use if else
   if( a == b ){
    printf("both numbers are equal");
   }else{
    printf("numbers are not equal");
   }

   // if more then two conditions are avilable add else if
   if( a > b){
    printf("a is bigger");
   }else if( b > a){
    printf("b is bigger");
   }else{
    printf("both are equal");
   }

} 