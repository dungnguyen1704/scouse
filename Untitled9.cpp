#include <stdio.h>
#include <math.h>

int main(){
	int n ;
	float S;
	printf("nhap vao 1 so nguyen duong bat ki : ");
	scanf("%d", &n);
	for(float i = 1;i <= n; i ++){
		
		S += 1/i;
	}
	printf("%.2f", S);
}
