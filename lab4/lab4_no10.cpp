#include <stdio.h>

int main() {
    int score;
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;

    while (1) {                      // หรือ while(1) แทน while(true)
        scanf("%d", &score);
        if (score == -1) {
            break;                   // เจอ -1 ก็หยุดรับ
        }

        char grade;
        if (score >= 85)      grade = 'A';
        else if (score >= 75) grade = 'B';
        else if (score >= 65) grade = 'C';
        else if (score >= 50) grade = 'D';
        else                  grade = 'F';

        printf("%d(%c)\n", score, grade);

        // นับจำนวนคนตามเกรด
        if (grade == 'A')      countA++;
        else if (grade == 'B') countB++;
        else if (grade == 'C') countC++;
        else if (grade == 'D') countD++;
        else                   countF++;
    }

    // สรุปผลตามรูป
    printf("A(%d)\n", countA);
    printf("B(%d)\n", countB);
    printf("C(%d)\n", countC);
    printf("D(%d)\n", countD);
    printf("F(%d)\n", countF);

    return 0;
}
