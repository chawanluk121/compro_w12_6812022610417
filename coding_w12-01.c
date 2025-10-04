#include <stdio.h>

int main(){
    int x = 10;
    int *ptr;
    ptr = &x;
    printf("Befroe: x = %d\n",x);
    *ptr = 20;
    printf("After : x = %d\n",x);
    return 0;

}
/*
กำหนดตัวแปร x เท่ากับ 10
กำหนดตัวแปร *ptr
กำหนดให้ ptr ชี่ไปยังที่อยู่ x
แสดงค่าปัจจุบันของ x 
ใช้ *ptr เปลี่ยนค่าของ x เป็น 20
แสดงค่าปัจจุบันของ x
จบการทำงาน
*/