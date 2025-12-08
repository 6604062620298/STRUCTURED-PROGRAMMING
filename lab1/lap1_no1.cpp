#include <stdio.h>

int main(){
    int hour, minutes, seconds;
    scanf("%d:%d:%d", &hour, &minutes, &seconds);

    printf("hour: %d\n", hour);
    printf("minute: %d\n", minutes);
    printf("second: %d\n", seconds);

    return 0;
}