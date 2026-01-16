#include<stdio.h>
int main(){
    int n,num;
    int arr[100];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d",&num);
        arr[i] = num;
    }
    for(int i = n-1; i >= 0; i--){
        printf("%d ",arr[i]);
    }
}