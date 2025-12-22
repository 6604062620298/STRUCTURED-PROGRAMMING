#include <stdio.h>

int main() {
    int years;
    float grade;
    char help;

    scanf("%d %f %c", &years, &grade, &help);

    if (help != 'Y') {
        printf("not approved\n");
        printf("no help\n");
    }
    else if (grade >= 3.0) {
        printf("approved\n");
    }
    else if (years < 2) {
        printf("not approved\n");
        printf("year < 2\n");
    }
    else if (grade < 2.5) {
        printf("not approved\n");
        printf("grade < 2.50\n");
    }
    else {
        printf("approved\n");
    }

    return 0;
}
