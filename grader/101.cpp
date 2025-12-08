#include <stdio.h>

int main(void) {
    int x;
    while (scanf("%d", &x) == 1) {  // อ่านทีละตัวจนหมด
        printf("%d\n", x + 9);
    }
    return 0;
}
