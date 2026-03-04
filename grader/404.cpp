#include<stdio.h>
int check(int A[], int B[], int length);
void printmember(int index);
int main(){
    int length;
    scanf("%d",&length);

    int A[length];
    int B[length];
    for(int i = 0; i < length; i++){
        scanf("%d", &A[i]);
    }
        for(int i = 0; i < length; i++){
        scanf("%d", &B[i]);
    }
    int show = check(A,B,length);
    printf("%d\n",show);
    for(int i = 0; i < length; i++){
        if(A[i] > B[i]){
            printmember(i+1);
        }
    }
}
int check(int A[], int B[], int length){
    int count = 0;
    for(int i = 0; i < length; i++){
        if(A[i] > B[i]){
            count++;
        }
    }
    return count;
}
void printmember(int index){
    printf("%d ",index);
}