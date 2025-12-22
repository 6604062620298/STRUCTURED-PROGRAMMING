#include <stdio.h>
#include <string.h>

int main() {

    int years;
    float grade;
    char help[16];
    scanf("%d %f %15s", &years, &grade, &help);

    if(years < 2){
        printf("year < 2");    
    }else if(grade < 2.50){
            printf("grade < 2.50");
    }else if (strcmp(help, "Y") != 0){
            printf("no help");
    }else{
        printf("approved");
    }
}