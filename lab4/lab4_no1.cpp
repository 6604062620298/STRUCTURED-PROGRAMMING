#include <stdio.h>
int main (void){
    int limit;
    int i;

    printf ("\nPlease enter the limit: ");
    scanf ("%d", &limit);
    for (i = 1; i <= limit; i++) {
        printf("\t%d\n", i);
    }
    return 0;
} 