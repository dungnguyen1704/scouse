#include <stdio.h>
#include <math.h>

int main (){
	int n ;
	printf("nhap vao 1 gia tri duong bat ki :");
	scanf("%d",&n);
	int tong = 0;
	for(int i = 1;i <= n; i++){
		if (n % i == 0){
			tong += i;
		}

	}
	if (tong == 2*n){
		printf("%d la so hoan hao !", n);
		
	}
	else{
		printf("%d khong la so hoan hao !", n);
	}

}
