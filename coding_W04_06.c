#include <stdio.h>

const int GLOBAL_RATE = 10; // ค่าเท่าเดิมที่ระดับ global ใช้ได้ในทุกที่

void calculate() {
    const int LOCAL_BONUS = 50; // ค่าเท่าเดิมที่ระดับ local ใช้ได้ในฟังก์ชันนี้

    // แสดงผลทั้ง global และ local
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS in function = %d\n", LOCAL_BONUS);
}

int main() {
    calculate(); // เรียกใช้ฟังก์ชันที่มี local constant

    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE); // ใช้ global ได้ใน main

    // LOCAL_BONUS จะ error เพราะอยู่ด้านนอก scope
    // printf("LOCAL_BONUS in main = %d\n", LOCAL_BONUS);

    return 0;
}
