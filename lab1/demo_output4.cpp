#include <stdio.h>

int main(void) {
    int mid, final, q1, q2, lab, sit;
    
    scanf("%d %d %d %d %d %d", &mid, &final, &q1, &q2, &lab, &sit);

    double mid_weight = 30.0;
    double final_weight = 35.0;
    double q1_weight = 12.0;
    double q2_weight = 13.0;
    double lab_weight = 5.0;
    double sit_weight = 5.0;

    double mid_percent = (mid / 100.0);
    double final_percent = (final / 120.0);
    double q1_percent = (q1 / 60.0);
    double q2_percent = (q2 / 60.0);
    double lab_percent = (lab / 16.0);
    double sit_percent = (sit / 16.0);

    double mid_weighted = mid_percent * mid_weight;
    double final_weighted = final_percent * final_weight;
    double q1_weighted = q1_percent * q1_weight;
    double q2_weighted = q2_percent * q2_weight;
    double lab_weighted = lab_percent * lab_weight;
    double sit_weighted = sit_percent * sit_weight;
    double total_score = mid_weighted + final_weighted + q1_weighted + q2_weighted + lab_weighted + sit_weighted;

    printf("%6s%6d %s %.2f\n", "Mid=", mid, "=>", mid_weighted);
    printf("%6s%6d %s %.2f\n", "Final=", final, "=>", final_weighted);
    printf("%6s%6d %s %.2f\n", "Q1=", q1, "=>", q1_weighted);
    printf("%6s%6d %s %.2f\n", "Q2=", q2, "=>", q2_weighted);
    printf("%6s%6d %s %.2f\n", "Lab=", lab, "=>", lab_weighted);
    printf("%6s%6d %s %.2f\n", "Sit=", sit, "=>", sit_weighted);
    printf("******* %.8f *******\n", total_score);

    return 0;
}