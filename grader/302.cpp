#include<stdio.h>

int main(){
    int n,input;
    int arr[100];

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &input);
        arr[i] = input; 
    }

    printf("a) ");
    for(int i = 0; i < 4; i++){
        printf("%d ", arr[i]);
    }printf("\n");

    printf("b) ");
    int b = arr[2];
    for(int i = 0; i < n; i++){
        if(arr[i] > b){
            printf("%d ", arr[i]);
        }
    }printf("\n");

    printf("c) ");
    int w = arr[2];
    for(int i = 0; i < n; i++){
        if(arr[i] > w){
            printf("%d ", i);
        }
    }printf("\n");

    printf("d) ");
    int v = arr[2] + arr[3];
    arr[n] = v;
    n++;
    for(int i = 0; i < n; i++){
        printf("%d " , arr[i]);
    }printf("\n");

    printf("e) ");
    int q = arr[4] - arr[2];
    arr[3] = q;
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }printf("\n");

    printf("f) ");
    if(arr[1] > arr[5]){
        printf("2");
    }if(arr[5] > arr[1]){
        printf("6");
    }printf("\n");

    printf("g) ");
    int temp = arr[1];
    arr[1] = arr[n-1];
    arr[n-1] = temp;
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }printf("\n");

    printf("h) ");
    int neww[100];
    int newn = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            neww[newn] = arr[i];
            newn++;
        }
    }
    printf("new=[");
    for(int i = 0; i < newn; i++){
        printf("%d", neww[i]);
        if(i < newn-1) printf(" ");
    }printf("]");

    return(0);
}