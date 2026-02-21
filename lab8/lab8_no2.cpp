#include <stdio.h>
int checkscore(char std[],char keys[]);
int checkClause(char std[][10],char keys[]);
int main() {
    int i,j;
    char ans[8][10]={
            {'A','B','A','C','C','D','E','E','A','D'},//7 row
            {'D','B','A','B','C','A','E','E','A','D'},//6 row
            {'E','D','D','A','C','B','E','E','A','D'},//5 row
            {'C','B','A','E','D','C','E','E','A','D'},//4 row
            {'A','B','D','C','C','D','E','E','A','D'},//8 row
            {'B','B','E','C','C','D','E','E','A','D'},//7
            {'B','B','A','C','C','D','E','E','A','D'},//7
            {'E','B','E','C','C','D','E','E','A','D'}};//7
        // col   col  col
    char keys[10]={'D','B','D','C','C','D','A','E','A','D'};
    for(int i=0;i<8;i++){
        printf("std %d => %d\n", (i+1), checkscore(ans[i],keys));
	}
    printf("answered question 1 correctly? = %d \n", checkClause(ans,keys));
}
int checkscore(char std[],char keys[]){
    int score = 0   ;
    for(int i = 0; i < 10; i++){
        if(std[i] == keys[i]){
            score++;
        }
    }
    return score;
}   
int checkClause(char std[][10],char keys[]){
    int temp = 0;
    for(int i = 0; i < 8; i++){
        if(std[i][0] == keys[0]){
            temp++;
        }
    }
    return temp;
}