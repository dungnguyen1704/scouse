#include <stdio.h>
int count_occurrences(int arr[], int size, int x) {
    int count = 0; //Bien dem so lan xuat hien
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            count++; //Tang bien dem neu tim thay  x
        }
    }
    return count; // Tra ve so lan xuat hien
}

int main() {
    int array[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 1};
    int size = sizeof(array) / sizeof(array[0]);
    int x;

    printf("Nhap phan tu can tim: ");
    scanf("%d", &x); // Nhap phan tu tu nguoi dung

    int occurrences = count_occurrences(array, size, x);
    printf("Phan tu %d xuat hien %d lan trong mang.\n", x, occurrences);

    return 0;
}
