#include <stdio.h>

int main(void) {
    int num;
    int lineCount = 0;

    printf("Enter an integer between 1 and 100: ");
    scanf("%d", &num);

    if (num > 100) num = 100;
    if (num < 1) return 0;

    if (num % 2 != 0) num--;

    while (num > 0) {
        if (lineCount == 10) {
            printf("\n");
            lineCount = 0;
        }

        printf("%4d", num); 
        lineCount++;

        num -= 2;          
    }

    printf("\n");
    return 0;
}
