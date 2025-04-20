#include <stdio.h>
#include <math.h>
int main() {
    int n;
    double sum_S = 0.0;
    double T = 1.0;

    printf("Nhap gia tri n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
      	T *= i; 
        sum_S += 1.0 / T;
    }

    printf("tong cua day S la: %.10f\n", sum_S);

    return 0;
}
