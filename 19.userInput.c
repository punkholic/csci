#include <stdio.h>
void main(){
    /*
    to get user input c gives a function named scanf
    to input specific datatype we need to pass it's specifier
    for example to get input of int we can write code as follows:
    */
    int a;
    // this line shows users what they should do
    printf("enter int number:"); 
    scanf("%d", &a);
    
    printf("int input value = %d\n", a);

   // just like this we can input other datatypes values as well
    float decimalPoint;
    printf("Enter floating point value:");
    scanf("%f", &decimalPoint);
    printf("float input value = %f\n", decimalPoint);

    //to input values inside specific array index:
    int newArray[3];
    printf("Enter value of index 0 for newArray:");
    scanf("%d", newArray[0]);
    printf("newArray[0] inputted value= %d\n", newArray[0]);
    // you  can follow same structure for other datatypes arrays


}