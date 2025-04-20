#include <stdio.h>

// Ham de quy de tinh gia tri day fibonacci tai vi tri n
int fibonacci(int n) {
    if (n == 0) {
        return 0; // Fibonacci(0) = 0
    } else if (n == 1) {
        return 1; // Fibonacci(1) = 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // De quy
    }
}

int main() {
    int n;

    printf("Nhap gia tri n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Gia tri Fibonacci khong xac dinh cho so am.\n");
    } else {
        int result = fibonacci(n);
        printf("Fibonacci(%d) = %d\n", n, result);
    }

    return 0;
}
