#include<stdio.h>

int main(){
    int n;
    int a = 3;
    scanf("%d",&n);
    for(int i = 1; i < n; i++){
        a = a * 2 + 2;
    }
    printf("%d",a);
}