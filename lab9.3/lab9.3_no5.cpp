#include<stdio.h>
#include<string.h>
#define n 50
int main(){
    char text[n];
    for(int i = 0; i < 5; i++){
        printf("Enter input: ");
        fgets(text, n, stdin);

        int size = strlen(text);
        int number = 0;
        for(int j = 0; j < size; j++){
            if(text[j] >= '0' && text[j] <= '9'){
                number += text[j] - '0';
            }  
        }
        printf("Sum of digit char: ");
        printf("%d\n",number);
    }
}