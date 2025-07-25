#include <stdio.h>

int main() {
    char nameInitial = 'O';     //  ใช้ char สำหรับตัวอักษร 1 ตัว
    int age = 19;               //  ใช้ int สำหรับอายุ
    float weight = 60;        //  ใช้ float สำหรับน้ำหนัก
    char gender[] = "Female";   //  ใช้ string (char array) สำหรับเพศ

    // แสดงผลค่าตัวแปรบนหน้าจอคอมพิวเตอร์
    printf("Initial: %c\n", nameInitial);
    printf("Age: %d\n", age);
    printf("Weight: %.1f\n", weight);
    printf("Gender: %s\n", gender);

    return 0; // ไม่มี error
}