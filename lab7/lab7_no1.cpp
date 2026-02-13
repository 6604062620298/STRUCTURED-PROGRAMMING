#include<stdio.h>

double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);

int main(void) {
    int a=1, b=2, c=3, d=4, e=5;
    double r=1.5, s=2.6, t=1.7, u=1.8, v=1.9;
  	//function calling (a-k)

    functionM();
    // ไม่มีข้อผิดพลาด

    a = functionM();
    // ไม่มีข้อผิดพลาด แต่ functionM retune ค่าเป็น double แต่ a เป็น int double จะถูกตัดทิ้งเป็น int แทน

    b = functionN(a, b);
    // มีข้อผิดพลาดใน functionN ต้องการ double แต่ b เป็นค่า int

    r = functionO(r,a,s,b);
    // มีข้อผิดพลาด เพราะใน func ไม่ได้ประกาศตัวแปรไว้รับข้อมูล เช่น int n, double x เป็นต้น

    s = functionP(a,b,c,d,e);
    // มีข้อผิดพลาด เพราะใน func รับ parameter ได้แค่ 4 แต่เราส่งไป 5 ตัว

    u = functionM();
    // ไม่มีข้อผิดพลาด

    c = d + functionN(r,s);
    // มีข้อผิดพลาดใน functionN ต้องการ int แต่ r เป็นค่า double
    
    t = s * functionO(r, a, r, a);
    // มีข้อผิดพลาดเพราะใน func ไม่ได้ประกาศตัวแปรไว้รับข้อมูล เช่น int n, double x เป็นต้น

    a = v + functionP(r, s, t, t);
    // มีข้อผิดพลาด เพราะใน functionP ต้องการ int 4 ตัว แต่ส่ง double ไปทั้งหมด

    functionP(functionN(a, a), s, t, t+r);
    // มีข้อผิดพลาด functionN(a,a) → ตัวที่ 2 ต้องเป็น double และ s,t,t+r → เป็น doubleแต่ functionP ต้องการ int ทั้งหมด

    v = functionP(functionN(a, a), s, t, t+r);
    // ผิดเหมือนข้อที่แล้ว
}
double functionM(void){
    int n = 9;
    return n;
};
int functionN(int n, double x){
    return n + x;
};
double functionP(int a, int n, int b, int c){
    return a + n + b + c;
};
// double functionO(double, int, double, int){
    // ผิดเพราะไม่มี ตัวแปรมารับค่า ตัวอย่างที่ถูกต้อง double n, int y, double q, int i
// }


