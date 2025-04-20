#include<stdio.h>
#include<math.h>

int main(){
	int n;
	printf("nhap vao 1 so nguyen bat ki :");
	scanf("%d", &n);
	printf("in ra cac uoc cua %d la :", n);
	for(int i = 1; i < n; i++){
		if(n % i == 0){
			printf("%d ", i);
		}
	}

}
