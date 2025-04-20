#include <stdio.h>

// Ham de quy de tinh gia tri cua n!
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Giai thua cua 1 va 0 deu bang 1
    } else {
        return n * factorial(n - 1); // De quy
    }
}

int main() {
    int n;

    printf("Nhap gia tri n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Giai thua khong xac dinh cho so am.\n");
    } else {
        long long result = factorial(n);
        printf("%d! = %lld\n", n, result);
    }

    return 0;
}
