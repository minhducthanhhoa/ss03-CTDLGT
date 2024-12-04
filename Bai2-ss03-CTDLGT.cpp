#include<stdio.h>

int sumRange(int n, int m){
	if(n > m){
		return 0;
	}
	return n + sumRange(n + 1, m);
} 

int main(){
	int n, m;
	
	printf("Nhap n va m: ");
	scanf("%d %d", &n, &m);
	if(n > m){
		printf("Vui long nhap n < m. \n");
	} else {
		printf("Tong cac so tu %d den %d la: %d", n, m, sumRange(n, m));
	}
	return 0;
}

