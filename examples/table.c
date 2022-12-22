#include <stdio.h>
void main(){
    int a, b;
    printf("enter number of table you want:");
    scanf("%d", &a);
    printf("enter no of iteration:");
    scanf("%d", &b);
    for(int i=1; i<(b+1);i++){
        printf("%d * %d = %d\n", a, i, a*i);
    }
}