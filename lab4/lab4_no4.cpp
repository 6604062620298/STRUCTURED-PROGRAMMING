#include <stdio.h>
int main (void){
    int j = 1;
    for (int i = 1; i <= 3; i++) {
        printf("Row %d: ", i);
    while (j < 6){
        printf("%4d", j);
        j++;
    }
    printf("\n");
    j = 1;
    }
    return 0;
} 