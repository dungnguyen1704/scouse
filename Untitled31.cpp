#include <stdio.h>

#define SIZE 10 // Kich thuoc mang

// Ham tim phan tu nho nhat va lon nhat trong mang
void find_min_max(int *arr, int size, int *min, int *max) {
    *min = *max = arr[0]; // Khoi tao Min Max bang phan tu dau tien

    for (int i = 1; i < size; i++) {
        if (*(arr + i) < *min) {
            *min = *(arr + i); //Cap nhat min
        }
        if (*(arr + i) > *max) {
            *max = *(arr + i); //Cap nhat max
        }
    }
}

int main() {
    int array[SIZE]; // Khai bao mang so nguyen
    int min, max; // Bien luu gia tri nho nhat va lon nhat

    // Nhap gia tri cho mang
    printf("Nhap %d so nguyen:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Nhap phan tu [%d]: ", i);
        scanf("%d", &array[i]);
    }

    // Tim phan tu nho nhat va lon nhat
    find_min_max(array, SIZE, &min, &max);

    // Tn ket qua
    printf("Phan tu nho nhat trong mang la: %d\n", min);
    printf("Phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}
