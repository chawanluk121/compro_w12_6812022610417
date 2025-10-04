#include<stdio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 5,b = 10;
    printf("Before swap: a = %d, b = %d\n",a,b);
    swap(&a,&b);
    printf("After  swap: a = %d, b = %d\n",a,b);
    return 0;
}
/*
กำหนดตัวแปร a = 5,b = 10A
แสดงค่าของ a , b ก่อนสลับค่า 
ใช้ฟังชัน swap ส่งค่าของ a,b ให้ swap
แสดงค่าของ a,b หลังจากสลับค่า
จบการทำงาน
*/