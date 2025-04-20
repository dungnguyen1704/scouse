#include <stdio.h>

#define SIZE 3 // Kich thuoc ma tran

// Ham nhap ma tran
void input_matrix(int matrix[SIZE][SIZE]) {
    printf("Nhap gia tri cho ma tran (3x3):\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Ham in ma tran
void print_matrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Ham tinh tong cua 2 ma tran
void add_matrices(int matrix1[SIZE][SIZE], int matrix2[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Ham tinh tich cua 2 ma tran
void multiply_matrices(int matrix1[SIZE][SIZE], int matrix2[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0; // Khoi tao phan tu ket qua
            for (int k = 0; k < SIZE; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int matrix1[SIZE][SIZE], matrix2[SIZE][SIZE];
    int sum[SIZE][SIZE], product[SIZE][SIZE];

   
    input_matrix(matrix1);


    input_matrix(matrix2);

    // Tinh tong cua 2 ma tran
    add_matrices(matrix1, matrix2, sum);
    printf("Tong cua 2 ma tran la :\n");
    print_matrix(sum);

    // Tinh tich cua 2 ma tran
    multiply_matrices(matrix1, matrix2, product);
    printf("Tich cua 2 ma tran la:\n");
    print_matrix(product);

    return 0;
}
