#include<stdio.h>
void addone(int number[], int add[], int sizeNum);
void addtwo(int number[], int pos[], int x, int sizeNum, int sizePos);
void addthree(int number[], int pos[][2], int sizePos);
int findMax(int num[],int size);
void printAr(int myAr[], int Arrsize);

int main(){
    int size = 5;
    int sizepos = 3;
    int number[size] = {20,50,100,199,9};
    int add[3]  = {2,5,1};
    int pos[sizepos] = {1,3,5};
    int poss[][2] = {{1,5},
                    {2,3},
                    {4,7}};
    addone(number,add,size);
    addtwo(number,pos,5,size,sizepos);
    addthree(number,poss,3);
    int max = findMax(number,size);
    printAr(number,size);
}
void addone(int number[], int add[], int sizeNum){
    for(int i = 0; i < sizeNum; i++){
        int temp = 0;
        temp = number[i] + add[i];
        number[i] = temp;
    }
}
void addtwo(int number[], int pos[], int x, int sizeNum, int sizePos){
    for(int i = 0; i < sizePos; i++){
        int index = pos[i];
        if(index < sizeNum){
            number[index] += x;
        }
    }
}

void addthree(int number[], int pos[][2], int sizePos){
    for(int i = 0; i < sizePos; i++){
        int index = pos[i][0] - 1;
        int value = pos[i][1];
        number[index] += value;
    }
}

int findMax(int num[],int size){
    int i = 0;
    int max = num[i];
    for(i = 0; i < size; i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    return max;
}

void printAr(int myAr[], int Arrsize){
    for(int i = 0; i < Arrsize; i++){
        printf("%d ",myAr[i]);
    }
}