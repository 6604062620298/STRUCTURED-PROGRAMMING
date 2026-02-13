#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int randomnumber();
int check(int a[][20], int m, int n, int value);

int main(){
    int m,n;
    int a[20][20];
    scanf("%d %d", &m, &n);
    srand(time(NULL));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            int num;
            do{
                num = randomnumber();
            }while(check(a,m,n,num));
            a[i][j] = num;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%4d ", a[i][j]);
        }
        printf("\n");
    }
}

int check(int a[][20], int m, int n, int value){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == value){
                return 1;
            }
        }
    }
    return 0;
}

int randomnumber(){
    int random = (rand() % 101) + 100;
    return random;
}