#include <stdio.h>
#include <string.h>

typedef struct StudentStructure{
        int rollNo;
        char name[100];
        int feePaid;
        int classNumber;
} Student;


Student allStudent[100];

int studentCounter = 0;
int printChoise(){
  
    int choise;
    printf("\n1.)Add Student\n2.)Search Student\n3.)Print All Student\n4.)Store Student\n5.)Load Student\n6.)Exit\nChoose:");
    scanf("%d", &choise);
    return choise;
}

void printStudent(int index){
    printf("\n-------------------------\n");

    printf("Name = %s\nRoll No = %d\nclass=%d", allStudent[index].name, 
                allStudent[index].rollNo, allStudent[index].classNumber);
    
    printf("\n-------------------------\n");
}

void searchStudent(){
    int found = 0;

    char searchingName[100];
    printf("enter name to search:");
    scanf("%s", searchingName);
    for(int i=0; i<studentCounter; i++){
        if(strcmp(searchingName, allStudent[i].name) == 0){
            printStudent(i);
            found = 1;
        }
    }

    if(found == 0){
        printf("\nstudent with name %s not found!!\n", searchingName);
    }
}

void printAllStudent(){
    if(studentCounter == 0){
        printf("Add Student First\n");
    }
    for(int i=0;i<studentCounter; i++){
        printStudent(i);
    }
}

void addStudent(){
    printf("enter student name:");
    scanf("%s", allStudent[studentCounter].name);
    printf("enter student roll no:");
    scanf("%d", &allStudent[studentCounter].rollNo);
    printf("enter student class:");
    scanf("%d", &allStudent[studentCounter].classNumber);
    // studentCounter = studentCounter + 1;
    // studentCounter += 1;
    studentCounter++;
}
void readStudentData(){
    FILE *ptr = fopen("student.dat", "r");
    FILE *studentCount = fopen("studentCount.data", "r");
    fscanf(studentCount, "%d", &studentCounter);
    fread(&allStudent, sizeof(Student), studentCounter, ptr);
    fclose(ptr);

}

void writeStudentData(){
    FILE *ptr = fopen("student.dat", "w");
    FILE *studentCount = fopen("studentCount.data", "w");
    fwrite(&allStudent, sizeof(Student), studentCounter, ptr);

    fprintf(studentCount, "%d", studentCounter);
    fclose(studentCount);
    fclose(ptr);
}