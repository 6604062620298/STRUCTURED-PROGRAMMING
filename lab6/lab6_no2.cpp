#include<stdio.h>
int main(){
    int row,col,input;
    int a[100][100];
    scanf("%d %d", &row, &col);

    for(int i = 0; i<row;i++){
        for(int j = 0; j<col; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0;i<row;i++){
        for(int j =0;j<col;j++){
            printf("%d ", a[i][j]+1);
        }
        printf("\n");
    }
}
                