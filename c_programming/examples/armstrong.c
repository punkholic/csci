#include <stdio.h>
int aaa(int a, int b);
int numberLength(int a);
void main(){

    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    int temp = a;
    int length = numberLength(a);
    int answer = 0;
    while(a != 0){
        int reminder = a % 10;
        answer = answer + aaa(reminder, length);
        a = a / 10;
    }
    if(temp == answer){
        printf("number is armstrong");
    }else{
        printf("number is not armstrong");
    }
}
int aaa(int a, int b){
    int result = 1;
    for(int i=0; i<b; i++){
        result = result *a ;
    }
    return result;
}
int numberLength(int a){
    int counter = 0;
    while(a != 0){
        counter++;
        a = a / 10;
    }
    return counter;
}