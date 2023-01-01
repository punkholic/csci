#include <stdio.h>
#include "csci.h"

void main(){
    /*
    keeping functions and code in a same file makes code bulky, so to make it more tidy
    we can make header files and keep our function defination inside it
    we can call it after including the header file

    above you can see i've included the header file csci.h, as you can notice the csci.h header file
    was included using double quote(").
    we use double quote while including header files which are inside same directory as the code
    
    but if we want to include the system header file(header file provided by compiler) we use <> this symbol

    i've kept functions named printData, sum inside that header file so now i can use those functions here
    */

   printData("Hello World\n");
}