#include <stdio.h>

int main() {
    int row, col;
    int a[105][105];

    scanf("%d %d", &row, &col);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < row; i++) {
        int sumRow = 0;
        for (int j = 0; j < col; j++) {
            sumRow += a[i][j];
        }
        a[i][col] = sumRow;   
    }
    col++;

    for (int j = 0; j < col; j++) {
        int sumCol = 0;
        for (int i = 0; i < row; i++) {
            sumCol += a[i][j];
        }
        a[row][j] = sumCol;
    }
    row++;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
