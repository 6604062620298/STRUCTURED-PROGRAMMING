#include <stdio.h>

int main() {
    int row, col, num;
    int a[100][100];

    // อ่านขนาดตาราง
    scanf("%d %d", &row, &col);

    // อ่านสมาชิกของเมทริกซ์ A
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // อ่านค่าที่จะค้นหา (num)
    scanf("%d", &num);

    // a) แสดงสมาชิกแถวสุดท้าย
    printf("a) ");
    for (int j = 0; j < col; j++) {
        printf("%d ", a[row - 1][j]);
    }
    printf("\n");

    // b) แสดงสมาชิกคอลัมน์แรก
    printf("b) ");
    for (int i = 0; i < row; i++) {
        printf("%d ", a[i][0]);
    }
    printf("\n");

    // ใช้ค่านี้ร่วมในข้อ c) d)
    int ref = a[0][2];   // แถวที่ 1 ตัวที่ 3 (index 0,2)

    // c) แสดงสมาชิกที่มีค่ามากกว่า ref
    printf("c) ");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (a[i][j] > ref) {
                printf("%d ", a[i][j]);
            }
        }
    }
    printf("\n");

    // d) แสดง index ของสมาชิกที่มีค่ามากกว่า ref
    printf("d) ");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (a[i][j] > ref) {
                printf("%d,%d ", i, j);
            }
        }
    }
    printf("\n");

    // e) เพิ่มสมาชิกตัวต่อไปของแต่ละแถว = ผลรวมของสมาชิกตัวที่ 3 และ 4
    printf("e)\n");
    for (int i = 0; i < row; i++) {
        a[i][col] = a[i][2] + a[i][3];  // ตัวที่ 3 คือ index 2, ตัวที่ 4 คือ index 3
    }
    col++;  // ตอนนี้มีคอลัมน์เพิ่มอีก 1

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // f) สลับคอลัมน์ที่ 2 กับคอลัมน์สุดท้าย
    printf("f)\n");
    for (int i = 0; i < row; i++) {
        int temp = a[i][1];
        a[i][1] = a[i][col - 1];
        a[i][col - 1] = temp;
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // g) สลับแถวที่ 1 กับแถวสุดท้าย
    printf("g)\n");
    for (int j = 0; j < col; j++) {
        int temp = a[0][j];
        a[0][j] = a[row - 1][j];
        a[row - 1][j] = temp;
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // h) คัดเฉพาะเลขคู่ไปลงอาร์เรย์ 1 มิติ new
    printf("h) ");
    int neww[100];
    int k = 0;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (a[i][j] % 2 == 0) {
                neww[k++] = a[i][j];
            }
        }
    }

    printf("new=[");
    for (int i = 0; i < k; i++) {
        printf("%d", neww[i]);
        if (i < k - 1) printf(" ");
    }
    printf("]\n");

    // i) แสดงตารางเดิม แต่ใส่ <> รอบสมาชิกที่มีค่าเท่ากับ num
    printf("i)\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (a[i][j] == num) {
                printf("<%d> ", a[i][j]);
            } else {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
