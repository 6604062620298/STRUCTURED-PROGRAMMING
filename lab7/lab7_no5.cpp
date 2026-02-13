#include<stdio.h>
long convert(long h, long m, long s); 

int main(){
    long hour,min,second;
    scanf("%ld %ld %ld", &hour, &min, &second);
    long sum = convert(hour,min,second);
    printf("%ld", sum);
}
long convert(long h, long m, long s){
    long s = s + (m*60) + (h*3600);
    return s;
}