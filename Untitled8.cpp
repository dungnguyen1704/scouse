#include<stdio.h>
#include<math.h>
// viet chuong trinh nhap tinh ra n! trong do n nhap vao tu ban phim
int main (){
	int n , tong = 1;
	printf("nhap vao 1 so nguyen duong bat ki :");
	scanf("%d", &n);
	if(n < 0){
		printf("giai thua khong dinh nghia cho so am");
	}
	else{
			for(int i = 1; i <= n; i++){
		tong *= i;
		printf("%d", tong);
	}
	}


}
