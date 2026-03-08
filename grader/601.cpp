#include<stdio.h>

typedef struct {
    char name[16];
    char surname[20];
    int score[5];
    float stotal;
} Student;

void readStudentData(Student *); 
void printScoreI(Student[],int size, int i); 

int main(){
    int n,k;
    scanf("%d", &n);
    Student s[n];
    for(int i = 0; i < n; i++){
        readStudentData(&s[i]);
    }
    scanf("%d", &k);
    printScoreI(s,n,k);
}
void readStudentData(Student *s){
    scanf("%s %s", s->name, s->surname);
    s->stotal = 0;
    for(int i = 0; i < 5; i++){
        scanf("%d", &s->score[i]);
        s->stotal += s->score[i];
    }
}
void printScoreI(Student s[],int size, int i){
    for(int k = 0; k < size; k++){
        printf("%s %d\n",s[k].name, s[k].score[i-1]); 
    }
}