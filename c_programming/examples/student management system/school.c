#include <stdio.h>
#include <stdlib.h>
#include "studentFunction.h"
void feeOptions();

void main(){
    while(1){
        int choise = printChoise();
        switch(choise){
            case 1:{
                addStudent();
                break;
            }
            case 2:{
                searchStudent();
                break;
            }
            case 3:{
                printAllStudent();
                break;
            }
            case 4:{
                writeStudentData();
                break;
            }
            case 5:{
                readStudentData();
                break;
            }
            case 6:{
                exit(0);
                break;
            }
        }
    }


    
}


