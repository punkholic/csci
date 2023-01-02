#include<stdio.h>
void main(){
    //array is pointer in itself example:
   int newArray[] = {1,2,3};
   printf("1st index array memory address = %p\n", newArray);

    /*
        while printing array with %p it gives address of first value address
        to print 2nd index value memory address we can do:
    */
   printf("2nd index array memory address = %p\n", newArray+1);
   printf("3rd index array memory address = %p\n", newArray+2);
   /*
    if array is a pointer on itself, a pointer can print values of the memory address
    when star(*) is given infront of the pointer, you can see this in 20.pointer.c
    so, to print a specific value of array with the help of pointer we can do:
   */
    printf("1st index array value = %d\n", *newArray);
    printf("2nd index array value = %d\n", *(newArray+1));
    printf("3rd index array value = %d\n", *(newArray+2));

    /*
    note: while using scanf() we don't pass & infront of variable like:
    char name[100];
    scanf("%s", name);
    because scanf requires memory address of variable, while using int a; we pass &a in scanf
    but because array is pointer we don't need to pass &
    */
   
}