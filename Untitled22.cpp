#include <stdio.h>

void replace_negative_with_zero(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            arr[i] = 0; // Thay th phan tu am = 0
        }
    }
}

int main() {
    int array[] = {3, -1, 4, -2, 5, -9, 2, 6, -5};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Mang truoc khi thay the:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    replace_negative_with_zero(array, size); // Goi ham de thay the
    printf("Mang sau khi thay the:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
