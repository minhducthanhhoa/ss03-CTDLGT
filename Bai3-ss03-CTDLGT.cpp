#include<stdio.h>

void printFibonacci(int n){
		int f0 = 0, f1 = 1, fn;
		
		for(int i = 0; i < n; i++){
			if(i == 0){
				printf("%d", f0);
			} else if(i == 1){
				printf(",%d", f1);
			} else {
				fn = f0 + f1;
				printf(",%d", fn);
				f0 = f1;
				f1 = fn;
			}
		}
		printf("\n");
	} 

int main(){
	int n;
	printf("Nhap vao so lan hien thi so Fibonacci: " );
	scanf("%d", &n);
	printFibonacci(n);
	return 0;
}

