#include<stdio.h>
void swapValue(int *a, int *b, int *c);
void swapArray(int *a, int *b, int size); 
int main() {
    int a = 1, b = 2, c = 3;
    int a1[] = {1, 2, 3};
    int b1[] = {4, 5, 6};
    printf("Before swap function: a=%d, b=%d, c=%d\n", a, b, c);
    swapValue( &a , &b , &c);
    printf("After swap function: a=%d, b=%d, c=%d\n", a, b, c);

    printf("---------------------------------------\n");

    printf("Before Arr swap function ");
    for(int i = 0; i < 3; i++){
        printf("%d ",a1[i]);
    }
    printf("\n");
    swapArray(a1, b1, 3);

    printf("After Arr swap function ");
    for(int i = 0; i < 3; i++){
        printf("%d ",a1[i]);
    }
}

void swapValue(int *a, int *b, int *c){
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

void swapArray(int *a, int *b, int size){
    for(int i = 0; i < size; i++){
        int temp = *(a+i);
        *(a+i) = *(b+i);
        *(b+i) = temp;
    }
}