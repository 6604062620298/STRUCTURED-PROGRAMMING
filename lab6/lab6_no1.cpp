#include<stdio.h>
int main(){
    int n = 5;
    int m = 6;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i % 2 == 0){
                printf("5");
            }else{
                printf("0");
            }
        }
        printf("\n");
    }
}