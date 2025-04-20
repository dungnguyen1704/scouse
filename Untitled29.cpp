#include <stdio.h>

// Ham hoan doi gia tri cua 2 bien su dung con tro
void swap(int *x, int *y) {
    int temp = *x; // Luu gia tri cua x vao bien tam
    *x = *y;       // Gan gia tri cua y cho x
    *y = temp;     // Gan gia tri tam cho cho y
}

int main() {
    int a, b;

    // Nhap gia tri cho a và b
    printf("Nhap gia tri a: ");
    scanf("%d", &a);
    printf("Nhap gia tri  b: ");
    scanf("%d", &b);

    printf("Truoc khi hoan doi: a = %d, b = %d\n", a, b);

    // Goi ham hoan doi
    swap(&a, &b);

    printf("Sau khi hoan doi: a = %d, b = %d\n", a, b);

    return 0;
}
