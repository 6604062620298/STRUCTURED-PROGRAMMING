#include <stdio.h>

int main() {

    int score;
    int need = 0;
    scanf("%d", &score);

    if (score < 0) {
        printf("error score\n");
        return 0;
    } else if (score > 100) {
        printf("error score\n");
        return 0;
    }

    if(score < 68){
        if(score < 55){
            printf("f\n");
        }else{
            printf("d\n");
        }
    }else if(score < 75){
        need = 75 - score;
        printf("c %d\n", need);
    }else if(score < 85){
        printf("b\n");
    }else{
        printf("a\n");
    }

    return 0;
}
