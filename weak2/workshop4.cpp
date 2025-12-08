#include<stdio.h>
#include<math.h>
// 4.1 a=1, b=1, c=5, d=1
// 4.2 a=9, b=2, c=0, d=1
// 4.3 a=0, b=3, c=3, d=3
int main(){

    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    // WSA
    float cal = (3.0 * a / 5.0) + (1.0 / b) ;
    printf("%.1f\n",cal);

    // WSB
    float cal2 = (3.0 * a + 5.0 * b) / (2.0 + c);
    printf("%.2f\n",cal2);

    float cal3 = (2.0 * 7.0) * (pow(4.0, 3 + c) - 5.0 * d);
    printf("%.2f\n",cal3);

    float cal4 = sqrt((2.0 + 8.0 * b) / a);
    printf("%.2f\n",cal4);

    float cal5 = cbrt( b*b - 4.0*d );
    printf("%.2f\n",cal5);

    return 0;
}