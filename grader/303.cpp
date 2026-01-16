#include<stdio.h>
int main(){
    int row,col,input,find;
    int a[100][100];
    scanf("%d %d %d", &row,&col,&find);

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("a) ");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(i == row-1){
                printf("%d ",a[i][j]);
            }
        }
    }printf("\n");

    printf("b) ");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(i == i && j == 0){
                printf("%d ",a[i][j]);
            }
        }
    }printf("\n");

    printf("c) ");
    int amax = a[0][2];
    for(int i = 0;i<row; i++){
        for(int j = 0; j<col;j++){
            if(a[i][j] > amax){
                printf("%d ", a[i][j]);
            }
        }
    }printf("\n");

    printf("d) ");
    int a1max = a[0][2];
    for(int i = 0;i<row; i++){
        for(int j = 0; j<col;j++){
            if(a[i][j] > a1max){
                printf("%d,%d ", i, j);
            }
        }
    }printf("\n");

    printf("e) ");
    for(int i = 0;i<row; i++){
        a[i][col] = a[i][2]+a[i][3];
    }printf("\n");
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col+1; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("f) ");
    for(int i = 0; i<row;i++){
        int temp = a[i][1];
        a[i][1] = a[i][col];
        a[i][col] = temp;
    }printf("\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col+1; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("g) ");
    for(int j = 0; j < col+1; j++){
        int temp  = a[0][j];
        a[0][j] = a[row-1][j];
        a[row-1][j] = temp;
    }printf("\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col+1; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("h) ");
    int neww[100];
    int k = 0;
    for(int i = 0;i<row; i++){
        for(int j = 0; j<col+1;j++){
            if(a[i][j] % 2 == 0){
                neww[k] = a[i][j];
                k++;
            }
        }
    }
    printf("new=[");
    for(int i = 0; i < k; i++){
        printf("%d", neww[i]);
        if(i < k-1) printf(" ");
    }printf("]");

    printf("i) ");
}