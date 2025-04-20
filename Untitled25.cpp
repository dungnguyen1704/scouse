#include <stdio.h>

double power(double x, int y) {
    double result = 1.0;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

int main() {
    double x;
    int y;

    printf("Nhap gia tri x: ");
    scanf("%lf", &x);
    printf("Nhap gia tri y: ");
    scanf("%d", &y);

    double result = power(x, y);
    printf("%.2f^%d = %.2f\n", x, y, result);

    return 0;
}
