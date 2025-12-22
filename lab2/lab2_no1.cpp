#include<stdio.h>

int main(){

    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    int max = (a>b)?a:b;
    int second_max = (a>b)?b:a; 

    second_max = (c > max) ? max : ( c > second_max ? c : second_max );
    max = (c > max) ? c : max;

    second_max = (d > max) ? max : ( d > second_max ? d : second_max );
    max = (d > max) ? d : max;

    printf("%d\n",second_max);
    return 0;
}