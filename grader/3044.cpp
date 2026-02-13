#include<stdio.h>
int main(){
    int row,col;
    int a[100][100];
    scanf("%d %d",&row, &col);
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int i = 0; i < row; i++){
        int sumrow = 0;
        for(int j = 0; j < col; j++){
            sumrow += a[i][j];
        }
        a[i][col] = sumrow;
    }
    col++;

    for(int i = 0; i < col; i++){
        int sumcol = 0;
        for(int j = 0; j < row; j++){
            sumcol += a[i][j];
        }
        a[row][i] = sumcol;
    }
    row++;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}