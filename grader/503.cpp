#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    char input[50];
    for(int i = 0; i < n; i++){
        scanf("%s",input);
        int lenuser = -1;
        for(int j = 0; input[j] != '\0'; j++){
            if(input[j] == ':'){
                lenuser = j;
                break;
            }
        }
        if(lenuser != 4){
            continue;
        }
        int invalid = 1;
        if(input[0] >= '0' && input[0] <= '9'){
            invalid = 0;
        }
        if(invalid){
            for(int j = 0; j < lenuser; j++){
                char c = input[j];
                if((c < 'a' || c > 'z') && (c < 'A' || c > 'Z') && (c < '0' || c > '9')){
                    invalid = 0;
                    break;
                }
            }
        }
        if(invalid == 0){
            continue;
        }
        int startpass = lenuser + 1;
        int lenpass = 0;
        for(int j = startpass; input[j] != '\0'; j++){
            lenpass++;
        }
        if(lenpass < 4 || lenpass > 8){
            continue;
        }
        int digital = 0;
        int upper = 0;
        int passinvalid = 1;
        for(int j = startpass; input[j] != '\0'; j++){
            char h = input[j];
            if((h < 'a' || h > 'z') && (h < 'A' || h > 'Z') && (h < '0' || h > '9')){
                passinvalid = 0;
                break;
            }
            if(input[j] >= '0' && input[j] <= '9'){
                digital++;
            }
            if(input[j] >= 'A' && input[j] <= 'Z'){
                upper++;
            }
        }
        if(digital < 2 || upper < 1){
            passinvalid = 0;
        }
        if(passinvalid == 0){
            continue;
        }
        for(int  j = 0; j < lenuser; j++){
            printf("%c", input[j]);
        }
        printf("\n");
    }
}