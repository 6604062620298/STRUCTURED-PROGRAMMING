#include<stdio.h>
int main(){
    int n,year;
    int count = 0;
    int noapphelpz = 0;
    double grade;
    char z;
    scanf("%d", &n);
    for(int k = 0; k < n; k++){
        scanf("%d %lf %c",&year, &grade, &z);
        if(year >= 2 && z == 'Y'){
            if(grade < 2.50){
                printf("not approved:grade < 2.50\n");
            }else{
                printf("approved\n");
            }
        }else if(grade >= 3.00){
            printf("approved\n");
            noapphelpz++;
        }else if(z == 'N'){
            printf("not approved:no help\n");
            count++;
            noapphelpz++;
        }else if(year < 2){
            printf("not approved:year < 2\n");
        }
    }
    printf("%d \n%d", count, noapphelpz);
    return(0);
}