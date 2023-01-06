#include <stdio.h>
#include <string.h>

void main(){
    char name2[100];
    printf("enter word to count vowels:");
    scanf("%s", name2);

    int length = strlen(name2);
    int count = 0;

    for(int i=0;i<length; i++){
        if(name2[i] == 'a' || name2[i] == 'e' || name2[i] == 'i' || name2[i] == 'o' || name2[i] == 'u'){
            count++;
        }
    }
    printf("%d\n", count);

}
