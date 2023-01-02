#include <stdio.h>
#include <string.h>

//  A datafile “patient.txt” contain name, disease , age and bed number of few patient. Write a C program to read and display only records of patients suffering from “COVID”.
void main(){
    struct patient{
        char name[100];
        char disease[100];
        int age;
        int bedNumber;
    };
    struct patient p;

    FILE *filePtr = fopen("data", "r");
    for(int i=0; i<4; i++){
        fscanf(filePtr, "%s %s %d %d", p.name, p.disease, &p.age, &p.bedNumber);
        if(strcmp(p.disease, "covid") == 0){
            printf("name=%s\ndisease=%s\nage=%d\nbedNumber=%d\n", p.name, p.disease, p.age, p.bedNumber);
            printf("---------------------------------\n");

        }
    }

    // fclose(filePtr);
    
}