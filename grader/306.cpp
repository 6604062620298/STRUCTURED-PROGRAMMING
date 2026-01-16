#include<stdio.h>
int main(){
    int z = 20;
    char key[100];
    char ans[100];
    scanf("%s", key);
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%s", ans);
        int score = 0;
        for(int j = 0; j < z; j++){
            if(ans[j] == key[j]){
                if(j < 15){
                    score += 1;
                }else if(j < 18){
                    score += 2;
                }else{
                    score += 3;
                }
            }
            
        }
        printf("std %d => %d\n", i, score);
    }

    return(0);
}