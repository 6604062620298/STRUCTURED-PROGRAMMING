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
    int min = a[0][0];
    for(int i=0;i<row;i++){
        for(int j =0;j<col;j++){
            if(a[i][j] < min){
                min = a[i][j];
            }
        }
    }
    printf("%d ", min);
}
                