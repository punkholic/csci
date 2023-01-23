#include <stdio.h>

int sum(int, int);

void main(){
    printf("%d", sum(1,5));
}


int sum(int a, int b){
    
    int c = a + b;
    return c;
}


