#include <stdio.h>
void main(){

    /*
        when we call a person it is easier to call them with name instead of their face structure
        likewise it is easier to read variable name instead of values like
        int a = 4342343;
        where a is the variable name.

        so to store a value we need to follow following syntax:
        datatype variable_name = value;

        example: int a = 2;
        here int is a datatype, datatype can hold a specific type of value.
        whole numbers like 12,34 which doesn't have decimal point (int) datatype is used

        for characters( single letter of word, example 'a') char datatype is used
        for values with floating points float and double is used

        every datatypes has a storage capacity
        we have two datatypes to store decimal points because float can store 4 bytes values but double can 
        store 8 bytes

        to print every datatypes we need to give specifier 
        char -> %c
        float -> %f
        int -> %d
        double -> %lf
    
    */
    int a = 12;
    char b = 'a';
    float c = 12.33;
    double d = 43.21;
    printf("%d %c %f %lf", a, b, c, d);
}