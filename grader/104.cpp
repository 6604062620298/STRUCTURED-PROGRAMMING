#include<stdio.h>

int main(){

    int a,b,c,d;
    scanf("%d/%d/%d/%d",&a,&b,&c,&d);

    int max = (a>b) ?a:b;
    max = (c>max) ?c:max;
    max = (d>max) ?d:max;
    printf("%d\n",max);
    return 0;
}