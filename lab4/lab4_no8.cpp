#include <stdio.h>

int main() {
    int time, score;
    scanf("%d", &time);

    for (int i = 0; i < time; i++) {
        scanf("%d", &score);

        if (score < 0 || score > 100) {
            printf("error score\n");
            return 0;
        }

        char grade;
        if (score >= 85) grade = 'A';
        else if (score >= 75) grade = 'B';
        else if (score >= 65) grade = 'C';
        else if (score >= 50) grade = 'D';
        else grade = 'F';

        printf("%d(%c)\n", score, grade);
    }

    return 0;
}
