#include<stdio.h>
#include<string>
int main(){
    int k;
    scanf("%d", &k);

    char key[100];
    char ans[100];
    scanf("%s", key);
    
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%s", ans);

        int score = 0;
        for(int j = 0; j < k; j++){
            if(ans[j] == key[j]){
                score++;
            }
        }
        printf("std %d => %d\n", i, score);
    }
    return(0);
}