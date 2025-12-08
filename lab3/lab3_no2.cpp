#include<stdio.h>

int main(){

    int score;
    scanf("%d",&score);
    int need = 40 - score;

    if(score >= 40){
        printf("PASS\n");
    }
    else{
        if(score >= 30 && score <= 39){
            printf("You can see me ?");
        }else{
            printf("FALSE %d\n", need);
        }
    }
}