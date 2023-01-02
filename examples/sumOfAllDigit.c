#include <stdio.h>

void main(){
    int a = 123;
    int sum = 0;

    while(a != 0){

        int reminder = a % 10;
        sum = sum + reminder;
        a = a / 10;
    }
    printf("sum = %d", sum);
}

