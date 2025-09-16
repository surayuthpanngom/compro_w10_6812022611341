#include <stdio.h>

int main() {
    float score[3][3]; // 3 คน × 3 วิชา
    float avg[3] = {0}; // เก็บค่าเฉลี่ยของแต่ละวิชา
    int i, j;

    // รับค่าคะแนนของนักศึกษาแต่ละคน
    for (i = 0; i < 3; i++) {
        printf("Enter scores for Student %d:\n", i + 1);
        printf("Math: ");
        scanf("%f", &score[i][0]);
        printf("Physics: ");
        scanf("%f", &score[i][1]);
        printf("Chemistry: ");
        scanf("%f", &score[i][2]);
    }

    // แสดงผลคะแนนเป็นตาราง
    printf("\nScore Table:\n");
    printf("Student   Math     Physics   Chemistry\n");
    for (i = 0; i < 3; i++) {
        printf("%d        ", i + 1);
        for (j = 0; j < 3; j++) {
            printf("%7.2f ", score[i][j]);
            avg[j] += score[i][j]; // บวกเพื่อใช้หาเฉลี่ยรายวิชา
        }
        printf("\n");
    }

    // คำนวณและแสดงค่าเฉลี่ยรายวิชา
    printf("\nAverage per subject:\n");
    printf("Math = %.2f\n", avg[0] / 3);
    printf("Physics = %.2f\n", avg[1] / 3);
    printf("Chemistry = %.2f\n", avg[2] / 3);

    return 0;
}