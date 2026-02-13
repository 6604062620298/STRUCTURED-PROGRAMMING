#include<stdio.h>
void printHead(int w);
void printBody(int w, int h);

int main() {
	int width,height;
	scanf("%d %d",&width, &height);
	printHead(width);printf("\n");
	printBody(width,height);printf("\n");
	printHead(width);
}

void printHead(int w){
    for(int i = 1; i <= w; i++){
        printf("*");
    }
};
void printBody(int w, int h){
    for(int i = 1; i <= w; i++){
        if(i == 1 || i == w){
            printf("*");
        }else{
            printf(" ");
        }
    }
}