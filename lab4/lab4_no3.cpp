#include <stdio.h>

int main(){

    for(;;){
        int num;
        scanf("%d", &num);
        if(num == 0){
            break;
        }
        for(int i = num; i > 0; i/= 10){
            printf("%d\n", i % 10);
        }
    }

    return 0;
}