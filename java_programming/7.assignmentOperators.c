#include <stdio.h>
void main(){
    int a = 10;
    a += 12; // this is same as a = a + 12, but in short form, same goes for following lines:
    printf("a=%d\n", a);
    a -= 12;
    printf("a=%d\n", a);
    a *= 12;
    printf("a=%d\n", a);
    a /= 12;
    printf("a=%d\n", a);
    a %= 12;
    printf("a=%d\n", a);
    a &= 12;
    printf("a=%d\n", a);
    a |= 12;
    printf("a=%d\n", a);
    a ^= 12;
    printf("a=%d\n", a);
    a >>= 12;
    printf("a=%d\n", a);
    a <<= 12;
    printf("a=%d\n", a);
}