#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int approved_nohelp = 0;
    int notapproved_help = 0;

    for (int i = 0; i < n; i++) {
        int year;
        double grade;
        char help;

        scanf("%d %lf %c", &year, &grade, &help);

        int approved = 0;

        // เงื่อนไขได้ทุน
        if (grade >= 3.0) approved = 1;
        else if (year >= 2 && grade >= 2.5 && help == 'Y') approved = 1;

        // แสดงผล
        if (approved) {
            printf("approved\n");
        } else {
            if (grade < 2.5) {
                printf("not approved:grade < 2.50\n");
            } else if (year < 2) {
                printf("not approved:year < 2\n");
            } else if (help == 'N') {
                printf("not approved:no help\n");
            } else {
                printf("not approved\n");
            }
        }

        // นับสถิติ
        if (approved && help == 'N') {
            approved_nohelp++;
        }
        if (!approved && help == 'Y') {
            notapproved_help++;
        }
    }

    printf("%d\n", approved_nohelp);
    printf("%d", notapproved_help); // ← ❗ ไม่มี \n ปิดท้าย (สำคัญ)

    return 0;
}
