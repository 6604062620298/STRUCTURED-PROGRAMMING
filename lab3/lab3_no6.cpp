#include <stdio.h>

int main() {

    int score;
    scanf("%d", &score);

    if(score < 68){
        if(score < 55){
            printf("f\n");
        }else{
            printf("d\n");
        }
    }else if(score < 75){
        printf("c\n");
    }else if(score < 85){
        printf("b\n");
    }else{
        printf("a\n");
    }

    return 0;
}