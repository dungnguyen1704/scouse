#include <stdio.h>

#define SIZE 10 // Kich thuoc mang

int main() {
    int array[SIZE]; // Khai bao mang so nguyen co 10 phan tu
    int *ptr = array; // Khai bao con tro tro den mang

    // Nhap gia tri cho mang
    printf("Nhap %d so nguyen:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Nhap phan tu [%d]: ", i);
        scanf("%d", ptr + i); // Su dung con tro de nhap gia tri
    }

    // In mang theo hang ngang
    printf("Mang da nhap la: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", *(ptr + i)); // Su dung con tro de in gia tri
    }
    printf("\n"); // xuong dong sau khi in xong

    return 0;
}
