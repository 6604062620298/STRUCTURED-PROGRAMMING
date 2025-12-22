#include<stdio.h>

int main(){
    int hours,rate;
    scanf("%d %d", &hours,&rate);

    double income = hours * rate;
    double tax = 0.0;

    if(income < 1000){
        tax = 0.0;
    }else if( income <= 10000){
        tax = 0.0;
    }else if (income <= 20000) {
        tax = (income - 10000.0) * 0.08;
    } else {
        tax = (10000.0 * 0.08) + ((income - 20000.0) * 0.10);
    }

    double net = income - tax;
    printf("%.1f\n", net);

    return 0;
}