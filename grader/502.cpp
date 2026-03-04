#include<stdio.h>
#include<string.h>

int main(){
    int length;
    scanf("%d",&length);
    char word[21];
    char best[21];
    best[0] = '\0'; 
    int maxlen = 0;
    for(int i = 0; i < length; i++){
        scanf("%s",word);
        int check = 1;
        for(int j = 0; word[j] != '\0'; j++){
            if(word[j] < 'a' || word[j] > 'z'){
                check = 0;
                break;
            }
        }
        int len = strlen(word);
        if(check == 1 && len > maxlen){
            maxlen = len;
            strcpy(best,word);
        }
    }
    printf("%s", best); 

    return 0;
}