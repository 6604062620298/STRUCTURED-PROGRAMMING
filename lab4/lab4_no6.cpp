#include <stdio.h>

int main() {
    
    int num, time;
    scanf("%d %d", &num, &time);    
    for (int i = 0; i < time; i++){
        for(int j = 0; j < time; j++){
            printf("%d", num);
        }
        printf("\n");
    }

    return 0;
}