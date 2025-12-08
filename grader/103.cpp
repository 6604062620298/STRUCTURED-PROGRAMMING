#include <stdio.h>

int main(void) {
    int hour, minutes;
    if (scanf("%d:%d", &hour, &minutes) != 2) return 0;

    const char *check = ((hour == 7 && minutes > 10) || (hour == 9 && minutes <= 30) || (hour > 7 && hour < 9)) ? "Y" : "N";
    printf("%s\n", check);

    return 0;
}