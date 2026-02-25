#include<stdio.h>
void bubblesort(int socre[], int size);
int main(){
    int size = 4;
    int score[size] = {78, 80, 90, 91};
    // int best[3];
    bubblesort(score,size);
    printf("Best 3 scores: ");
    for(int i = 1; i < size; i++){
        printf("%d ",score[i]);
    }
}

void bubblesort(int socre[], int size){
    int temp;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - 1 - i; j++){
            if(socre[j] > socre[j+1]){  
                temp = socre[i];
                socre[j] = socre[j+1];
                socre[j+1] = temp;
            }
        }
    }
}