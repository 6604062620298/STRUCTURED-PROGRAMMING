#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[50];
    int score[5];
} Student;

int main(){

    Student s[10];
    FILE *fp;
    int i,j;

    /* รับข้อมูล */
    for(i=0;i<10;i++){
        printf("Student %d name: ",i+1);
        scanf("%s",s[i].name);

        for(j=0;j<5;j++){
            printf("Score %d: ",j+1);
            scanf("%d",&s[i].score[j]);
        }
    }

    /* เขียนไฟล์ */
    fp = fopen("lab11no2/std10.dat","wb");
    fwrite(s,sizeof(Student),10,fp);
    fclose(fp);

    /* อ่านไฟล์ */
    fp = fopen("lab11no2/std10.dat","rb");
    fread(s,sizeof(Student),10,fp);
    fclose(fp);

    /* คำนวณผล */
    for(i=0;i<10;i++){

        int sum = 0;
        int less10 = 0;

        for(j=0;j<5;j++){
            sum += s[i].score[j];

            if(s[i].score[j] < 10)
                less10++;
        }

        float avg = sum / 5.0;

        printf("%s\n",s[i].name);
        printf("Total = %d\n",sum);
        printf("Average = %.2f\n",avg);
        printf("Less than 10 = %d\n\n",less10);
    }

    return 0;
}