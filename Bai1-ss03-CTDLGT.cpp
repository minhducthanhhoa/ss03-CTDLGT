#include<stdio.h>

int factorial(int n);
int main(){
	// Tinh n!
	int n;
	printf("Nhap vao so nguyen duong: ");
	scanf("%d", &n);
	int result = factorial(n);
	printf("ket qua la %d", result);

	return 0;
}

int factorial(int n){
	// phan co so 
	if(n == 0){
		return 1;
	}
	// phan de quy
	return n * factorial(n - 1);
	
}


