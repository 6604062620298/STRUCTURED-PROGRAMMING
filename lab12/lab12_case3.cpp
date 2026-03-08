#include <stdio.h>
int fac(int);
int fib(int);

int main() {
	printf("%d\n", fac(5));
	printf("%d\n", fib(7));
}
int fac(int n){
    if(n == 0 || n == 1){
        return n;
    }else{
        return n * fac(n-1);
    }
    
}
int fib(int n){
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}