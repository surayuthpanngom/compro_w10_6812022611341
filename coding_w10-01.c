#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg;

    // รับจำนวน นศ.
    printf("Enter number of students: ");
    scanf("%d", &n);

    int score[n]; // กำหนด array ตามจำนวน นศ.

    printf("Enter %d student scores (one per line):\n", n);

    // รับคะแนนทีละคน
    for (i = 0; i < n; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &score[i]);
        sum += score[i];  // บวกสะสม
    }

    // คำนวณค่าเฉลี่ย
    avg = sum / n;

    // แสดงผล
    printf("\nNumber of students = %d\n", n);
    printf("Average score = %.2f\n", avg);

    return 0;
}

    