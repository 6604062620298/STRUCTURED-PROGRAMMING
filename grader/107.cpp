#include <stdio.h>

int main() {
    const char *word[]= {
        "Zero","One","Two","Three","Four",
        "Five","Six","Seven","Eight","Nine"
    };
    int input;
    while(scanf("%d", &input) == 1){
        int a = input / 100;
        int b = (input / 10) % 10;
        int c = input % 10;
        printf("%s %s %s\n", word[a], word[b], word[c]);
    }
    return 0;
}