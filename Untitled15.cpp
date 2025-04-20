#include <stdio.h>
#include <math.h>
 // tính 1 + 1 / 2 + 1 / 3 + ... + 1 / n
unsigned long long factorial(int num){

	unsigned long long result = 1;
	for (int i = 2; i <= num ;i++ ){
		result += i;
	}
return result;
}


 double sum_series(int n){
 	double total = 1.0;
 	for (int i = 1; i <= n ;i++){
 		total += 1.0 / factorial(i);
	 }
 	return total;
 }
 int main (){
 	int n ;
 	printf("nhap vao 1 so nguyen duong bat ki :");
 	scanf("%d", &n);
 	double result = sum_series(n);
 	printf("tong day tu 1 + 1 / 2! + ... + 1 / %d! la : %.2f\n", n , result );
 	
	 }


