#include <stdio.h> 
#include <stdlib.h> 
struct Books{ 
    int BookID; 
    char BookTitle[50]; 
} ComputerBook; 
void DisplayData(struct Books CBook); 

int main() { 
    printf("Enter Book ID :");      
    scanf("%d",&ComputerBook.BookID); 
    printf("Enter Book Title :");   
    scanf("%s",ComputerBook.BookTitle); 
    DisplayData(ComputerBook); // ส่งข้อมูลไปยังฟังก์ชัน DisplayData 
    return 0; 
} 
void DisplayData(struct Books CBook){ 
    printf("Book ID : %d \n",CBook.BookID); 
    printf("Book Title : %s \n",CBook.BookTitle); 
} 

// คำตอบ 
// 1 void DisplayData(struct Books CBook) คือ เป็น func ในการเเสดง BookId กับ Book Title จากที่เรา Input เข้ามา
// 2 พารามิเตอร์ที่รับเข้ามา คือ CBook เป็นตัวแปรชนิด sturuct Books โดยค่าถูกส่งมาจาก ComputerBook 