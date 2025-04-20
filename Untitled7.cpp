#include <stdio.h>
#include <math.h>
	int main (){
		int n ;
		float S;
		printf("nhap vao 1 so bat ki :");
		scanf("%d", &n);
		for(float i = 1; i <= n; i++){
			
		S += 1/i;
		}
		printf("tong cua day so la : %.2f",S);

	}
