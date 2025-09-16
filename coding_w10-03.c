#include <stdio.h>
#include <string.h>

int main() {
    char name1[50], name2[50];

    // รับชื่อลูกค้า 2 คน
    printf("Enter name of customer 1: ");
    scanf("%s", name1);
    printf("Enter name of customer 2: ");
    scanf("%s", name2);

    // ตรวจสอบว่าชื่อเหมือนกันหรือไม่
    if (strcmp(name1, name2) == 0) {
        // ถ้าเหมือนกัน
        printf("Both of your names are the same, which is %s.\n", name1);
        printf("The length of the name is %lu characters.\n", strlen(name1));
    } else {
        // ถ้าไม่เหมือนกัน
        printf("Customer 1: %s (%lu characters)\n", name1, strlen(name1));
        printf("Customer 2: %s (%lu characters)\n", name2, strlen(name2));
    }

    return 0;
}