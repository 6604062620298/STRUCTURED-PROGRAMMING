#include<stdio.h>
int main(){
    int score;
    while(true){
        scanf("%d", &score);
        if(score == -1){
            break;
        }
        char grade;
        if (score >= 85) grade = 'A';
        else if (score >= 75) grade = 'B';
        else if (score >= 65) grade = 'C';
        else if (score >= 50) grade = 'D';
        else grade = 'F';

        printf("%d(%c)\n", score, grade);
    }
}