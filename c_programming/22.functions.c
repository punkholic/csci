#include <stdio.h>

// this is function declaration
void functionName();
void sum(int a, int b);
int sum1(int a, int b);

void main(){
    // this is function call
    functionName();

    /*
    we cannot access variables from one function to another directly so we need to pass them with some functionality
    to pass values from main to function we need to pass parameters
    like in sum function we asked for two values a and b with datatype int, now we can pass those 2 values while calling function
    */
   sum(1,2);
   /*
   to get values from other functions to main we need to give return type:
    void functionName();
    here void is the return type, void means we dont need to return anything

    if we want to return any kind of value we need to give that datatype inplace of void
    example:
    int sum1(int a, int b);
    we put int inplace of void so it requires a integer to be returned
   */
  printf("function with return value = %d\n", sum1(1,2));
}
    // this is function defination

void sum(int a, int b){
    int c = a+b;
    printf("%d\n", c);
}
void functionName(){
    printf("Hello World\n");
}
int sum1(int a, int b){
    int c = a+b;
    return c;
}