#include<stdio.h>
int main(){
    char c1,c2;
    int row,col;
    scanf("%c %c %d %d",&c1 , &c2, &col,&row);

    for(int i = 0; i < row; i++){
        if(i % 2 == 0){
            for(int j = 0 ; j < col; j++){
                printf("%c", c1);
            }
            for(int j = 0 ; j < col; j++){
                printf("%c", c2);
            }
        }else{
            for(int j = 0 ; j < col; j++){
                printf("%c", c2);
            }
            for(int j = 0 ; j < col; j++){
                printf("%c", c1);
            }
        }
        printf("\n");
    }
}