#include<stdio.h>
int main() {
    int n,m;
    scanf("%d", &n);

    for(int k = 0; k < n; k++){
        scanf("%d", &m);
        for(int i = 0; i < m; i++){
            for(int j = 0; j < m; j++){
                if(i == 0 || i == m-1 || j ==0 || j == m-1){
                    printf(". ");
                }else{ 
                    printf("* ");
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return(0);
}