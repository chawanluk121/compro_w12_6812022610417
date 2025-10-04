#include<stdio.h>

void doubleArray(int *arr,int size){
    for (int i = 0; i < size; i++){
        arr[i]*=2;
    }
}
int main(){
    int a[]={1,2,3,4,5};
    int size=5;
    printf("Before: ");
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
        
    } 
    printf("\n");
    doubleArray(a,size);
    printf("After : ");
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);

    }printf("\n");
return 0;
}
/*
ฟังชัน doubleArray
คูณค่าแต่ละตัวใน array ด้วย 2
กำหนดตัวแปร  a[]={1,2,3,4,5}
กำหนดขนาด size=5
แสดงค่าของ array ก่อนเรียกใช้ฟังชัน
เรียกใช้ doubleArray เพื่อส่ง arrayไปในฟังชัน
แสดงค่าของ array หลังจากคูณด้วย 2 
จบการทำงาน
*/
