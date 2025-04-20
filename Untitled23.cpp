#include <stdio.h>

#define SIZE 3 // kich thuoc mang 3x3

void print_array(int arr[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Truong hop 1: khai bao mang voi gia tri da biet
    int array1[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("mang hai chieu da khai bao:\n");
    print_array(array1);

    // Truong hop 2: mang duoc nhap vao tu ban phim
    int array2[SIZE][SIZE];

    printf("Nhap gia tri cho mang 2 chieu (3x3):\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Nhap phan tu  [%d][%d]: ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }

    printf("Mang 2 chieu sau khi nhap tu ban phim:\n");
    print_array(array2);

    return 0;
}
