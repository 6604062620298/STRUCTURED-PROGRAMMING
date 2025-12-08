#include <stdio.h>

int main(void) {
    int n;

    /* อ่านทีละจำนวนจนหมดอินพุต (EOF) */
    while (scanf("%d", &n) == 1) {

        /* เลือกคำด้วย ternary ล้วน ๆ */
        const char *word =
            (n == 0) ? "zero"  :
            (n == 1) ? "one"   :
            (n == 2) ? "two"   :
            (n == 3) ? "three" :
            (n == 4) ? "four"  :
            (n == 5) ? "five"  :
            (n == 6) ? "six"   :
            (n == 7) ? "seven" :
            (n == 8) ? "eight" :
            (n == 9) ? "nine"  :
                        "error";

        puts(word);
    }
    return 0;
}
