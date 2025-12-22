#include <stdio.h>

int main() {
    
    int row, col;
    char text;
    scanf("%c %d %d", &text, &col, &row);    
    for (int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%c", text);
        }
        printf("\n");
    }

    return 0;
}