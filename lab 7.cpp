#include <stdio.h>

void printAr(int myar[], int arrsize);  // prototype

int main() {
    int number[3] = {210, 50, 100};
    int score[10] = {1,2,3,4,5,6,7,8,9,10};
    int max;

    printAr(number, 3);
    printAr(score, 10);

    // ?? max ?? array number
    max = number[0];
    for (int i = 1; i < 3; i++) {
        if (number[i] > max) {
            max = number[i];
        }
    }

    printf("Max value = %d\n", max);

    return 0;
}

void printAr(int myar[], int arrsize) {
    for (int i = 0; i < arrsize; i++) {
        printf("%d ", myar[i]);
    }
    printf("\n");
}

