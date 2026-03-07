#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int score;
} Student;

void addStudent(Student *record, char *name, int score);

int main() {
    Student stuRecord[20];
    int numStudent, i;

    addStudent(&stuRecord[0], "Sandking", 65);
    addStudent(&stuRecord[1], "Anti-mage", 72);
    addStudent(&stuRecord[2], "Sniper", 40);
    addStudent(&stuRecord[3], "Tiny", 93); 
    addStudent(&stuRecord[4], "Axe", 60);

    numStudent = 5;

    for(i = 0; i < numStudent; i++) {
        printf("Name: %s\n", stuRecord[i].name);
        printf("Score: %d\n", stuRecord[i].score);
        printf("------------------\n");
    }

    return 0;
}

void addStudent(Student *record, char *name, int score) {
    strcpy(record->name, name); 
    record->score = score;
}