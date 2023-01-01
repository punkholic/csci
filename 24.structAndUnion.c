#include <stdio.h>
#include <string.h>
void main(){
    /*
    in arrays we can store same kind of datatypes in a single variable
    but array lacks the ability to store multi datatypes in a single variable

    To do so, c provides something known as struct and union.

    the syntax of struct:
    struct structureName{
        //datatypes
    };
    */
    struct student{
        int rollNo;
        char name[100];
        char class[100];
    };
    /*
    after creating a structer we can create it's variable as :
    struct structureName variableName;
    */
    struct student std;
    // we can access each elements inside structure with dot(.)
    std.rollNo = 12;
    strcpy(std.class, "bba");
    strcpy(std.name, "ram");

    // we can process each element as normal datatypes, so to print everything 
    // i'll write everything inside printf
    printf("printing structure:\n");

    printf("roll no = %d\nclass=%s\nname=%s\n", std.rollNo, std.class, std.name);
    /*
    structure allocates all variables inside different memory location.
    because of this we can use all datas at a time which is stored in different location inside memory

    we have union which is similer like structure but it stores everything inside same memory
    location, because of this we can store use a single element at a time,
    if we stored all values at a time the memory will get replaced with the latest value and only
    that value will be stored example:
    */

    union student1{
        int rollNo;
        char name[100];
        char class[100];
    };

    union student1 std1;

    std1.rollNo = 12;
    strcpy(std1.class, "bba");
    strcpy(std1.name, "ram");

    printf("printing union:\n");
    printf("roll no = %d\nclass=%s\nname=%s\n", std1.rollNo, std1.class, std1.name);
    /*
    like other datatypes (int) we dont need to write struct infront of it like:
    struct int a = 12; //invalid
    int a = 12; // valid

    to make our own kind of datatypes we can use typedef keyword with structure or union like:
    */
    typedef struct student2{
        int rollNo;
        char name[100];
        char class[100];
    } myDataType;


    // after doing so we can use myDataType as we use int
    myDataType std3;
     std3.rollNo = 12;
    strcpy(std3.class, "bba");
    strcpy(std3.name, "ram");
    printf("example of my own datatype:\n");
    printf("roll no = %d\nclass=%s\nname=%s\n", std3.rollNo, std3.class, std3.name);
}