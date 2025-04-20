#include <stdio.h>

// Ham tim UCLN
int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Ham tim BCNN
int bcnn(int a, int b) {
    return (a * b) / ucln(a, b);
}

int main() {
    int a, b;

    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("Vui long nhap cac so nguyen duong.\n");
        return 1; // Ket thuc chuong trinh voi ma loi
    }

    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, ucln(a, b));
    printf("Boi chung nho nhat cua %d va %d la: %d\n", a, b, bcnn(a, b));

    return 0; // Ket thuc chuong trinh thanh cong
}
