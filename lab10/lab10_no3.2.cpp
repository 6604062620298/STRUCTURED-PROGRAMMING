#include <stdio.h> 
#include <stdlib.h> 
struct Books{ 
int BookID; 
    char BookTitle[50]; 
} ComputerBook; 
void DisplayData(struct Books *CBook); 

int main() { 
    printf("Enter Book ID :");      
    scanf("%d",&ComputerBook.BookID); 
    printf("Enter Book Title :");   
    scanf("%s",ComputerBook.BookTitle); 
    DisplayData(&ComputerBook);    // ส่งตำแหน่งที่อยู่ข้อมูลไปยังฟังก์ชัน DisplayData 
    return 0; 
} 
void DisplayData(struct Books *CBook){ 
    printf("Book ID : %d \n",(*CBook).BookID); 
    printf("Book Title : %s \n",CBook->BookTitle); 
} 
// คำตอบ
//  (*CBook).BookID คือ การเข้าถึงสมาชิกของ BookID ของ struct Books โดย CBook เป็น pointer ที่ชี้ไปยัง struct
// CBook->BookTitle คือ การเข้าถึงสมาชิกของ BookTitle ของ struct Books ผ่าน point โดยใช้ เครื่องหมาย -> เป็นรู้แบบย่อของ *(CBook)