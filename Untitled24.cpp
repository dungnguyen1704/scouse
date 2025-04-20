#include <stdio.h>

#define SIZE 3 // Kich thuoc ma tran 3x3

void print_matrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void add_matrices(int matrix1[SIZE][SIZE], int matrix2[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j]; // Tinh tong
        }
    }
}

int main() {
    int matrix1[SIZE][SIZE], matrix2[SIZE][SIZE], result[SIZE][SIZE];

    // Nhap gia tri cho ma tran 1
    printf("Nhap gia tri cho ma tran 1 (3x3):\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // nhap gia tri cho ma tran 2
    printf("Nhap gia tri cho ma tran 2 (3x3):\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Tinh tong cua 2 ma tran
    add_matrices(matrix1, matrix2, result);

   
    printf("Tong cua 2 ma tran la:\n");
    print_matrix(result);

    return 0;
}
