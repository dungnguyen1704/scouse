#include <stdio.h>

int main() {
    int n;

    // Nhap kich thuoc mang
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    int totalSum = 0;
    int positiveSum = 0;
    int negativeSum = 0;
    int positiveCount = 0;
    int negativeCount = 0;

    // Nhap cac phan tu cua mang
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i]; // Tinh tong tat ca cac phan tu

        // Tinh tong và dem so duong và so âm
        if (arr[i] > 0) {
            positiveSum += arr[i];
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeSum += arr[i];
            negativeCount++;
        }
    }

    // Tinh trung binh cong
    double average = (double)totalSum / n;
    double positiveAverage = (positiveCount > 0) ? (double)positiveSum / positiveCount : 0;
    double negativeAverage = (negativeCount > 0) ? (double)negativeSum / negativeCount : 0;

    // In ra ket qua
    printf("Tong tat ca phan tu trong mang: %d\n", totalSum);
    printf("Tong cac so nguyen duong: %d\n", positiveSum);
    printf("Tong cac so nguyen am: %d\n", negativeSum);
    printf("Trung binh cong cua mang: %.2f\n", average);
    printf("Trung binh cong so duong: %.2f\n", positiveAverage);
    printf("Trung binh cong so am: %.2f\n", negativeAverage);

    return 0; // Ket thuc chuong trinh thanh cong
}
