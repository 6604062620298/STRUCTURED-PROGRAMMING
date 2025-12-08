#include <stdio.h>

int main(){
    int mid,final,q1,q2,lab,sit;
    mid = 75;
    final = 85;
    q1 = 40;
    q2 = 45;
    lab = 16;
    sit = 15;
    // char A = 'A';
    // char B = 'B';
    // char C = 'C';
    // printf("Animals List:\n");
    // printf("%10c-Ant\n%10c-Bird\n%10c-Cat \n", A,B,C);
    // printf("Enter your point in midterm and final: ");
    scanf("%d %d %d %d %d %d",&mid,&final,&q1,&q2,&lab,&sit);

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

    printf("%.8f\n", total_score);
    return 0;
    // int sum = (mid + final) / 2;
    // if(sum >= 80){
    //     printf("You get: A\n");
    // }
    // else if(sum >= 70 && sum < 80){
    //     printf("You get: B\n");
    // }
    // else if(sum >= 60 && sum < 70){
    //     printf("You get: C\n");
    // }
    // else{
    //     printf("You get: F\n");
    // }
    // printf("%d - your point in midterm \n%d - your point in final", mid,final);
    return 0;
}