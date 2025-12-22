#include <stdio.h>

int main() {
    
    int num, time;
    scanf("%d %d", &num, &time);    
    for (int i = 0; i < time; i++){
        printf("%d", num);
    }

    return 0;
}