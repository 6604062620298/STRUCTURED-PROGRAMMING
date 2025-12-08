#include <stdio.h>

int main(void) {
    double p1, p2, p3;
    double sum2, sum3;
    const double VAT = 1.07;

    // 1) ชิ้นที่ 1
    scanf("%lf", &p1);
    printf("%.2f\n", p1 * 0.95 * VAT);        // โปร A: 1 ชิ้น ลด 5% + VAT

    // 2) ชิ้นที่ 2
    scanf("%lf", &p2);
    sum2 = p1 + p2;
    printf("%.2f\n", sum2 * 0.85 * VAT);      // โปร B: 2 ชิ้น ลด 15% + VAT

    // 3) ชิ้นที่ 3
    scanf("%lf", &p3);
    sum3 = sum2 + p3;
    printf("%.2f\n", sum3 * 0.70 * VAT);      // โปร C: 3 ชิ้น ลด 30% + VAT

    return 0;
}
