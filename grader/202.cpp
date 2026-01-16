#include<stdio.h>

int main(){
    int h,m;
    while(1){
        scanf("%d %d", &h, &m);

        if(h == 0 && m == 0){
            break;
        }

        for(int i = 0; i < h; i++){
            for(int j = 0; j < m; j++){
                printf("* ");
            }
            printf("\n");
        }
        printf("\n");
    }
    return(0);
}