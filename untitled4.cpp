#include<stdio.h>
#include<math.h>

#include<stdio.h>
int isprime(int n) {
    if (n <= 1) {
        return 0; 
    }
    for (int i = 2; i  <= n - 1; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int number;

    
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);

   
   
    if (isprime(number)) {
        printf("%d la so nguyen to!\n", number);
    } else {
        printf("%d khong phai la so nguyen to!\n", number);
    }

    return 0;
}








