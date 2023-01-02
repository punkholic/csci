#include <stdio.h>
void main(){
    int a = 11;
    int b = 2;
    int c = a - b;
    int d = a + b;
    int e = a / b;
    int f = a * b;
    int g = a % b; // modules returns reminder after dividing the given number
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    printf("c=%d\n", c);
    printf("d=%d\n", d);
    printf("e=%d\n", e);
    printf("f=%d\n", f);
    printf("g=%d\n", g);
    /* 
    there are two types of increment and decrement, post and pre
    post increment and decrement updates values after running the current line
    so the value wont change on the used line
    below the value of a++ will be same and won't be incremented on that line
    but it will increase after running the line
    */
    printf("%d", a++);
    printf("%d", a--);
    /*
    pre increment and decrement changes the value on the used line
    */
    printf("%d", ++a);
    printf("%d", --a);
}