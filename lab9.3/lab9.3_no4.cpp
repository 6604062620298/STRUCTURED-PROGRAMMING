#include <stdio.h>

#define MAX 50

int countVowel(char []);
void count(char []);
int main() {
    char text[MAX];
    int cVowel;

    printf("Enter text : ");
    scanf("%s", text);

    cVowel  = countVowel(text);
    printf("Text : [%s] has %d vowels\n", text, cVowel);
    count(text);
    return 0;
}

int countVowel(char t[]) {
    int i = 0, count = 0;

    while (i < MAX && t[i] != '\0') {
        if (t[i] == 'A' || t[i] == 'a' ||
            t[i] == 'E' || t[i] == 'e' ||
            t[i] == 'I' || t[i] == 'i' ||
            t[i] == 'O' || t[i] == 'o' ||
            t[i] == 'U' || t[i] == 'u') {
            count++;
        }
        i++;
    }

    return count;
}
void count(char t[]){
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    for(int j = 0; t[j] != '\0';  j++){
        if(t[j] == 'A' || t[j] == 'a'){
            a++;
        }else if(t[j] == 'E' || t[j] == 'e'){
            e++;
        }else if(t[j] == 'I' || t[j] == 'i'){
            i++;
        }else if(t[j] == 'O' || t[j] == 'o'){
            o++;
        }else if(t[j] == 'U' || t[j] == 'u'){
            u++;
        }
    }
    printf("A or a: %d\n", a);
    printf("E or e: %d\n", e);
    printf("I or i: %d\n", i);
    printf("O or o: %d\n", o);
    printf("U or u: %d\n", u);
}
