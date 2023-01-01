#include <stdio.h>
#include <string.h>

void main(){
    char test[] = "mom";
    int length = strlen(test);
    int isPalindrome = 1;
    int half = length/2;
    for(int i=0;i<half;i++){
        if(test[i] != test[length-1-i]){
            isPalindrome = 0;
        }
    }
    if(isPalindrome){
        printf("yes");
    }else{
        printf("no");
    }

}

