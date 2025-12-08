#include <stdio.h>

int main() {

    int sum,mid,Final,lab;
    scanf("%d/%d/%d/%d",&mid,&lab,&Final );
    sum = mid + lab + Final ;
    int need = 80 - sum;

    if (sum >= 80) {
        printf("A\n");                    // ถึง 80 แล้ว พิมพ์เกรดอย่างเดียว
    } else if (sum >= 70) {
        printf("B %d\n", need);           // ยังไม่ถึง 80 → พิมพ์เกรด + need
    } else if (sum >= 60) {
        printf("C %d\n", need);
    } else {
        printf("F %d\n", need);
    }
    return 0;
}