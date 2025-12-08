#include <stdio.h>

int main() {
    double p1, p2, p3;
    double sum2, sum3;

    scanf("%lf", &p1);
    printf("%.2f\n", p1 * 0.95);

    scanf("%lf", &p2);
    sum2 = p1 + p2;
    printf("%.2f\n", sum2 * 0.85);

    scanf("%lf", &p3);
    sum3 = sum2 + p3;
    printf("%.2f\n", sum3 * 0.70);

    return 0;
}
