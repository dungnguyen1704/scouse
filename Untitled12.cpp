#include <stdio.h>
#include <math.h>

int main (){
	int n ;
	double T = 1.0;
	double sum = 0.0;
	printf("nhap vao 1 gia tri nguyen duong : ");
	scanf("%d", &n);
	for (int i = 1; i <= n ; i ++){
	T *= i;
	sum += 1 / T;
	}
	printf("tong cua day S la : %.10f\n",sum);
}
