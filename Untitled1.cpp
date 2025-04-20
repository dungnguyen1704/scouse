#include<stdio.h>
#include<math.h>
	int main(){
	int i , so;
	int tong = 0;
	for(i = 0; i < 10 ;i++){
		printf("nhap so thu %d", i + 1);
		scanf("%d", &so);
		tong += so;
		
	}
	printf("tong 10 so nhap vao tu ban phim : %d", tong);
}
